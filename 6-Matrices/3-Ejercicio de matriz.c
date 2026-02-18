#include <stdio.h>
//Ejercicio de matrices
int main() {
	//Definir una matriz
	const int renglones = 2;
	const int columnas = 3;
	int matriz [renglones][columnas];
	
	//Modificar los valores de la matriz
	matriz[0][0] = 7;
	matriz[0][1] = 12;
	matriz[0][2] = 42;
	matriz[1][0] = 2;
	matriz[1][1] = 33;
	matriz[1][2] = 78;
	
	//Leer valores de la matriz
	//int valor1 = matriz[0][0]; 
	printf("%d", matriz[0][0]);
	printf("\n%d", matriz[0][1]);
	printf("\n%d", matriz[0][2]);
	printf("\n%d", matriz[1][0]);
	printf("\n%d", matriz[1][1]);
	printf("\n%d", matriz[1][2]);
	return 0;
}

