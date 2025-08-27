#include <stdio.h>
#include <stdbool.h>
//Operadores logicos
//Hay que tener siempre en cuenta las tablas de verdad para su uso
int main() {
	//AND "&&": Regresa verdadero si ambos valores son verdaderos o falsos
	//OR "||": Regresa verdadero si al menos uno de los valores es verdadero
	//NOT "!": Invierte el resultado logico del operando.
	//Es decir, not cambia true -->false y viceversa
	
	bool a = true;
	bool b = false;
	printf("Valor de a: %d", a);
	printf("\nValor de b: %d", b);
	
	//Operador logico && (AND)
	bool c = a && b;
	printf("\nResultado de a && b: %d", c);
	
	//Operador logico || (OR)
	c = a || b;
	printf("\nResultado de a || b: %d", c);
	
	//Operador logico ! (NOT)
	c = !a;
	printf("\nResultado de !a: %d", c);
	
	return 0;
}

