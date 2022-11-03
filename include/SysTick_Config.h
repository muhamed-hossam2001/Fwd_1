#ifndef _SYSTICK_CONFIG_H_
#define _SYSTICK_CONFIG_H_


/************************************** SysTick control and status register (STK_CTRL) *************************************/
/***************************************************************************************************************************/

/*to Enable or disable Systick interrupt choose from these options
 * Options:
 *     ENABLE
 *     DISABLE
 */
#define STK_INTERRUPT_EN_DIS   DISABLE


/*To select the clock source of Systick
 * Options:
 *      STK_CLOCK_SRC_AHB_DIV_8
 *      STK_CLOCK_SRC_AHB_NO_DIV
 */
#define STK_CLOCK_SOURCE_SELECT  STK_CLOCK_SRC_AHB_DIV_8





#endif
