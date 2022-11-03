
#include "BIT_MATH.h"
#include "CHECK_ERROR.h"
#include "STDTYPES.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include "GPIOS_interface.h"
#include "GPIOS_private.h"
#include "GPIOS_config.h"

#include "SysTick_Interface.h"
#include "SysTick_private.h"
#include "SysTick_Config.h"


void LED_Toggel(void);

int main()
{

	RCC_voidInit();

	RCC_VoidEnablePeriphral(ABP2_BUS,APB2ENR_IOPA_EN);

	GPIOS_u8SetPinDir(GPIOS_PORTA,PIN_0,GPIOS_OUTPUT_PUSH_PULL_10MHZ);

	STK_voidInit();



	while(1)
	{

		 STK_u8SetIntervalPeriodic_Asyncrounous(2000000,&LED_Toggel);

	}
	return 0;
}

void LED_Toggel(void)
{
	static u8 Toggle_bit=1;

	GPIOS_u8SetPinVal(GPIOS_PORTA,PIN_0, TOG_BIT(Toggle_bit,0));
}
