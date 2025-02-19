/*
19 de Febrero del 2025 PROGRAMAR ALGORITMOS
*/

#include <stdio.h>
#include <stdlib.h> 

int main(){
	float TC, TK;	//Declaro TC y TK
	//Cuerpo del programa
	printf("Dame la temperatura de Celsius \n");
	scanf("%f", &TC);	//LEE TC, La linea anterior es de apoyo para el usuario
	TK= TC + 273.15;	//Realiza la operacion
	printf("La temperatura resultante en Kelvin es : %f \n", TK);
	exit (0);
	}
