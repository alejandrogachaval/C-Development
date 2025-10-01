#include <stdio.h>

int main() {
	//Introducir valores de manera dinamica al arreglo
	int numElementos;
	printf("Proporcione el tamanio del arreglo: ");
	scanf("%d",&numElementos);
	
	//Creo el arreglo
	int numeros[numElementos];
	
	//Solicito al usuario los valores
	for(int i=0; i < numElementos; i++){
		printf("Arreglo[%d] = ", i);
		scanf("%d", &numeros[i]);
	}
	
	//Impresion del arreglo
	for(int i=0; i < numElementos; i++){
		printf("\nArreglo[%d] = %d", i, numeros[i]);
	}
	
	return 0;
}

