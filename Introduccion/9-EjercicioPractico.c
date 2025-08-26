#include <stdio.h>
#include <stdbool.h>
//Ingrese datos de un empleado por consola, que ingrese el nombre, edad, sueldo y si es un empleado de confianza
int main() {
	char nombre[10];
	int edad;
	float sueldo;
	bool confianza;
	
	
	printf("A continuacion ingrese los datos del empleado\n");
	//Ingreso de datos del empleado	
	printf("Ingrese el nombre: ");
	scanf("%s", nombre);
		
	printf("Ingrese la edad: ");
	scanf("%d", &edad);
	
	printf("Ingrese el sueldo: $");
	scanf("%d", &sueldo);
	
	printf("Es un empleado de confianza? (1-0): ");
	scanf("%d", confianza);
	
	//Impresion de datos del empleado
	printf("-----------------------------------");
	printf("DATOS DEL EMPLEADO");
	printf("\nNombre: %s", nombre);
	printf("\nEdad: %i", edad);
	printf("\nSueldo: $%f", sueldo);
	printf("\nEs un empleado de confianza: %d", confianza);
	return 0;
}

