/**********************************************************************/
/**********************************************************************/
/**************	   Author: Mahmoud Sayed	***************************/
/**************	   Layer: HAL 				***************************/
/**************	   SWC/Driver: S.S.Display  ***************************/
/**************	   Version: 1.00			***************************/
/**********************************************************************/
/**********************************************************************/

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

/*seven segment types*/

#define SSD_u8COMMON_CATHODE		0
#define SSD_u8COMMON_ANODE			1

/*numbers shown on the seven segement display*/

#define SSD_u8ZERO					0x3f
#define SSD_u8ONE					0x06
#define SSD_u8TWO					0x5b
#define SSD_u8THREE					0x4f
#define SSD_u8FOUR					0x66
#define SSD_u8FIVE					0x6d
#define SSD_u8SIX					0x7d
#define SSD_u8SEVEN					0x07
#define SSD_u8EIGHT					0x7f
#define SSD_u8NINE					0x6f

typedef struct
{
	u8 COM_TYPE;
	u8 PORT;
	u8 ENABLE_PORT;
	u8 ENABLE_PIN;
}SSD_t;

u8 SSD_u8SetNumber(u8 Copy_u8Number, SSD_t* Copy_pSSD_tData);


#endif