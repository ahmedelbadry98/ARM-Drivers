/****************************************************************/
/* Author    : Ahmed Elbadry                                    */
/* Date      : 1 Oct 2020                                       */
/* Version   : V01                                              */
/****************************************************************/
#ifndef FPEC_INTERFACE
#define FPEC_INTERFACE

void FPEC_voidEraseAppArea(void);
	
void FPEC_voidFlashPageErase(u8 Copy_u8PageNumber);

void FPEC_voidFlashWrite(u32 Copy_u32Address, u16* Copy_u16Data, u8 Copy_u8Length);

#endif
