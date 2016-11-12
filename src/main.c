#include "main.h"

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  GPIO_Init();
  MX_TIM6_Init();
  while (1)
  {
      PlaySong(0, 100); // Game of Throne
      PlaySong(1, 100); // Mario
      while(1);
  }
}
