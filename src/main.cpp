#include "stm32f4xx.h"

extern "C" int main()
{
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

  GPIO_InitTypeDef gpio_out = {
    .GPIO_Pin = GPIO_Pin_5,
    .GPIO_Mode = GPIO_Mode_OUT,
    .GPIO_Speed = GPIO_High_Speed,
    .GPIO_OType = GPIO_OType_PP,
    .GPIO_PuPd = GPIO_PuPd_NOPULL
  };

  GPIO_Init(GPIOA, &gpio_out);

  GPIO_ToggleBits(GPIOA, GPIO_Pin_5);

  for (;;){}
}
