#include <stdio.h>

int main() {
	int tamanioCadena = 10;
	char nombre [tamanioCadena];
	printf("Ingrese su nombre: ");
	gets(nombre);
	//fgets(nombre, tamanioCadena, stdin); //standar input
	printf("\n El nombre proporcionado es: %s", nombre);
	return 0;
}

