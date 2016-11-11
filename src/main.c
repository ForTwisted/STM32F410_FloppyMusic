/* Includes ------------------------------------------------------------------*/
#include "main.h"

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  GPIO_Init();
   
  /*##-3- Toggle PA05 IO in an infinite loop #################################*/  
  while (1)
  {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    trace_printf("Blink Led 2\n");
    
    /* Insert a 100ms delay */
    HAL_Delay(1000);
  }
}
