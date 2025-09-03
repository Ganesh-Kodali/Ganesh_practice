#include "stm32f4xx.h"
#include <stdio.h>

void UART2_Init(void); 
void UART2_Transmit(char *string); 
void delay(volatile uint32_t t); 
char msg[50]="hello\n\r"; 
int main(void) {
UART2_Init(); 
while (1) {
UART2_Transmit(msg); 
delay(1000000); 
}
}
// Initialize UART2 (PA2 = TX, PA3 = RX)
void UART2_Init(void) {
RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // Enable GPIOA clock
RCC->APB1ENR |= RCC_APB1ENR_USART2EN; // Enable USART2 clock

GPIOA->MODER &= ~((3 << 4) | (3 << 6)); // Clear PA2, PA3 mode bits

GPIOA->MODER |= ((2 << 4) | (2 << 6)); // Set to Alternate Function

GPIOA->AFR[0] |= (7 << 8) | (7 << 12); // Set AF7 (USART2) for PA2 and PA3

USART2->BRR = 16000000 / 9600; // Baud rate = 9600,assuming 16 MHz clock

USART2->CR1 |= (1<<13) // Enable Transmit
| (1<<2) // Enable Receive
| (1<<3); // Enable USART2
}

void UART2_Transmit(char *string) {
while (*string) {
while (!(USART2->SR & USART_SR_TXE)); 
USART2->DR = (*string++ & 0xFF); // Send character
}
}

void delay(volatile uint32_t t) {
while (t--);
}

