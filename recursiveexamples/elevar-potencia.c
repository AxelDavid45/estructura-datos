// Calcule la potencia de un numero, utilizando recursividad
#include <stdio.h>
#include <conio.h>

int pot (int base, int potencia) {
	if (potencia == 0) {
		return 1;
	} else {
		return base * pot(base, potencia -1);
	}
}

int main() {
	
	printf("%i", pot(2,3));
	return 0;
}

