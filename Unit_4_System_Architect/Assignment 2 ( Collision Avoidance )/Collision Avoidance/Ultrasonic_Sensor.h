/*
 * Ultrasonic_Sensor.h
 *
 *  Created on: Dec 16, 2022
 *      Author: ibrah
 */

#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_

#include "State.h"

enum{
	US_Init,
	US_Busy
}US_STATE_ID;

//prototypes
STATE_DECL( US_Init );
STATE_DECL( US_Busy );

//global pointer to function
void (*US_state)();

#endif /* ULTRASONIC_SENSOR_H_ */
