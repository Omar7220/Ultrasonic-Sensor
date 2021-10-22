/*
 * ultrasonic.h
 *
 *  Created on: Oct 22, 2021
 *      Author: lenovo
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"

void Ultrasonic_init(void) ;

void Ultrasonic_Trigger(void) ;

uint16 Ultrasonic_readDistance(void);

void Ultrasonic_edgeProcessing(void);


#endif /* ULTRASONIC_H_ */
