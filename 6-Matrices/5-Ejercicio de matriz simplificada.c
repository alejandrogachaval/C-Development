#include <stdio.h>
//Constantes definidas antes de la compilación del programa
#define RENGLONES 2
#define COLUMNAS 3

//Ejercicio de matriz simplificada
int main() {
	//Si definimos los RENGLONES y las COLUMNAS de esta manera da error
	//const RENGLONES = 2;
	//const COLUMNAS = 3;
	int matriz[RENGLONES][COLUMNAS] = {
		{100,200,300},
		{400,500,600},
	};
	printf("%d", matriz[0][0]);
	printf("\n%d", matriz[0][1]);
	printf("\n%d", matriz[0][2]);
	printf("\n%d", matriz[0][3]);
	printf("\n%d", matriz[1][0]);
	printf("\n%d", matriz[1][1]);
	printf("\n%d", matriz[1][2]);
	return 0;
}

