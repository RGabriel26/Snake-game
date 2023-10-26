#ifndef FUNCTII_H_
#define FUNCTII_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <string.h>
#include "levele.h"

int y = 17; // inaltimea
int x = 33;	// latimea
int progres_joc = 1;
int inaltime = 8;	//valoarea lui x/2
int lungime = 16;	//valoarea lui y/2
int cauza, flag;
int start_time;
float timp_rezistat;
int scor;
char jucator[20];
int punctx, puncty;
int scp, scl, speed;
unsigned int punctaj;
char punctajClasament1[10], punctajClasament2[10], punctajClasament3[10], punctajJucatorCurent[10];
char nicknameClasament1[20], nicknameClasament2[20], nicknameClasament3[20];
char pre_comanda;
int actiune_repetare;
int cifLoc1, cifLoc2, cifLoc3, cifLocJucatorCurent;

void randare();
void FAS(int);
void actiune();
void verificare_pozitie();
void gameover_cauza();
void start_joc();
void salvare_date();
void puncte();
void selectie_level();
void pre_randare();
void clasament();
void cronometru_randare_punct();
void cronometru_randare_level();

//***************************
void randare() {

	char c = '#'; //model MARGINI
	int i, j;
	int a;
	int afisare = 0;

	if (clock() > scp) {
		puncte();
	}

	for (i = 0; i < y; i++) {
		printf("					");
		for (j = 0; j < x; j++) {
			for (a = 0; a < obiecte_level && afisare == 0; a++) {
				if (i != 0 && j != 0) {
					if (i == obsty[a] && j == obstx[a]) {
						afisare = 1;
					}
				}
			}
			if (afisare == 1) {
				printf("X");
				afisare = 0;
			} else if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
				printf("%c", c);
			} else if (i == punctx && j == puncty) {
				printf("O");
			} else if (i == inaltime && j == lungime) {
				printf("@");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	//afisarea scorului in timp real
	punctaj = clock() - start_time + scor;
	printf("					 	   ");
	printf("Scor: %u\n", punctaj);
	verificare_pozitie();
}

void selectie_level() {
	int fost_level = 0;
	srand(time(NULL));
	int actual_level = rand() % 3 + 1;
	while (fost_level == actual_level) {
		actual_level = rand() % 3 + 1;
	}
	if (actual_level == 1) {
		level1();
	} else if (actual_level == 2) {
		level3();
	} else {
		level2();
	}
	cronometru_randare_level();
}

void FPS(int secunde) {
	clock_t start_time = clock();
	while (clock() < start_time + speed * secunde)
		;
}

void actiune() {

	if (kbhit()) {
		switch (getch()) {
		case 'a':
			speed = 50;
			flag = 1;
			break;
		case 'd':
			speed = 50;
			flag = 2;
			break;
		case 'w':
			speed = 70;
			flag = 3;
			break;
		case 's':
			speed = 70;
			flag = 4;
			break;
		case 'x':
			progres_joc = 0;
			break;
		}
	}

	switch (flag) {
	case 1:
		lungime--;
		break;
	case 2:
		lungime++;
		break;
	case 3:
		inaltime--;
		break;
	case 4:
		inaltime++;
		break;
	}
}

void verificare_pozitie() {
	if (inaltime == 0 || inaltime == y - 1) {
		cauza = 1;
	}
	if (lungime == 0 || lungime == x - 1) {
		cauza = 1;
	}
	for (int a = 0; a < obiecte_level; a++) {
		if (inaltime == obsty[a] && lungime == obstx[a]) {
			cauza = 2;
		}
	}
	if (inaltime == punctx && lungime == puncty) {
		scor += 5000;
		puncte();
	}
	gameover_cauza();
}

void cronometru_randare_punct() {
	scp = clock() + 5 * 1000;
}

void cronometru_randare_level() {
	scl = clock() + 15 * 1000;
}

void start_joc() {
	printf("Apasa orice tasta de control pentru a incepe jocul!\n");
	printf("Tastele de control: 	[W]\n"
			"		     [A][S][D]\n");
	citire: pre_comanda = getch();

	switch (pre_comanda) {
	case 'a':
		flag = 1;
		break;
	case 'd':
		flag = 2;
		break;
	case 'w':
		flag = 3;
		break;
	case 's':
		flag = 4;
		break;
	}
	if (pre_comanda == 'a' || pre_comanda == 'd' || pre_comanda == 's'
			|| pre_comanda == 'w') {
	} else {
		goto citire;
	}
	start_time = clock();	//start cronometru de joc
}

void gameover_cauza() {
	printf("					");
	printf("Apasa 'X' pentru a incheia jocul.\n");
	if (cauza == 1) {
		printf("						  ");
		printf("Joc incheiat!\n");
		printf("					  ");
		printf("AI MURIT STRIVIT DE PERETE!\n");
		progres_joc = 0;
	} else if (cauza == 2) {
		printf("						  ");
		printf("Joc incheiat!\n");
		printf("					  ");
		printf("AI MURIT STRIVIT DE OBSTACOL!\n");
		progres_joc = 0;
	}
}

void puncte() {
	srand(time(NULL));
	coordonatax: punctx = rand() % x + 1;
	if (punctx == 0 || punctx == x) {
		goto coordonatax;
	}
	for (int a = 0; a < obiecte_level; a++) {
		if (punctx == obstx[a])
			goto coordonatax;
	}
	coordonatay: puncty = rand() % y + 1;
	if (puncty == 0 || puncty == y) {
		goto coordonatay;
	}
	for (int a = 0; a < obiecte_level; a++) {
		if (puncty == obsty[a])
			goto coordonatay;
	}
	cronometru_randare_punct();
}

void salvare_date() {
	FILE *fls;
	fls = fopen("progres_jucatori.txt", "a");
	if (!fls) {
		printf("Problema la deschiderea fisierului!");
	}
	fprintf(fls, "%s ", jucator);
	fprintf(fls, "%u\n", punctaj);
	fclose(fls);
}

void pre_randare() {
	char c = '#'; //model MARGINI
	int inter = 32;	  //model INTERIOR
	int i, j;
	int a;
	int afisare = 0;

	selectie_level();

	for (i = 0; i < y; i++) {
		printf("					");
		for (j = 0; j < x; j++) {
			for (a = 0; a < obiecte_level && afisare == 0; a++) {
				if (i != 0 && j != 0) {
					if (i == obsty[a] && j == obstx[a]) {
						afisare = 1;
					}
				}
			}
			if (afisare == 1) {
				printf("X");
				afisare = 0;
			} else if (i == 0 || i == y - 1 || j == 0 || j == x - 1) {
				printf("%c", c);
			} else if (i == punctx && j == puncty) {
				printf("O");
			} else if (i == inaltime && j == lungime) {
				printf("@");
			} else {
				printf("%c", inter);
			}
		}
		printf("\n");
	}
	printf("					 	   ");
	printf("Scor:\n");
	printf("					");
	printf("Apasa 'X' pentru a incheia jocul.\n");
}

void clasament() {
	FILE *fls;
	int i;
	int temp = 0, nr;
	struct date_jucator {
		char nickname[20];
		unsigned int puncte;
	};
	struct date_jucator locul[3], aux;

	fls = fopen("progres_jucatori.txt", "r");
	if (!fls) {
		printf("Nu s-a deschis fisierul corespunzator.");
	}
	fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
	locul[0] = aux;
	while (1) {
		if (locul[0].puncte < aux.puncte) {
			locul[0] = aux;
		} else {
			fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
		}
		if (feof(fls)) {
			break;
		}
	}
	rewind(fls);
	fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
	locul[1] = aux;
	while (1) {
		if (locul[1].puncte < aux.puncte) {
			if (aux.puncte != locul[0].puncte) {
				locul[1] = aux;
			} else {
				fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
			}
		} else {
			fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
		}
		if (feof(fls)) {
			break;
		}

	}

	rewind(fls);
	fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
	locul[2] = aux;
	while (1) {
		if (locul[2].puncte < aux.puncte) {
			if (aux.puncte != locul[0].puncte
					&& aux.puncte != locul[1].puncte) {
				locul[2] = aux;
			} else {
				fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
			}
		} else {
			fscanf(fls, "%s %d", aux.nickname, &aux.puncte);
		}
		if (feof(fls)) {
			break;
		}
	}

	strcpy(nicknameClasament1, locul[0].nickname);
	strcpy(nicknameClasament2, locul[1].nickname);
	strcpy(nicknameClasament3, locul[2].nickname);

	//loc 1
	nr = locul[0].puncte;
	while (nr / 10 != 0) {
		temp = temp * 10 + nr % 10;
		nr = nr / 10;
		cifLoc1++;
	}
	temp = temp * 10 + nr;
	for (i = 0; i < cifLoc1; i++) {
		punctajClasament1[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	punctajClasament1[i] = temp + '0';
	temp = 0;

	//loc 2
	nr = locul[1].puncte;
	while (nr / 10 != 0) {
		temp = temp * 10 + nr % 10;
		nr = nr / 10;
		cifLoc2++;
	}
	temp = temp * 10 + nr;
	for (i = 0; i < cifLoc2; i++) {
		punctajClasament2[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	punctajClasament2[i] = temp + '0';
	temp = 0;

	//loc 3
	nr = locul[2].puncte;
	while (nr / 10 != 0) {
		temp = temp * 10 + nr % 10;
		nr = nr / 10;
		cifLoc3++;
	}
	temp = temp * 10 + nr;
	for (i = 0; i < cifLoc3; i++) {
		punctajClasament3[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	punctajClasament3[i] = temp + '0';
	temp = 0;

	//conversie punctaj pentru afisarea in grafic
	//loc 3
	nr = punctaj;
	while (nr / 10 != 0) {
		temp = temp * 10 + nr % 10;
		nr = nr / 10;
		cifLocJucatorCurent++;
	}
	temp = temp * 10 + nr;
	for (i = 0; i < cifLocJucatorCurent; i++) {
		punctajJucatorCurent[i] = (temp % 10) + '0';
		temp = temp / 10;
	}
	punctajJucatorCurent[i] = temp + '0';

	fclose(fls);
}

#endif
