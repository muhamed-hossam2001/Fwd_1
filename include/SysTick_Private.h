
#ifndef _SYSTICK_PRIVATE_H_
#define _SYSTICK_PRIVATE_H_

/************************************************ Systick Registers ************************************************************/
/*******************************************************************************************************************************/

#define SYSTICK_BASE_ADDRESS  0xE000E010
typedef struct Systick
{
	volatile u32 CTRL_REG ;
	volatile u32 LOAD_REG ;
	volatile u32 VAL_REG  ;
	volatile u32 CALIB_REG;
}Systick_t;

#define SYSTICK    ((volatile Systick_t*)SYSTICK_BASE_ADDRESS)


/************************************************ Systick CTRL Register Bits ***************************************************/
/*******************************************************************************************************************************/
enum CTRL_REG_BITS
{
	CTRL_ENABLE    ,
	CTRL_TICKINT   ,
	CTRL_CLKSOURCE ,
	CTRL_COUNTFLAG=16
};




#endif
