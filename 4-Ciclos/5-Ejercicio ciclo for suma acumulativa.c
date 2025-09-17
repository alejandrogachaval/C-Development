#include <stdio.h>
//Sumar los primeros 5 numeros (1-5) usando un ciclo for
int main() {
	int suma = 0;
	for(int i=1; i <= 5; i++){
		suma+= i;
		printf("\nSuma parcial: %d", suma);
	}
	printf("\nLa suma de los primeros 5 numeros es: %d", suma);
	return 0;
}

