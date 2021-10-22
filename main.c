/*
 * project_4_main.c
 *
 *  Created on: Oct 22, 2021
 *      Author: lenovo
 */

#include "ultrasonic.h"
#include "lcd.h"
#include <avr/io.h>
#include <util/delay.h>
#include "std_types.h"


int main() {

	LCD_init();
	Ultrasonic_init();

	SREG |= (1<<7) ;


	uint16 distance  ;

	while(1) {



		LCD_moveCursor(0,0) ;
		LCD_displayString("Distance= ") ;
		LCD_moveCursor(0,13) ;
		LCD_displayString("cm") ;



		distance  = Ultrasonic_readDistance();



			LCD_moveCursor(0,10) ;

			if(distance > 100) {
				LCD_intgerToString(distance);
			}
			else {
				LCD_intgerToString(distance);
				LCD_displayCharacter(' ');
			}
			_delay_ms(1000);


	}

}
