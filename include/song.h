/*
 * song.h
 *
 *  Created on: 12 nov. 2016
 *      Author: furlings
 */

#ifndef SONG_H_
#define SONG_H_

#include "main.h"

// note values for two octave scale
// divide them by powers of two to generate other octaves
#define A     14080
#define AS    14917.2
#define B     15804.3
#define C     16744
#define CS    17739.7
#define D     18794.5
#define DS    19912.1
#define E     21096.2
#define F     22350.6
#define FS    23679.6
#define G     25087.7
#define GS    26579.5
#define A2P    28160
#define A2S   29834.5
#define B2    31608.5
#define C2    33488.1
#define C2S   35479.4
#define D2    37589.1
#define D2S   39824.3
#define E2    42192.3
#define F2    44701.2
#define F2S   47359.3
#define G2    50175.4
#define G2S   53159
#define A3P    56320
#define AS3   59669
#define B3    63217
#define C3    66976.2
#define E_2   10548.1
#define C_2   8372
#define B_2   7902.1
#define A_2   7040
#define F_2   11125

#define REST  0

#define EIGHTH 1
#define DOTTED_EIGHTH 1.5
#define QUARTER 2
#define DOTTED_QUARTER 3
#define HALF 4
#define WHOLE 8
#define DOUBLE_WHOLE 16
#define ETERNITY -1

void Playnote(int freq, int duree);
void PlaySong(int songIndex, int tempo);

#endif /* SONG_H_ */
