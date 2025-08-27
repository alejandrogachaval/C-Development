#include <stdio.h>
#include <stdbool.h> //Libreria para usar variables booleanas
//Tipos de datos basicos en C
int main() {
	//Tipo int (formato %d, %i)
	int entero = 1;
	printf("Entero: %i", entero);
	
	//Tipo float (formato %f)
	//En caso de querer especificar cuantos caracteres se quieren imprimir despues del . 
	//es de la siguiente forma: %.nf n indica cuantos caracteres se imprimen despues del .
	float flotante = 1.5;
	printf("\nFlotante: %f", flotante);
	
	//Tipo double (formato %lf) (long float)
	//Abarca valores mas largos que un flotante comun
	double doble = 6343.3763;
	printf("\nDoble: %lf", doble);
	
	//Tipo char (formato %c)
	char caracter = 'A';
	printf("\nCaracter: %c", caracter);
	printf("\nValor decimal del caracter: %d", caracter); //Buscar el numero en ASCII del caracter
	char caracter_Ascii = 65; //Se pueden buscar los caracteres tambien de esta forma en ASCII(el de 65 es A)
	printf("\nCaracter ASCII: %c", caracter_Ascii);
	
	//Tipo bool (valores True/1 o False/0)
	bool booleano = true;
	printf("\nBooleano: %d", booleano); //Devuelve 1 que seria igual a true 
	
	//Un arreglo es un conjunto de datos que se encuentran ubicados en la memoria RAM
	//Tipo cadena (formato %s) (string)
	char cadena[] = "Hola"; //Al estar no especificados la cant de caracteres [] se llena con toda la cadena que le pasemos 
	printf("\nCadena: %s", cadena);
	//Otra cadena (con otra sintaxis)
	char cadena2[8] = "Saludos"; //Se especifica [n] cuantos caracteres tendra la cadena, si no llega a tener n, los llena vacios 
	//Siempre se le debe pasar 1 caracter mas del num de caracteres de la cadena que tenemos ya que el ultimo la cierra
	printf("\nCadena2: %s", cadena2);
	return 0;
}

