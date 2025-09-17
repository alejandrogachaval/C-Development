#include <stdio.h>

int main() {
	const int MAX = 5;
	int suma = 0, num = 1;
	//Suma acumulativa con ciclo while
	printf("Suma acumulativa con ciclo while\n");
	while(num <= MAX){
		printf("\nSuma parcial acumulada: %d", suma);
		suma += num;
		num++;
	}
	printf("\nSuma final de los primeros 5 numeros: %d", suma);
	
	//Suma acumulativa con ciclo do while
	int suma_do = 0, num_do = 1;
	printf("\n\nSuma acumulativa con ciclo do while\n");
	do{
		printf("\nSuma parcial acumulada: %d", suma_do);
		suma_do += num_do;
		num_do++;
	} while(num_do <= MAX);
	printf("\nSuma final de los primeros 5 numeros: %d", suma_do);
	
	return 0;
}

