/**
 * @author	Michael Meindl, Benjamin Spiegler
 * @date	23.03.22
 * @brief	Method definition for CIMUData.
 */
#ifndef CIMUDATA_H
#define CIMUDATA_H
#include "Global.h"

struct CIMUData
{
public:
	union
	{
		struct
		{
			Int16 mW_x;
			Int16 mW_y;
			Int16 mW_z;
			Int16 mA_x;
			Int16 mA_y;
			Int16 mA_z;
		};
		struct
		{
			Int16 mPadding1;
			Int16 mPadding2;
			Int16 mPhi__d;		//! Sensor  Z-Angular Velocity []
			Int16 mX__dd;		//! Sensor  X-Acceleration []
			Int16 mY__dd;		//! Sensor  Y-Acceleration []
			Int16 mZ__dd;
		};
	};
};

#endif
