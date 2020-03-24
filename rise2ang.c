// Programm zur Berechnung des Steigungswinkel aus der Steigung in Prozent.
// Autor: Fabian Prestros
// Datum: 21.03.2020

#include <stdio.h>
#include <math.h>

int main(void)
{
	double p, a, pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	int chk;
	char gradsymbol = 248; // Das Gradzeichen (°) liegt im erweiterten ASCII-Zeichensatz auf der Position 248d.

	printf("Bitte geben Sie eine Zahl in Prozent ein!\n");

	// Die folgende Schleife fängt Fehleingaben ab.
	do
	{
		printf("Steigung = ");
		chk = scanf_s("%lf", &p);
		while (getchar() != '\n'); // Tastaturpuffer leeren.
		if (chk == 0)
			printf("Bitte geben Sie eine Zahl ein!\n");
	} while (chk == 0);

	a = atan(p / 100) * 180 / pi;
	printf("Winkel = %lf%c\n", a, gradsymbol);
}