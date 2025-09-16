#include <stdio.h>
//Ejercicio, pedir al usuario su edad y definir con una constante si ya se considera adulto
int main() {
	const int EDAD_ADULTO = 18;
	int edad;
	printf("Ingrese su edad: ");
	scanf("%d", &edad);
	
	if (edad >= EDAD_ADULTO){
		printf("\nEs un adulto con edad de %d años", edad);
	}
	else{
		printf("\nEs joven con edad de %d años", edad);
	}
	return 0;
}

