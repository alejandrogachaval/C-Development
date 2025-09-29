#include <stdio.h>

//Un arreglo permite almacenar múltiples valores en una sola variable
//Sintaxis: <tipo_dato> <nombre_arreglo> [tamano_arreglo];

int main() {
	int numerosArreglo[5];
	
	numerosArreglo[0] = 5;
	numerosArreglo[4] = 50;
	
	printf("Valor almacenado en numerosArreglo[0]: %d", numerosArreglo[0]);
	printf("\nValor almacenado en numerosArreglo[4]: %d", numerosArreglo[4]);
	return 0;
}
