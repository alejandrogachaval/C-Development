#include <stdio.h>
#include <stdbool.h>
//Ejercicio de operadores
//Pedirle al usuario un valor dentro del rango 0-5. En caso afirmativo devolver 1 y de lo contrario devolver 0
int main() {
	int min = 0, max = 5;
	//Se le solicita un numero al usuario
	int num;
	printf("Ingrese un numero entre 0-5: ");
	scanf("%d", &num);
	
	//Verificar si esta dentro del rango
	bool dentroRango = num >= min && num <= max;
	printf("\nEl valor que ingreso esta dentro del rango? %d", dentroRango);
	return 0;
}

