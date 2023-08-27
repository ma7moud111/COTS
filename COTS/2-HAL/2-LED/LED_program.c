/**********************************************************************/
/**********************************************************************/
/**************	   Author: Mahmoud Sayed	***************************/
/**************	   Layer: HAL 				***************************/
/**************	   SWC/Driver: LED  	    ***************************/
/**************	   Version: 1.00			***************************/
/**********************************************************************/
/**********************************************************************/

#include "LED_interface.h"

u8 LED_u8SetLedDirection(LED_t* Copy_pLED_tData)
{
	DIO_u8SetPinDirection(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN, DIO_u8PIN_OUTPUT);
}
/**********************************************************************************/
u8 LED_u8LedOn(LED_t* Copy_pLED_tData)
{
	if(Copy_pLED_tData->CONN_TYPE == LED_u8SRC)
		DIO_u8SetPinValue(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN, DIO_u8PIN_HIGH);
	else if(Copy_pLED_tData->CONN_TYPE == LED_u8SINK)
		DIO_u8SetPinValue(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN, DIO_u8PIN_LOW);

}
/************************************************************************************/
u8 LED_u8LedOff(LED_t* Copy_pLED_tData)
{
	if(Copy_pLED_tData->CONN_TYPE == LED_u8SRC)
			DIO_u8SetPinValue(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN, DIO_u8PIN_LOW);
		else if(Copy_pLED_tData->CONN_TYPE == LED_u8SINK)
			DIO_u8SetPinValue(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN, DIO_u8PIN_HIGH);
}
/**************************************************************************************/
u8 LED_u8LedToggle(LED_t* Copy_pLED_tData)
{
	DIO_u8TogglePinValue(Copy_pLED_tData->LED_PORT, Copy_pLED_tData->LED_PIN);
}
