/*
 * song.c
 *
 *  Created on: 12 nov. 2016
 *      Author: furlings
 */

#include <music.h>
#include "song.h"
#include "music.h"

void Playnote(int freq, int duree)
{

  int valeur=(1000/freq); //temps en ms pour osciller

  int newduree=duree/(valeur);

  int newvaleur=(300000/freq)/2;

  for (int i=0; i<newduree; i++)
  {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
    HAL_GPIO_WritePin(DIR_GPIO_PORT, DIR_PIN, RESET);
    HAL_GPIO_WritePin(STEP_GPIO_PORT, STEP_PIN, RESET);
    DelayMicroSeconds(newvaleur);
    HAL_GPIO_WritePin(STEP_GPIO_PORT, STEP_PIN, SET);
    DelayMicroSeconds(newvaleur);

    HAL_GPIO_WritePin(DIR_GPIO_PORT, DIR_PIN, SET);
    HAL_GPIO_WritePin(STEP_GPIO_PORT, STEP_PIN, RESET);
    DelayMicroSeconds(newvaleur);
    HAL_GPIO_WritePin(STEP_GPIO_PORT, STEP_PIN, SET);
    DelayMicroSeconds(newvaleur);
  }
}

void PlaySong(int songIndex, int tempo)
{
  float* song = songs[songIndex];

  for(int x= 0; x<10000; x+=2)
  {
    int noteval = (int)(song[x] / 256.0f);
    int dur = (int)((float)tempo * song[x+1]);

    if(dur < 0)
      break;

    Playnote(noteval, dur*2);
    HAL_Delay(10);
  }
}
