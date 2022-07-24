/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Ibrahem
 */

#include "../LIB/STD_TYPES.h"
#include <util/delay.h>
#include "../MCAL/DIO/DIO_int.h"
#include "../HAL/SSD/SSD_int.h"

//prebuild configuration

int main(void)
{


	SSD_vInit();

	for(u8 i=0 ; i<10 ; i++){

		SSD_vDisplayNum(1,i);
		_delay_ms(250);
	}

	while(1)
	{




	}
}

