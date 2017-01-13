#pragma once

#include <QDialog>
#include <QFile>
#include "Tracker.h"
#include <boost/ptr_container/ptr_vector.hpp>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <QMutex>
#include <QTime>

//


class TrackWorker : public QDialog
{
	Q_OBJECT

public:
	explicit TrackWorker(int theNumberTools, QWidget *parent = Q_NULLPTR);
	boost::ptr_vector< Eigen::Matrix4d > Trans_final;
	QMutex dataTracker;
	NDIAuroraTracker *theTracker;
	QString fileNameProbe;
	QFile *fileProbe;
	bool saveProbe;
	QTime time;
	~TrackWorker();
	
public slots:
	void slots_run();
	void slot_Tracker_Start_Save_Probe(QString);
	void slot_Tracker_Stop_Save_Probe();
	
signals:
	void sgn_updateTracker();
private:
	void saveDataProbe(ToolInformationStruct theData);
	int numberTools;
};
