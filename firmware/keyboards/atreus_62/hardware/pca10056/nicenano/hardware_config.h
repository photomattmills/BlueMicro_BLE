/*
Copyright 2020 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"
/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/*   #define D3      6
     #define D2      8
     #define D1      15
     #define D0      17
     #define D4      20
     #define C6      13
     #define D7      24
     #define E6      9
     #define B4      10
     #define B5      38 //1.06 = 32+6

     #define F4      30
     #define F5      26
     #define F6      29
     #define F7      2
     #define B1      45 //1.13  = 32+13
     #define B3      3
     #define B2      28
     #define B6      43 //1.11 = 32+11
     #define NC      32 //1.00 = 32+0 // NC is for not connected....*/

#define MATRIX_ROW_PINS {22, 20, 17, 6, 8}
#define MATRIX_COL_PINS {31, 29, 2, 47, 45, 43, 10, 9, 38, 36, 11, 32, 24}



/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define UNUSED_PINS {}

#define BATTERY_TYPE BATT_LIPO
	 #define VBAT_PIN  4
	 #define VCC_PIN 13
	 #define VCC_POLARITY_ON 0

#endif /* HARDWARE_CONFIG_H */
