#include <stdio.h>
#include <stdbool.h>
int main() {
	//Operadores relacionales (comparacion)
	int a = 5, b = 6;
	printf("Valor de a: %d", a);
	printf("\nValor de b: %d", b);
	
	//Operador igualdad
	bool c = a == b;
	printf("\nEs a igual a b? %d", c);
	
	//Operador distinto
	c = a != b;
	printf("\nEs a distinto a b? %d", c);
	
	//Operador mayor que
	c = a > b;
	printf("\nEs a mayor a b? %d", c);
	
	//Operador menor que
	c = a < b;
	printf("\nEs a menor a b? %d", c);
	
	//Operador mayor o igual
	c = a >= b;
	printf("\nEs a mayor o igual a b? %d", c);
	
	//Operador menor o igual
	c = a <= b;
	printf("\nEs a menor o igual a b? %d", c);
	
	return 0;
}

