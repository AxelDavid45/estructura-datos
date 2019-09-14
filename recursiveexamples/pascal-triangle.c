//Realizar una funcion recursiva que calcule el triangulo de pascal
#include <stdio.h>
#include <conio.h>

int pascal(int i, int j) {
	if (i == j  || i == 0 ) return 1;
	return pascal(i - 1, j - 1) + pascal(i, j - 1);
}

int main() {
	int n = 3;
	int i,j = 0;
	
	
	for(i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			printf("%i", pascal(i, j));
		}
	}
	
	return 0;
}

