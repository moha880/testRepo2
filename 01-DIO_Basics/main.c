/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Ibrahem
 */
#include <avr/io.h>
#include <util/delay.h>


int main(void){

	DDRA  = 0x0f;//0b00001111; //PA0 -> Output

	while(1){
//		PORTA = 0b00000001; //PA0 -> High (5v)

	//	_delay_ms(1000);
		//PORTA = 0b00000000; //PA0 -> High (5v)
	//	_delay_ms(1000);
		PORTA = 0b00000001; //PA0 -> High (5v)

		for (int i=0 ; i<4;i++){
			_delay_ms(250);
			PORTA <<=1;

		}

	}

}



