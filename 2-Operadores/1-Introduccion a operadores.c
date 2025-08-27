#include <stdio.h>

//Operadores aritmeticos
int main() {
	/*
	Suma: x + y
	Resta: x - y
	Multiplicacion: x * y 
	Divion: x / y
	Modulo(resto): x % y
	Incremento: ++x o x++
	Decremento: --x
	*/
	int a, b, c, e, f, g, h;
	float d;
	//Suma
	a = 3 + 4;
	printf("Suma: %d", a);
	
	//Resta
	b = 6 - 2;
	printf("\nResta: %d", b);
	
	//Multiplicacion
	c = a * 2;
	printf("\nMultiplicacion: %d", c);
	
	//Division
	d = c / 2;
	printf("\nDivision: %.2f", d);
	
	//Resto
	e = 9 % 2;
	printf("\nResto: %d", e);
	
	//Pre-incremento
	f = 0;
	++f;
	printf("\nPre-incremento: %d", f);
	
	//Pos-incremento
	printf("\nValor sin incrementar de f: %d", f++); //Primero imprime f y luego hace el incremento
	printf("\nValor de f ya incrementado: %d\n", f); //Tenia un incremento pendiente
	
	//Ejemplo Incremento
	f = 5;
	g = 2;
	h = ++f * g++;
	printf("\nEjemplo de operadores de incremento");
	printf("\nValor de f: %d", f);
	printf("\nValor de g: %d", g);
	printf("\nValor de h: %d\n", h);
	
	//Operadores de decremento
	//Ejemplo
	f = 5;
	g = 2;
	h = --f * g--;
	printf("\nEjemplo de operadores de decremento");
	printf("\nValor de f: %d", f);
	printf("\nValor de g: %d", g);
	printf("\nValor de h: %d", h);
	return 0;
}

