/*Programacion de lenguaje binario hecho el 26 de FEBRERO del 2025
*/

#include <stdio.h>
 
int main() {
    int numero;
 
    // Solicita un numero
    printf("Ingrese un número: ");
    scanf("%d", &numero);
 
    // Verifica si el numero es par o impar
    if (numero % 2 == 0) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }
    
	
	// Pregunta si quiere revisar otro numero
	printf("¿Quiere saber si otro numero es par o impar? (Ingrese 0 para salir u otro numero para continuar): ");
	scanf("%d", &numero);
	
	// Si no se ingresa 0 se debe de verificar nuevamente
	if (numero %2 == 0){
	printf("El numero %d es par.\n", numero);
	} else { 
	printf("El numero %d es impar.\n", numero);
	} 
	printf("programa finalizado, gracias por participar.\n");
	printf(":).\n");
	
 
    return 0;
}
