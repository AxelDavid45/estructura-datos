#include <stdio.h>
#include <string.h>
#include <conio.h>

enum color {
	rojo = 0,
	verde = 1,
	azul = 2,
	negro = 3,
	blanco = 4,
};

typedef enum color T_Color;

int main() {
	T_Color c = rojo;
	
	printf("Valor del color rojo = %d\n",c);
	T_Color i;
	for (i = rojo; i< blanco; i++) {
		printf("%d\n", i);
	}

	return 0;
}

