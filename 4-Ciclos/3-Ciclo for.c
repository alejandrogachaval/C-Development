#include <stdio.h>

//En el ciclo for especificamos cuantas veces queremos repetir un bloque de codigo
//for(declaracion de variables o contadores ; condicion a evaluar ; incremento de contadores)
//La declaracion de variables o contadores se ejecuta una unica vez
//La condicion a evaluar hace que se repita el ciclo siempre que sea verdadero,
//por lo que se lee cada vez que se entra de nuevo al ciclo
//El bloque de codigo se ejecuta siempre que la condicion sea verdadera
//Los contadores se incrementan cada vez que la condicion sea verdadera

//Ejercicio: Imprimir numeros del 1 al 5 usando el ciclo for
int main() {
	const int REPETICIONES = 5;
	for(int i=1; i <= REPETICIONES; i++){ //i es un contador
		printf("\n%d", i);
	}
	return 0;
}

