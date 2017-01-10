#pragma once

#include <QDialog>
#include "Tracker.h"
#include <boost/ptr_container/ptr_vector.hpp>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <QMutex>
//

class TrackWorker : public QDialog
{
	Q_OBJECT

public:
	explicit TrackWorker(int theNumberTools, QWidget *parent = Q_NULLPTR);
	boost::ptr_vector< Eigen::Matrix4d > Trans_final;
	QMutex dataTracker;
	NDIAuroraTracker *theTracker;
	~TrackWorker();
	
public slots:
	void slots_run();
signals:
	void sgn_updateTracker();
private:
	int numberTools;
};
