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
	//Imprimir el tama�o de cada variable
	printf("Tama�o de int en bytes: %lu", sizeof(entero));
	printf("\nTama�o de float en bytes: %lu", sizeof(flotante));
	printf("\nTama�o de double en bytes: %lu", sizeof(doble));
	printf("\nTama�o de char en bytes: %lu", sizeof(caracter));
	printf("\nTama�o de cadena en bytes: %lu", sizeof(cadena));
	printf("\nTama�o de bool en bytes: %lu", sizeof(booleano));
	return 0;
}

