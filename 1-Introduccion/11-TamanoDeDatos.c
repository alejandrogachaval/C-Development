#include <stdio.h>
#include <stdbool.h>
int main() {
	//sizeof
	
	//Definicion de variables
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hello World";
	bool booleano;
	//sizeof -> entero positivo (unsigned) long (ul) -> %ul
	//int -> signed (valores positivos y negativos)
	//Imprimir el tamaño de cada variable
	printf("Tamaño de int en bytes: %lu", sizeof(entero));
	printf("\nTamaño de float en bytes: %lu", sizeof(flotante));
	printf("\nTamaño de double en bytes: %lu", sizeof(doble));
	printf("\nTamaño de char en bytes: %lu", sizeof(caracter));
	printf("\nTamaño de cadena en bytes: %lu", sizeof(cadena));
	printf("\nTamaño de bool en bytes: %lu", sizeof(booleano));
	return 0;
}

