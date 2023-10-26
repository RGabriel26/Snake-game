#include "functii.h"
#include <stdio.h>

#ifndef LEVEL_H_
#define LEVEL_H_

int obiecte_level;
int obstx[130], obsty[130];

void level1();
void level2();
void level3();


void level1() {
	obiecte_level = 44;

	//zona din centru- forma patrat*******************
	//standa sus

	obstx[0] = 11;
	obsty[0] = 3;

	obstx[1] = 12;
	obsty[1] = 3;

	obstx[2] = 10;
	obsty[2] = 3;

	obstx[3] = 10;
	obsty[3] = 4;

	obstx[4] = 10;
	obsty[4] = 5;

	//stanga jos

	obstx[5] = 10;
	obsty[5] = 10;

	obstx[6] = 10;
	obsty[6] = 11;

	obstx[7] = 10;
	obsty[7] = 12;

	obstx[8] = 11;
	obsty[8] = 12;

	obstx[9] = 12;
	obsty[9] = 12;

	//dreapta jos

	obstx[10] = 20;
	obsty[10] = 12;

	obstx[11] = 21;
	obsty[11] = 12;

	obstx[12] = 22;
	obsty[12] = 12;

	obstx[13] = 22;
	obsty[13] = 11;

	obstx[14] = 22;
	obsty[14] = 10;

	//dreapta sus

	obstx[15] = 22;
	obsty[15] = 5;

	obstx[16] = 22;
	obsty[16] = 4;

	obstx[17] = 22;
	obsty[17] = 3;

	obstx[18] = 21;
	obsty[18] = 3;

	obstx[19] = 20;
	obsty[19] = 3;

	//**************************

	//modele laterale
	//stanga

	obstx[20] = 5;
	obsty[20] = 5;

	obstx[21] = 5;
	obsty[21] = 6;

	obstx[22] = 5;
	obsty[22] = 7;

	obstx[23] = 5;
	obsty[23] = 8;

	obstx[24] = 5;
	obsty[24] = 9;

	obstx[25] = 5;
	obsty[25] = 10;

	//dreapta

	obstx[26] = 27;
	obsty[26] = 5;

	obstx[27] = 27;
	obsty[27] = 6;

	obstx[28] = 27;
	obsty[28] = 7;

	obstx[29] = 27;
	obsty[29] = 8;

	obstx[30] = 27;
	obsty[30] = 9;

	obstx[31] = 27;
	obsty[31] = 10;

	//*********

	//colturi

	//st sus

	obstx[32] = 2;
	obsty[32] = 1;

	obstx[33] = 1;
	obsty[33] = 1;

	obstx[34] = 1;
	obsty[34] = 2;

	//st jos

	obstx[35] = 1;
	obsty[35] = 14;

	obstx[36] = 1;
	obsty[36] = 15;

	obstx[37] = 2;
	obsty[37] = 15;

	//dr jos

	obstx[38] = 31;
	obsty[38] = 14;

	obstx[39] = 31;
	obsty[39] = 15;

	obstx[40] = 30;
	obsty[40] = 15;

	//dr sus

	obstx[41] = 30;
	obsty[41] = 1;

	obstx[42] = 31;
	obsty[42] = 1;

	obstx[43] = 31;
	obsty[43] = 2;

}

void level2() {
	obiecte_level = 130;

	//stanga sus
	obstx[0] = 1;
	obsty[0] = 1;

	obstx[1] = 2;
	obsty[1] = 1;

	obstx[2] = 3;
	obsty[2] = 1;

	obstx[3] = 4;
	obsty[3] = 1;

	obstx[4] = 5;
	obsty[4] = 1;

	obstx[5] = 6;
	obsty[5] = 1;

	obstx[6] = 7;
	obsty[6] = 1;

	obstx[7] = 1;
	obsty[7] = 2;

	obstx[8] = 2;
	obsty[8] = 2;

	obstx[9] = 3;
	obsty[9] = 2;

	obstx[10] = 4;
	obsty[10] = 2;

	obstx[11] = 5;
	obsty[11] = 2;

	obstx[12] = 6;
	obsty[12] = 2;

	obstx[13] = 1;
	obsty[13] = 3;

	obstx[14] = 2;
	obsty[14] = 3;

	obstx[15] = 3;
	obsty[15] = 3;

	obstx[16] = 4;
	obsty[16] = 3;

	obstx[17] = 5;
	obsty[17] = 3;

	obstx[18] = 1;
	obsty[18] = 4;

	obstx[19] = 2;
	obsty[19] = 4;

	obstx[20] = 3;
	obsty[20] = 4;

	obstx[21] = 4;
	obsty[21] = 4;

	obstx[22] = 1;
	obsty[22] = 5;

	obstx[23] = 2;
	obsty[23] = 5;

	obstx[24] = 3;
	obsty[24] = 5;

	obstx[25] = 1;
	obsty[25] = 6;

	obstx[26] = 2;
	obsty[26] = 6;

	obstx[27] = 1;
	obsty[27] = 7;

	//dreapta sus

	obstx[28] = 25;
	obsty[28] = 1;

	obstx[29] = 26;
	obsty[29] = 1;

	obstx[30] = 27;
	obsty[30] = 1;

	obstx[31] = 28;
	obsty[31] = 1;

	obstx[32] = 29;
	obsty[32] = 1;

	obstx[33] = 30;
	obsty[33] = 1;

	obstx[34] = 31;
	obsty[34] = 1;

	obstx[35] = 26;
	obsty[35] = 2;

	obstx[36] = 27;
	obsty[36] = 2;

	obstx[37] = 28;
	obsty[37] = 2;

	obstx[38] = 29;
	obsty[38] = 2;

	obstx[39] = 30;
	obsty[39] = 2;

	obstx[40] = 31;
	obsty[40] = 2;

	obstx[41] = 27;
	obsty[41] = 3;

	obstx[42] = 28;
	obsty[42] = 3;

	obstx[43] = 29;
	obsty[43] = 3;

	obstx[44] = 30;
	obsty[44] = 3;

	obstx[45] = 31;
	obsty[45] = 3;

	obstx[46] = 28;
	obsty[46] = 4;

	obstx[47] = 29;
	obsty[47] = 4;

	obstx[48] = 30;
	obsty[48] = 4;

	obstx[49] = 31;
	obsty[49] = 4;

	obstx[50] = 29;
	obsty[50] = 5;

	obstx[51] = 30;
	obsty[51] = 5;

	obstx[52] = 31;
	obsty[52] = 5;

	obstx[53] = 30;
	obsty[53] = 6;

	obstx[54] = 31;
	obsty[54] = 6;

	obstx[55] = 31;
	obsty[55] = 7;

	//stanga jos

	obstx[56] = 1;
	obsty[56] = 15;

	obstx[57] = 2;
	obsty[57] = 15;

	obstx[58] = 3;
	obsty[58] = 15;

	obstx[59] = 4;
	obsty[59] = 15;

	obstx[60] = 5;
	obsty[60] = 15;

	obstx[61] = 6;
	obsty[61] = 15;

	obstx[62] = 7;
	obsty[62] = 15;

	obstx[63] = 1;
	obsty[63] = 14;

	obstx[64] = 2;
	obsty[64] = 14;

	obstx[65] = 3;
	obsty[65] = 14;

	obstx[128] = 4;
	obsty[128] = 14;

	obstx[66] = 5;
	obsty[66] = 14;

	obstx[67] = 6;
	obsty[67] = 14;

	obstx[68] = 1;
	obsty[68] = 13;

	obstx[69] = 2;
	obsty[69] = 13;

	obstx[70] = 3;
	obsty[70] = 13;

	obstx[71] = 4;
	obsty[71] = 13;

	obstx[72] = 5;
	obsty[72] = 13;

	obstx[73] = 1;
	obsty[73] = 12;

	obstx[74] = 2;
	obsty[74] = 12;

	obstx[75] = 3;
	obsty[75] = 12;

	obstx[76] = 4;
	obsty[76] = 12;

	obstx[77] = 1;
	obsty[77] = 11;

	obstx[78] = 2;
	obsty[78] = 11;

	obstx[79] = 3;
	obsty[79] = 11;

	obstx[80] = 1;
	obsty[80] = 10;

	obstx[81] = 2;
	obsty[81] = 10;

	obstx[82] = 1;
	obsty[82] = 9;

	//dreapta jos
	obstx[83] = 25;
	obsty[83] = 15;

	obstx[84] = 26;
	obsty[84] = 15;

	obstx[85] = 27;
	obsty[85] = 15;

	obstx[86] = 28;
	obsty[86] = 15;

	obstx[87] = 29;
	obsty[87] = 15;

	obstx[88] = 30;
	obsty[88] = 15;

	obstx[89] = 31;
	obsty[89] = 15;

	obstx[90] = 26;
	obsty[90] = 14;

	obstx[91] = 27;
	obsty[91] = 14;

	obstx[92] = 28;
	obsty[92] = 14;

	obstx[93] = 29;
	obsty[93] = 14;

	obstx[129] = 30;
	obsty[129] = 14;

	obstx[94] = 31;
	obsty[94] = 14;

	obstx[95] = 27;
	obsty[95] = 13;

	obstx[96] = 28;
	obsty[96] = 13;

	obstx[97] = 29;
	obsty[97] = 13;

	obstx[98] = 30;
	obsty[98] = 13;

	obstx[99] = 31;
	obsty[99] = 13;

	obstx[100] = 28;
	obsty[100] = 12;

	obstx[101] = 29;
	obsty[101] = 12;

	obstx[102] = 30;
	obsty[102] = 12;

	obstx[103] = 31;
	obsty[103] = 12;

	obstx[104] = 29;
	obsty[104] = 11;

	obstx[105] = 30;
	obsty[105] = 11;

	obstx[106] = 31;
	obsty[106] = 11;

	obstx[107] = 30;
	obsty[107] = 10;

	obstx[108] = 31;
	obsty[108] = 10;

	obstx[109] = 31;
	obsty[109] = 9;

	//bara sus

	obstx[110] = 12;
	obsty[110] = 4;

	obstx[111] = 13;
	obsty[111] = 4;

	obstx[112] = 14;
	obsty[112] = 4;

	obstx[113] = 15;
	obsty[113] = 4;

	obstx[114] = 16;
	obsty[114] = 4;

	obstx[115] = 17;
	obsty[115] = 4;

	obstx[116] = 18;
	obsty[116] = 4;

	obstx[117] = 19;
	obsty[117] = 4;

	obstx[118] = 20;
	obsty[118] = 4;

	//bara jos

	obstx[119] = 12;
	obsty[119] = 12;

	obstx[120] = 13;
	obsty[120] = 12;

	obstx[121] = 14;
	obsty[121] = 12;

	obstx[122] = 15;
	obsty[122] = 12;

	obstx[123] = 16;
	obsty[123] = 12;

	obstx[124] = 17;
	obsty[124] = 12;

	obstx[125] = 18;
	obsty[125] = 12;

	obstx[126] = 19;
	obsty[126] = 12;

	obstx[127] = 20;
	obsty[127] = 12;
}

void level3() {
	obiecte_level = 32;

	//romb stanga sus
	obstx[0] = 12;
	obsty[0] = 3;

	obstx[1] = 11;
	obsty[1] = 4;

	obstx[2] = 10;
	obsty[2] = 5;

	obstx[3] = 9;
	obsty[3] = 6;

	//romb stanga jos
	obstx[4] = 12;
	obsty[4] = 13;

	obstx[5] = 11;
	obsty[5] = 12;

	obstx[6] = 10;
	obsty[6] = 11;

	obstx[7] = 9;
	obsty[7] = 10;

	//romb dreapta jos
	obstx[8] = 20;
	obsty[8] = 13;

	obstx[9] = 21;
	obsty[9] = 12;

	obstx[10] = 22;
	obsty[10] = 11;

	obstx[11] = 23;
	obsty[11] = 10;

	//romb dreapta sus
	obstx[12] = 20;
	obsty[12] = 3;

	obstx[13] = 21;
	obsty[13] = 4;

	obstx[14] = 22;
	obsty[14] = 5;

	obstx[15] = 23;
	obsty[15] = 6;

	//patrat stanga sus
	obstx[16] = 3;
	obsty[16] = 3;

	obstx[17] = 3;
	obsty[17] = 4;

	obstx[18] = 4;
	obsty[18] = 3;

	obstx[19] = 4;
	obsty[19] = 4;

	//patrat dreapta sus
	obstx[20] = 28;
	obsty[20] = 3;

	obstx[21] = 28;
	obsty[21] = 4;

	obstx[22] = 29;
	obsty[22] = 3;

	obstx[23] = 29;
	obsty[23] = 4;

	//patrat dreapta jos
	obstx[24] = 29;
	obsty[24] = 12;

	obstx[25] = 28;
	obsty[25] = 12;

	obstx[26] = 28;
	obsty[26] = 13;

	obstx[27] = 29;
	obsty[27] = 13;

	//patrat stanga jos
	obstx[28] = 3;
	obsty[28] = 12;

	obstx[29] = 4;
	obsty[29] = 12;

	obstx[30] = 3;
	obsty[30] = 13;

	obstx[31] = 4;
	obsty[31] = 13;
}


#endif /* LEVEL_H_ */
