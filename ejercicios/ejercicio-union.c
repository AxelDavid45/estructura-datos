// Imprimir el binario de un caracter introducido por el usuario
// Realice un programa en C que distingue cuantos numeros de botones mi mouse.
#include <stdio.h>
#include <string.h>
#include<conio.h>

struct ASCII {
	int a:1,b:1,c:1,d:1,e:1,f:1,g:1,h:1;
};


typedef struct ASCII Byte;

int main () {
	Byte A;
	
	scanf("%d", &A);
	printf("Codigo Binario: ");
	if (A.h) printf("1"); else printf("0");
	if (A.g) printf("1"); else printf("0");
	if (A.f) printf("1"); else printf("0");
	if (A.e) printf("1"); else printf("0");
	if (A.d) printf("1"); else printf("0");
	if (A.c) printf("1"); else printf("0");
	if (A.b) printf("1"); else printf("0");
	if (A.a) printf("1"); else printf("0");
	
	
	
	return 0;
}
