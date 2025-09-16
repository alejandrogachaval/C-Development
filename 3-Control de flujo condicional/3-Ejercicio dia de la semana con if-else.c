#include <stdio.h>
//Ejercicio dia de la semana
//Pedir al usuario que ingrese manualmente cual es el dia de la semana 1-7 y pasarle por consola que dia es
//Utilizar if-else if y else para hacer el ejercicio
int main() {
	int dia;
	
	printf("Ingrese el dia de la semana (1-7): ");
	scanf("%d", &dia);
	
	if (dia == 1) printf("Es lunes");
	else if (dia == 2) printf("Es martes");
	else if (dia == 3) printf("Es miercoles");
	else if (dia == 4) printf("Es jueves");
	else if (dia == 5) printf("Es viernes");
	else if (dia == 6) printf("Es sabado");
	else if (dia == 7) printf("Es domingo");
	else printf("\nNo se ingreso una respuesta valida");
	return 0;
}

