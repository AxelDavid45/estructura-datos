#include <stdio.h>
#include <conio.h>
#include <string.h>

//Forma optimizada de realizar la conversion de binario.
void binario(int n) {
	if (n != 0) binario(n/2);
	printf("%i ", n%2);
}

int main() {
	
	int numero;
	
	printf("Introduce un numero entero: ");
	scanf("%i", &numero);
	
	printf("El binario de %i es: ", numero);
	binario(numero);
	
	
	return 0;
}

