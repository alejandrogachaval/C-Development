#include <stdio.h>
//Incrementar de 3 en 3 con tope de 10 y restar 3 en 3 con tope -10
int main() {
	const int MAXIMO = 10;
	printf("Saltos de suma:\n");
	for(int i=0; i <= MAXIMO; i+=3){
		printf("%d\n", i);
	}
	printf("\nSaltos de resta:\n");
	for(int i=0; i >= -MAXIMO; i-=3){
		printf("%d\n", i);
	}
	return 0;
}

