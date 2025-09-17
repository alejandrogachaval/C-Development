#include <stdio.h>
#include <stdbool.h>
//A diferencia del ciclo while, en el do while por lo menos se ejecuta una vez 
//ya que la condicion a realizar esta al final del bloque

//Pedirle al usuario que ingrese un numero numero positivo y que corte cuando 
//el usuario ingresa un numero positivo y sino que se repita el ciclo
int main() {
	int num;
	bool condicion;
	do{
		printf("\nIngrese un numero: ");
		scanf("%d", &num);
		condicion = num > 0;
	} while(!condicion);
	printf("\nEl usuario ingreso el numero: %d", num);
	return 0;
}

