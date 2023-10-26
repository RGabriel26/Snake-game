#ifndef CLASAMENT_GRAFICA_H_
#define CLASAMENT_GRAFICA_H_

#include <windows.h>
#include <GL/glut.h>
#include "functii.h"

void clasament_GL() {

	clasament();

	char titlu[] = "Clasament Survival Snake";
	char pos1[] = "#1";
	char pos2[] = "#2";
	char pos3[] = "#3";
	char scorCurent[] = "scor:";
	char nicknameCurent[] = "Nickname:";
	int i;

	glClearColor(0.8f, 0.5f, 0.1f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	//casuta text sus
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.3f, 0.1f);
	glVertex2f(-0.8, 0.8);
	glVertex2f(-0.8, 0.6);
	glVertex2f(0.8, 0.6);
	glVertex2f(0.8, 0.8);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(-0.55, 0.65);
	for (i = 0; i < strlen(titlu); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, titlu[i]);
	}

	//casuta loc 1
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.3f, 0.1f);
	glVertex2f(-0.8, 0.3);
	glVertex2f(-0.8, 0.1);
	glVertex2f(0.8, 0.1);
	glVertex2f(0.8, 0.3);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(-0.8, 0.15);
	for (i = 0; i < strlen(pos1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, pos1[i]);
	}
	glRasterPos2f(-0.65, 0.15);
	for (i = 0; i < strlen(nicknameClasament1); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, nicknameClasament1[i]);
	}
	glRasterPos2f(0.25, 0.15);
	for (i = 0; i < cifLoc1 + 1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, punctajClasament1[i]);
	}

	//casuta loc 2
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.3f, 0.1f);
	glVertex2f(-0.8, -0.1);
	glVertex2f(-0.8, -0.3);
	glVertex2f(0.8, -0.3);
	glVertex2f(0.8, -0.1);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(-0.8, -0.25);
	for (i = 0; i < strlen(pos2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, pos2[i]);
	}
	glRasterPos2f(-0.65, -0.25);
	for (i = 0; i < strlen(nicknameClasament2); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, nicknameClasament2[i]);
	}
	glRasterPos2f(0.25, -0.25);
	for (i = 0; i < cifLoc2 + 1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, punctajClasament2[i]);
	}

	//casuta loc 3
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.3f, 0.1f);
	glVertex2f(-0.8, -0.5);
	glVertex2f(-0.8, -0.7);
	glVertex2f(0.8, -0.7);
	glVertex2f(0.8, -0.5);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(-0.8, -0.65);
	for (i = 0; i < strlen(pos3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, pos3[i]);
	}
	glRasterPos2f(-0.65, -0.65);
	for (i = 0; i < strlen(nicknameClasament3); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, nicknameClasament3[i]);
	}
	glRasterPos2f(0.25, -0.65);
	for (i = 0; i < cifLoc3 + 1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, punctajClasament3[i]);
	}

	//afisare nickname/scor jcuator curent
	glRasterPos2f(-0.8, 0.4);
	for (i = 0; i < strlen(nicknameCurent); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, nicknameCurent[i]);
	}
	glRasterPos2f(-0.28, 0.4);
	for (i = 0; i < strlen(jucator); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, jucator[i]);
	}
	glRasterPos2f(0.25, 0.4);
	for (i = 0; i < strlen(scorCurent); i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, scorCurent[i]);
	}
	glRasterPos2f(0.5, 0.4);
	for (i = 0; i < cifLoc3 + 1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,
				punctajJucatorCurent[i]);
	}

	glFlush();
}

#endif
