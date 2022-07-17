/*
 * KPD_int.h
 *
 *  Created on: Jul 17, 2022
 *      Author: Ibrahem
 */

#ifndef HAL_KPD_KPD_INT_H_
#define HAL_KPD_KPD_INT_H_

#define KPD_PORT DIO_PORTB



void KPD_vInit(void);
u8 KPD_u8Getpressedkey(void);


#endif /* HAL_KPD_KPD_INT_H_ */
