/*
 ============================================================================
 Name        : Pokazivaci.c
 Author      : Goran Vujnovic
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{                       //    0     1     2     3
	double cena[4]; // [100] [200] [300] [400]
	double* p;

	p = &cena[0];
	printf("Trenutna adresa pokazivaca je %p.\n", p);
	*p = 100;


	p++; // p = p + 1; ==> p + 1 = p + 1 sizeof(double)
	printf("Trenutna adresa pokazivaca je %p.\n", p);
	*p = 200;


	p++;
	printf("Trenutna adresa pokazivaca je %p.\n", p);
	*p = 300;


	p++;
	printf("Trenutna adresa pokazivaca je %p.\n", p);
	*p = 400;

	printf("\n");
	printf("Cene su: %.2lf din\n \t %.2lf din\n \t %.2lf din\n  \t %.2lf din\n", cena[0],cena[1],cena[2], cena[3],cena[4]);

	return 0;
}
