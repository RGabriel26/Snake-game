#include "functii.h"
#include "clasament_grafic.h"
#include "levele.h"


int main(int argc, char** argv) {
	system("title Survival Snake");
	printf("Nickname: ");
	scanf("%s", jucator);
	start_joc(); //start timer

	system("cls");
	pre_randare();
	sleep(1);
	

	speed = 60;

	cronometru_randare_punct(); //start cronometru pentru randare punct
	cronometru_randare_level(); //start cronometru pentru selectia nivelului

	while (progres_joc != 0) {
		FPS(1);
		if (clock() > scl) {
			selectie_level();
		}
		system("cls");
		randare();

		actiune();
	}

	timp_rezistat = (clock() - start_time) / 1000;
	printf("\n					  ");
	printf("Ai supravetuit %.1f secunde.\n", timp_rezistat);

	salvare_date();

	sleep(1);

	//clasament-grafica
	glutInit(&argc, argv);
	glutInitWindowSize(450,350);
	glutInitWindowPosition(550,200);
	glutCreateWindow("Clasamentul jucatorilor");
	glutDisplayFunc(clasament_GL);
	glutMainLoop();

	return 0;
}

