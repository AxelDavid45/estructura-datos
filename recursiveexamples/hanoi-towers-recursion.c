#include <stdio.h>
#include <conio.h>
//Realizar una funcion recursiva que me imprima los pasos para resolver las torres de Hanoi

void hanoi(int varillainicial, int varillacentral, int varillafinal, int n) {
	if (n == 1)
		printf("\n Mover el disco %d de torre %d a torre %d", n, varillainicial, varillafinal);
	else {
		hanoi(varillainicial, varillafinal, varillacentral, n-1);
		printf("\n Mover el disco %d de torre %d a torre %d",n, varillainicial, varillafinal);
		hanoi(varillacentral, varillainicial, varillafinal, n -1);
	}
}


int main() {
	int discos;
	
	printf("Ingresa la cantidad de discos: ");
	scanf("%i", &discos);
	hanoi(1,2,3, discos);

	return 0;
}

