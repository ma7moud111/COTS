/**********************************************************************/
/**********************************************************************/
/**************	   Author: Mahmoud Sayed	***************************/
/**************	   Layer: HAL 				***************************/
/**************	   SWC/Driver: LED  	    ***************************/
/**************	   Version: 1.00			***************************/
/**********************************************************************/
/**********************************************************************/

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

#define LED_u8SRC 	 		1
#define LED_u8SINK 			0

typedef struct
{
	u8 CONN_TYPE;
	u8 LED_PORT;
	u8 LED_PIN;
}LED_t;

u8 LED_u8SetLedDirection(LED_t* Copy_pLED_tData);
u8 LED_u8LedOn(LED_t* Copy_pLED_tData);
u8 LED_u8LedOff(LED_t* Copy_pLED_tData);
u8 LED_u8LedToggle(LED_t* Copy_pLED_tData);

#endif
