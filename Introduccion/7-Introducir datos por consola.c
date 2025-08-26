#include <stdio.h>

//Ejemplo para solicitar informacion al usuario
int main() {
	//Solicitud de valor de tipo numerico
	int numero;
	printf("Ingrese un numero por favor: ");
	scanf("%d", &numero); //leemos la informacion del usuario y lo guardamos a numero asignandolo por su direccion de memoria
	//Solo en los tipos basicos como int, float, double se guarda por direccion de memoria
	printf("El numero asignado a la variable es: %i\n", numero);
	getchar(); // limpia el buffer
	
	//Solicitud de valor de tipo cadena
	int tamanio = 10;
	char nombre[tamanio];
	printf("\nIngrese su nombre por favor: ");
	scanf("%s", nombre); //si ponemos "%[^'\n']s" de esta forma podemos escanear la cadena completa hasta el salto de linea
	//que se da cuando el usuario presiona el enter, de esta forma tmb se pueden poner espacios
	printf("El nombre proporcionado es: %s", nombre);
	return 0;
}

