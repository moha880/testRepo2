/*
 * SSD_prg.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Ibrahem
 */

#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_int.h"
#include "SSD_int.h"

static const u8 CGS_u8SSD_Nums[] ={
		0b00111111,
		0b00000110,
		0b01011011,
		0b01001111,
		0b01100110,
		0b01101101,
		0b01111101,
		0b00000111,
		0b01111111,
		0b01101111
};

void SSD_vInit(void){

	MDIO_vSetPortDIR(SSD_PORT,0xff);
}


void SSD_vDisplayNum(u8 SSDId , u8 A_u8Num)
{
	/*input validation*/

	if (A_u8Num < 10)
	{
#if SSD_TYPE==COM_CATHODE
		MDIO_vSetPortVal(SSD_PORT , CGS_u8SSD_Nums[A_u8Num]);
#elif SSD_TYPE==COM_ANODE
		MDIO_vSetPortVal(SSD_PORT , ~CGS_u8SSD_Nums[A_u8Num]);
#endif

	}


}

void SSD_vTurnOff(void)
{
#if SSD_TYPE==COM_CATHODE

	MDIO_vSetPortVal(SSD_PORT,0);
#elif SSD_TYPE==COM_ANODE
	MDIO_vSetPortVal(SSD_PORT,0xff);
#endif

}
