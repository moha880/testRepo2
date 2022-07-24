/*
 * LCD_int.h
 *
 *  Created on: Jul 20, 2022
 *      Author: Ibrahem
 */


#ifndef HAL_LCD_LCD_PRG_H_
#define HAL_LCD_LCD_PRG_H_

#define LCD_CTRL_PORT DIO_PORTB
#define LCD_DATA_PORT DIO_PORTA

#define LCD_RS_PIN 	  DIO_PIN0
#define LCD_RW_PIN    DIO_PIN1
#define LCD_EN_PIN    DIO_PIN2

#define LCD_CLEAR     0b00000001


void HLCD_vSendCommand(u8 A_u8Comand);
void HLCD_vSendChar(u8 A_u8Char);
void HLCD_vInit(void);
void HLCD_vPrintString(u8 A_u8string[]);
void HLCD_vPrintNumber(s32 A_s32Number);
void HLCD_vSetCursorPosition(u8 A_u8LinePos,u8 A_u8LineNo);
void HLCD_vSaveCustomarChar(/*TODO*/);
void HLCD_vDisplayCustomarChar(/*TODO*/);





#endif /* HAL_LCD_LCD_PRG_H_ */





