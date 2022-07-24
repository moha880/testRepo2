/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: Ibrahem
 */

#include <util/delay.h>


#include "../LIB/STD_TYPES.h"
#include "../HAL/LCD/LCD_int.h"

int main(void)
{
	HLCD_vInit();
	HLCD_vPrintNumber(1564);
	while(1)
	{



	}

}
