/*
 * KPD_prg.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Ibrahem
 */

#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO_int.h"


#include "KPD_int.h"

void KPD_vInit(void)
{


	DIO_vSetPortDIR(KPD_PORT,0xf0);
	DIO_vSetPortVal(KPD_PORT,0xff);
}
u8 KPD_u8Getpressedkey(void)
{

	u8 pressed_key = 0;

		for (u8 col=0 ; col<3 ; col++)
		{

			//activate current column
			DIO_vSetPinVal(KPD_PORT,(col+4),DIO_LOW);

			for (u8 row=0 ; row<4 ; row++)
			{

				if(DIO_u8GetPinVal(KPD_PORT,(row))==0)
				{
					pressed_key=((col+1)+(3*row));
				}
				while(DIO_u8GetPinVal(KPD_PORT,(row))==0){}
				_delay_ms(10);
			}

			//deactivate current column
			DIO_vSetPinVal(KPD_PORT,(col+4),DIO_HIGH);

		}


		return pressed_key;
}
