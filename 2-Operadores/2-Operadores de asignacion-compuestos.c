#include <stdio.h>

int main() {
	//Operadores de asignacion
	//Operador = para asignar un valor
	int miNumero = 10;
	printf("Valor de miNumero: %d", miNumero);
	
	//Operador +=
	miNumero += 5; //miNumero = miNumero + 5
	printf("\nValor de miNumero con '+=': %d", miNumero);
	
	//Operador -=
	miNumero -= 5; //miNumero = miNumero - 5
	printf("\nValor de miNumero con '-=': %d", miNumero);
	
	//Operador *=
	miNumero *= 5; //miNumero = miNumero * 5
	printf("\nValor de miNumero con '*=': %d", miNumero);
	
	//Operador /=
	miNumero /= 5; //miNumero = miNumero / 5
	printf("\nValor de miNumero con '/=': %d", miNumero);
	
	//Operador %=
	miNumero %= 5; //miNumero = miNumero % 5
	printf("\nValor de miNumero con 'resto=': %d", miNumero);
	
	return 0;
}

