/**********************************************************************/
/**********************************************************************/
/**************	   Author: Mahmoud Sayed	***************************/
/**************	   Layer: HAL 				***************************/
/**************	   SWC/Driver: S.S.Display  ***************************/
/**************	   Version: 1.00			***************************/
/**********************************************************************/
/**********************************************************************/


#include "SSD_interface.h"

u8 SSD_u8SetNumber(u8 Copy_u8Number, SSD_t* Copy_pSSD_tData)
{
	u8 Local_u8Error = 0;
	if(Copy_pSSD_tData->COM_TYPE == SSD_u8COMMON_CATHODE)	
	{
		//DIO_u8SetPinDirection(Copy_pSSD_tData->ENABLE_PORT,Copy_pSSD_tData->ENABLE_PIN, DIO_u8PIN_OUTPUT);
		PORT_voidInit();
		DIO_u8SetPinValue(Copy_pSSD_tData->ENABLE_PORT,Copy_pSSD_tData->ENABLE_PIN, DIO_u8PIN_LOW);
		DIO_u8SetPortDirection(Copy_pSSD_tData->PORT, DIO_u8PORT_OUTPUT);
		DIO_u8SetPortValue(Copy_pSSD_tData->PORT, Copy_u8Number);	
	}
	else if(Copy_pSSD_tData->COM_TYPE == SSD_u8COMMON_ANODE)
	{
		//DIO_u8SetPinDirection(Copy_pSSD_tData->ENABLE_PORT,Copy_pSSD_tData->ENABLE_PIN, DIO_u8PIN_OUTPUT);
		PORT_voidInit();
		DIO_u8SetPinValue(Copy_pSSD_tData->ENABLE_PORT,Copy_pSSD_tData->ENABLE_PIN, DIO_u8PIN_HIGH);
		DIO_u8SetPortDirection(Copy_pSSD_tData->PORT, DIO_u8PORT_OUTPUT);
		DIO_u8SetPortValue(Copy_pSSD_tData->PORT, ~Copy_u8Number);	
	}
	else
	{
		Local_u8Error = 1;
	}
	return Local_u8Error;
}
