#include <stdio.h>

//Modificar los valores de una matriz
int main() {
	int matriz[2][3];
	//Modificación de valores
	matriz[0][0] = 100; //En la fila 0 y columna 0, se asignará el valor de 100
	matriz[1][2] = 23; //En la fila 0 y columna 0, se asignará el valor de 23
	printf("%d", matriz[0][0]); //Imprime 100
	printf("\n%d", matriz[1][2]); //Imprime 23
	printf("\n%d", matriz[1][1]); //Imprime un valor basura ya que no se encuentra inicializado
	return 0;
}

