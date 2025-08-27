#include <stdio.h>

int main(){
	//Sentencia if
	//Verifico si el numero proporcionado es positivo
	int num;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	//Verifico si el numero es positivo
	if (num > 0){
		printf("\nEl valor es positivo!");
	}
	else{
		printf("\nEl valor es negativo o 0");
	}
	return 0;
}

