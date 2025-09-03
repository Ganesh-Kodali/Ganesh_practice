#include "stm32f4xx.h"

int main()

{
RCC->AHB1ENR |=(1<<0);

		GPIOA->MODER |=(1<<10);


		GPIOA->MODER &=~(3<<30);

		while(1)
		{

			if((GPIOA->IDR & (3<<15))==0)
			{
				GPIOA->ODR|=(1<<5);
			}
			else
			{
				GPIOA->ODR &=~(1<<5);
			}
		}
}
