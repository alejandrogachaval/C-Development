#include <stdio.h>
#include <stdbool.h>

//Ejercicio tipos de datos
int main() {
	//Variables
	int edad;
	float sueldo;
	bool confianza;
	int confianzaTemp;
	int largoCadena = 30;
	char nombre[largoCadena];
	
	printf("A continuacion ingrese los datos del empleado\n");
	// Ingreso de datos
	printf("Ingrese el nombre: ");
	gets(nombre); 
	
	printf("Ingrese la edad: ");
	scanf("%d", &edad);
	
	printf("Ingrese el sueldo: $");
	scanf("%f", &sueldo);
	
	printf("Es un empleado de confianza? (1-0): ");
	scanf("%d", &confianzaTemp);
	confianza = confianzaTemp; //Si es 1 se convierte en true y si es 0 en false
	
	// Impresión de datos
	printf("-----------------------------------\n");
	printf("DATOS DEL EMPLEADO");
	printf("\nNombre: %s", nombre);
	printf("\nEdad: %d", edad);
	printf("\nSueldo: $%.2f", sueldo);
	printf("\nEs un empleado de confianza: ");
	if (confianza) {
		printf("Sí\n");
	} else {
		printf("No\n");
	}
	
	return 0;
}
