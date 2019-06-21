/*
Library:				7+1 segment led display drive for STM32 MCUs
Written by:				Daniel Arany
Date written:				19/06/2019
Description:				To use the library, first, the pinout of the seven segment display 
					must be coded into the library by creating a SevenSegment_WiresTypedef 
					type variable and passing it to the init function before using any of 
					the other functions.
Public functions:			SevenSegment_Init 			: initializes the library	
					SevenSegment_Delete			: deactivates all of the LED-s
					SevenSegment_DisplayHexNum		: displays the number in the parameter
										in hexadecimal.
*/

//Header files
#include "stm32f4xx_hal.h"

//typedefs, enums
typedef enum {
	Segment_A,
	Segment_B,
	Segment_C,
	Segment_D,
	Segment_E,
	Segment_F,
	Segment_G,
	Segment_dot
}Segment_Typedef;


typedef struct
{
	GPIO_TypeDef* Port[8];
	uint16_t	Pin[8];
	
}SevenSegment_WiresTypedef;



//Initializing the display 
//The wires need to be set up manually in the user's code
void SevenSegment_Init(SevenSegment_WiresTypedef* wires);

//Lights up one segment with typedef parameter
void SetSegment(Segment_Typedef current_segment);

//Turns off all leds
void SevenSegment_Delete(void);

//Write the number in hex
void SevenSegment_DisplayHexNum (int a);

//Toggle the dot on the display
void SevenSegment_ToggleDot(void);

//Functions to show a character
void WriteCharacter_1(void);

void WriteCharacter_2(void);

void WriteCharacter_3(void);

void WriteCharacter_4(void);

void WriteCharacter_5(void);

void WriteCharacter_6(void);

void WriteCharacter_7(void);

void WriteCharacter_8(void);

void WriteCharacter_9(void);

void WriteCharacter_0(void);

void WriteCharacter_A(void);

void WriteCharacter_B(void);

void WriteCharacter_C(void);

void WriteCharacter_D(void);

void WriteCharacter_E(void);

void WriteCharacter_F(void);










