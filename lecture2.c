#include "stm32f10x.h"                  // Device header
#include "GPIO_STM32F10x.h"             // Keil::Device:GPIO

void gpioConfig(){


	
	 
	 GPIO_InitTypeDef  GPIOInitStructure;  //////////////////////////7
	
	
	GPIOInitStructure.GPIO_Mode=GPIO_Mode_Out_PP;///////////////////////7
	GPIOInitStructure.GPIO_Pin=GPIO_Pin_0;
  GPIOInitStructure.GPIO_Speed=GPIO_Speed_50MHz;/////////////7
	
	
	
	GPIO_Init(GPIOB,&GPIOInitStructure);///////////////////////////////7
	
	/////////
	
}
	
	
	
void delay(uint32_t time){
while(time--);
}


int main(){
gpioConfig();
while(1){
 GPIO_SetBits(GPIOB,GPIO_Pin_0);
delay(3400000000000000000);
	GPIO_ResetBits(GPIOB,GPIO_Pin_0);
	delay(230000000000000);
}



}