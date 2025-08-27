#include <stdio.h>
#define PI 3.1416
#include <math.h> //Utilizo PI pero de la libreria math

//Manejo de constantes
int main() {
	
	//Defino una constante
	//Las constantes siempre permanecen con el mismo valor inicial
	const int MI_CONSTANTE = 10; //Es de solo lectura (read only), no se puede sobreescribir con otro valor
	printf("Valor de la constante: %d", MI_CONSTANTE);
	
	//Imprimo el valor de la constante PI
	printf("\nValor de la constante PI: %.4f", PI);
	
	//Imprimo el valor de PI pero de la libreria math
	printf("\nEl valor de PI (libreria math): %.8f", M_PI);
	
	//Constante segundos por minuto
	const int SEGUNDOS_POR_MINUTO = 60;
	printf("\nConstante SEGUNDOS_POR_MINUTO= %d",SEGUNDOS_POR_MINUTO);
	
	return 0;
}

