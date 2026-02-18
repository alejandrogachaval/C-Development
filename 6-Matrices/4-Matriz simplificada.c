#include <stdio.h>

//Sintaxis simplificada de matrices
int main() {
	int matriz[2][3] = {
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

