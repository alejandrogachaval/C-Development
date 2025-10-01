#include <stdio.h>

int main() {
	//Definir arreglo
	int arregloNumerico[] = {100, 200, 300, 400, 500};
	int largoArreglo;
	//Obtener el largo del arreglo dinamicamente
	//Memoria ocupada por todo el arregloNumerico
	int tamanioArreglo = sizeof(arregloNumerico);
	printf("Tamanio del arreglo: %d bytes", tamanioArreglo);
	
	//Memoria ocupada por solo un elemento
	int tamanioElem = sizeof(arregloNumerico[0]);
	printf("\nTamanio de elemento: %d bytes", tamanioElem);
	
	//Determinar cuantos elementos hay en el arreglo
	tamanioArreglo /= tamanioElem;
	printf("\nCantidad de elementos del arreglo: %d", tamanioArreglo);
	
	//Iterar el arreglo
	for(int i=0; i < tamanioArreglo; i++){
		printf("\nArreglo[%d]: %d", i, arregloNumerico[i]);
	}
	
	return 0;
}

