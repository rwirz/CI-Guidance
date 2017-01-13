#include "TrackWorker.h"
#include "Conversions.h"
#include <QtCore>




TrackWorker::TrackWorker(int theNumberTools, QWidget *parent)
	: QDialog(parent)
{
	theTracker = NULL;
	fileProbe = NULL;
	saveProbe = false;
	numberTools = theNumberTools;
	connect(this, SIGNAL(sgn_updateTracker()), parent, SLOT(slot_updateTrackerInfo()));
}

TrackWorker::~TrackWorker()
{
	if (fileProbe != NULL)
		if (fileProbe->isOpen()) {
			fileProbe->flush();
			fileProbe->close();
		}
}

void TrackWorker::saveDataProbe(ToolInformationStruct theData) {
	if (fileProbe == NULL) {
		qDebug() << fileNameProbe;
		fileProbe = new QFile(fileNameProbe);
	}
	if (!fileProbe->isOpen()) {
		fileProbe->open(QIODevice::WriteOnly);
		time.start();
	}

	QuatRotation *myQuat = new QuatRotation;
	myQuat->q0 = theData.q0;
	myQuat->qx = theData.qx;
	myQuat->qy = theData.qy;
	myQuat->qz = theData.qz;
	Rotation *myRot = new Rotation;
	CvtQuatToEulerRotation(myQuat, myRot);
	double rotProbe[3] = { myRot->fYaw,myRot->fPitch,myRot->fRoll };

	QTextStream out(fileProbe);
	out << "\n" << time.elapsed() << "\t" << theData.x << " " << theData.y << " " << theData.z << " " << rotProbe[0] << " " << rotProbe[1] << " " << rotProbe[2] << " " << theData.q0 << " " << theData.qx << " " << theData.qy << " " << theData.qz << "\n";
	qDebug() << "Record" << endl;
}


void TrackWorker::slot_Tracker_Start_Save_Probe(QString theFileName) {
	//qDebug() << "slot_Tracker_Start_Save_Probe";
	fileNameProbe = theFileName;
	saveProbe = true;
	//qDebug() << trackerWorker->saveProbe;
}

void TrackWorker::slot_Tracker_Stop_Save_Probe() {
	saveProbe = false;
}

void TrackWorker::slots_run() {
	qDebug() << "TrackWorker::slots_run: " << QThread::currentThreadId();
	
	boost::ptr_vector< Eigen::Quaterniond > quat_Polaris;
	boost::ptr_vector< Eigen::Vector3d > p;

	boost::ptr_vector< Eigen::Matrix3d> R;
	boost::ptr_vector< Eigen::Matrix4d > T;
	
	

	quat_Polaris.resize(numberTools + 1);
	p.resize(numberTools + 1);
	R.resize(numberTools + 1);
	T.resize(numberTools + 1);
	Trans_final.resize(numberTools + 1);
	std::vector<ToolInformationStruct> tools;
	if (theTracker == NULL) { //SIMULATION
		//quat_Polaris[1] = Eigen::Quaterniond(1, 0, 0, 0);
		//quat_Polaris[2] = Eigen::Quaterniond(AngleAxisd(3.14159265358979323846 / 12.0, Vector3d::UnitZ()));
		//p[1] = Vector3d(-20, -100, -15);
		//p[2] = Vector3d(-2, 0.5, 0.2);
		//m_CItarget_transform = Matrix4d::Identity();
		//vtkSmartPointer<vtkTransform> pvtk_T_CItarget = vtkSmartPointer<vtkTransform>::New();
		//pvtk_T_CItarget->Identity();
		//m_pActor_CItarget->SetUserTransform(pvtk_T_CItarget);
	}
	else { // NO SIMULATION
		tools = theTracker->GetTransformations();
		if (saveProbe) 
				saveDataProbe(tools[1]);
		else if (fileProbe != NULL)
			if (fileProbe->isOpen()) {
				fileProbe->flush();
				fileProbe->close();
				fileProbe = NULL;
			}

		for (int toolnum = 1; toolnum <= numberTools; toolnum++) {
			quat_Polaris[toolnum] = Eigen::Quaterniond(tools[toolnum].q0, tools[toolnum].qx, tools[toolnum].qy, tools[toolnum].qz);
			p[toolnum](0) = tools[toolnum].x;
			p[toolnum](1) = tools[toolnum].y;
			p[toolnum](2) = tools[toolnum].z;
		}
		
	}
	// convert quaternion to rotation matrix and combine with translation into a transformation matrix
	

	dataTracker.lock();
	//qDebug() << "TRACKING";
	for (int toolnum = 1; toolnum <= numberTools; toolnum++) {
		R[toolnum] = quat_Polaris[toolnum].toRotationMatrix();
		T[toolnum] = Eigen::Matrix4d::Identity();
		T[toolnum].block<3, 3>(0, 0) = R[toolnum];
		T[toolnum].block<3, 1>(0, 3) = p[toolnum];
		Eigen::Matrix4d Polaris_sim_trans(4, 4);
		Polaris_sim_trans << 0, -1, 0, 0, // note: inverse is equal to itself for this matrix
			-1, 0, 0, 0,
			0, 0, -1, 0,
			0, 0, 0, 1;

		// apply similarity transform
		Trans_final[toolnum] = Polaris_sim_trans*T[toolnum] * Polaris_sim_trans.inverse();
	}
	dataTracker.unlock();
	emit sgn_updateTracker();
}
