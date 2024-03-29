/*
 * Collision_Avoidance.h
 *
 *  Created on: Dec 16, 2022
 *      Author: ibrah
 */

#ifndef COLLISION_AVOIDANCE_H_
#define COLLISION_AVOIDANCE_H_

#include "State.h"

//define state
enum{
	CA_Waiting,
	CA_Driving
}CA_STATE_ID;

//declare states functions CA
STATE_DECL(CA_Waiting);
STATE_DECL(CA_Driving);

//global pointer to function
void (*CA_state)();


#endif /* COLLISION_AVOIDANCE_H_ */
