#include <stdio.h>

int main() {
	//Precedencia de operadores en C
	/*
	1.Parentesis y corchetes
	2.Operadores unitarios como ++, --, !
	3.Aritmeticos *, / y %
	4.Aritmeticos + y -
	5.Relacionales <, <=, > y >=
	6.Igualdad == y !=
	7.Logicos && y ||
	8.Asignacion =, =+, -=, *=, etc
	*/
	
	//Ejemplo: Se revisa de izquierda a derecha
	int a = 12 / 3 + 2 * 3 - 1; //(12/3)+(2*3)-1
	printf("Resultado: %d", a);
	return 0;
}

