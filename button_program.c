/*
 *<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<  button_program.c  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *
 *Author : Mohamed Abdel_tawab Farghal
 *Layer  : HAL
 *SWC    : SW
 *
 */

 #include "STD_TYPES.h"
 #include "BIT_MATH.h"

 #include "DIO_interface.h"
 #include "button_interface.h"


void button_voidInit ( u8 Copy_u8PORT , u8 Copy_u8PIN)
 {
     DIO_voidSetPinDirection( Copy_u8PORT ,  Copy_u8PIN,DIO_PIN_INPUT);

 }

 u8   button_voidGetPinValue      (u8 Copy_u8PORT , u8 Copy_u8PIN     ){

          return  DIO_voidGetPinValue      ( Copy_u8PORT ,  Copy_u8PIN    );
 }
