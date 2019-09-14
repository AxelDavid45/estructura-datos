#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main() {
	
	int datos;
	int y[100];
	int *x;
	
	printf("Cuantos datos deseas ingresar?: ");
	scanf("%d", &datos);
	
	printf("%d\n", datos);
	
	x = (int *) malloc (datos * sizeof(int)); //Reservando memoria de manera dinamica
	
	int i = 0;
	
	for(i; i < datos; i++) {
		x[i] = i;
		y[i] = i;
	}
	
	i = 0;
	
	for (i; i < datos; i++) {
		printf("X = %d, Y = %d\n", x[i],y[i]);
	}
	
	free(x); //Liberamos la memoria que teniamos reservada al finalizar el programa
	return 0;
}
