#include <stdio.h>
#include <conio.h>

int recursiveFactorial(int x) {
	if (x == 1) 
		return 1;
	else 
		return recursiveFactorial(x - 1) * x;	
}


int main() {
	
	int dato;
	
	printf("Ingresa un dato entero: ");
	scanf("%i", &dato);	
	
	printf("El factorial de  %i es: %i", dato, recursiveFactorial(dato));
	return 0;
}

