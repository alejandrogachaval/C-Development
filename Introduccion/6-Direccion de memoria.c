#include <stdio.h>

//Direccion de memoria de variables
int main() {
	int numero = 10;
	//&numero obtiene la direccion de memoria de la variable numero
	printf("La direccion de memoria es %p: ", &numero); //%p es un puntero, en este caso para señalar la posicion
	//de memoria de la variable
	return 0;
}

