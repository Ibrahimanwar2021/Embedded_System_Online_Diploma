/*
 * State.h
 *
 *  Created on: Dec 16, 2022
 *      Author: ibrah
 */

#ifndef STATE_H_
#define STATE_H_

#define STATE_DECL(_stateFUNC_)  void ST_##_stateFUNC_()
#define STATE(_stateFUNC_)       ST_##_stateFUNC_

#include <stdio.h>

US_Set_Distance( int d );
DC_Motor( int s );

#endif /* STATE_H_ */
