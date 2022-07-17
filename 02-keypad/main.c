/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Ibrahem
 */
#include "STD_TYPES.h"

#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"

void KEYPAD_INIT(void){

	//PORTB -> outputs/inputs  columns/rows

	DDRB = 0xf0;
	// PULL UP resistors activation on inputs
	PORTB= 0xff ;
}

u8 Getpressedkey(void)
{

	u8 pressed_key = 0;

	for (u8 col=0 ; col<3 ; col++)
	{

		//activate current column

		CLR_BIT(PORTB,(col+4));

		for (u8 row=0 ; row<4 ; row++)
		{

			if(GET_BIT(PINB , (row) )==0)
			{
				pressed_key=((col+1)+(3*row));
			}
			while(GET_BIT(PINB,(row))==0){}
			_delay_ms(10);
		}

		//deactivate current column
		SET_BIT(PORTB,(col+4));

	}


	return pressed_key;
}

int main(void){
	 KEYPAD_INIT();
	 u8 key =0;
	 u8 x =0;
	 DDRC=255;
	 DDRD=255;

	 PORTC=0b00111111;
	 PORTD=0b00111111;


	while(1){

		key =Getpressedkey();
		if ( key!=0 ){
			x+=1;
			if(x==1){
				switch(key){
					case 1 :
						PORTC=0b00000110;
						break;
					case 2 :
						PORTC=0b01011011;
						break;
					case 3 :
						PORTC=0b01001111;
						break;
					case 4 :
						PORTC=0b01100110;
						break;
					case 5 :
						PORTC=0b01101101;
						break;
					case 6 :
						PORTC=0b01111101;
						break;
					case 7 :
						PORTC=0b00000111;
						break;
					case 8 :
						PORTC=0b01111111;
						break;
					case 9 :
						PORTC=0b01101111;
						break;
					default:
						PORTC=0b00111111;
						break;
				}
			}
			else
			{
				switch(key)
				{
					case 1 :
						PORTD=0b00000110;
						break;
					case 2 :
						PORTD=0b01011011;
						break;
					case 3 :
						PORTD=0b01001111;
						break;
					case 4 :
						PORTD=0b01100110;
						break;
					case 5 :
						PORTD=0b01101101;
						break;
					case 6 :
						PORTD=0b01111101;
						break;
					case 7 :
						PORTD=0b00000111;
						break;
					case 8 :
						PORTD=0b01111111;
						break;
					case 9 :
						PORTD=0b01101111;
						break;
					default:
						PORTD=0b00111111;
						break;

				}
				x=0;
			}
		}
	}
}
