#include <stdio.h>
//Iterar una matriz
int main() {
	int matriz[2][3] = {{100,200,300},{400,500,600}};
	
	//Iteración de la matriz
	printf("Iteración de la matriz!");
	for(int filas = 0; filas < 2; filas++){ // Controla las filas
		printf("\n");
		for(int col = 0; col < 3; col++){ // Controla las columnas
			printf(" %d", matriz[filas][col]);
		}
	}
	return 0;
}

