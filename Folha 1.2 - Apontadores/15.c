//15. Escreva um programa que leia dois valores para duas vari�veis de tipo float e troque os seus
//conte�dos. Dever� implementar e utilizar uma fun��o com o seguinte cabe�alho:
//void trocar_float (float *x1, float *x2)

#include <stdio.h>
void trocar_float (float *, float *);
main(){
	float x1, x2;
	printf("Introduza o primeiro float\n");
	scanf("%f", &x1);
	printf("Introduza o segundo float\n");
	scanf("%f", &x2);

	trocar_float(&x1, &x2);
	printf("%f\n", x1);
	printf("%f\n", x2);	
}
void trocar_float (float *x1, float *x2){
	float tmp;
	tmp = *x1;
	*x1 = *x2;
	*x2 = tmp;
}
