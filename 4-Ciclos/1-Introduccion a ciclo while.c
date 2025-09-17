#include <stdio.h>

//Ciclo while
//Imprimir numeros del 1 al 5
int main() {
	int contador = 0, repeticiones = 5;
	
	while(contador < repeticiones){
		contador ++; //Aumenta el contador en 1 cada vez que entra al ciclo 
		printf("\nRecorrido numero: %d", contador);
	}
	return 0;
}

