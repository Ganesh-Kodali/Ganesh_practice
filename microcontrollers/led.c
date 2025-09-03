#include"stm32f4xx.h"

void delay(long delay)
{
while(delay--);
}

int main()
{

		RCC->AHB1ENR |=(1<<0);

		GPIOA->MODER|=(1<<1);

		while(1)
		{
			GPIOA->ODR |=(1<<1);
			delay(2000000);
			GPIOA->ODR &=~(1<<1);
			delay(2000000);

		}

}

