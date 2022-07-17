/*
 * SSD_int.h
 *
 *  Created on: Jul 17, 2022
 *      Author: Ibrahem
 */

#ifndef HAL_SSD_SSD_INT_H_
#define HAL_SSD_SSD_INT_H_


#define COM_CATHODE   1
#define COM_ANODE     0



#define SSD_TYPE   COM_CATHODE
#define SSD_PORT   DIO_PORTC


void SSD_vInit(void);   //99% mn el drivers bib2a fiha tazbeet ll48l ,mdrstna bn3tbrha void
void SSD_vDisplayNum(u8 A_u8Num);
void SSD_vTurnOff(void);



#endif /* HAL_SSD_SSD_INT_H_ */


