#include <stdio.h>

int main() {
	//Definir arreglo
	int arregloNumerico[5];
	
	//Modificar los valores del arreglo
	arregloNumerico[0] = 13;
	arregloNumerico[1]= 21;
	arregloNumerico[4]= 33;
	
	//Leer los valores del arreglo
	printf("Elemento 1 - ArregloNumerico[0] = %d", arregloNumerico[0]);
	printf("\nElemento 2 - ArregloNumerico[1] = %d", arregloNumerico[1]);
	printf("\nElemento 5 - ArregloNumerico[4] = %d", arregloNumerico[4]);
	return 0;
}

