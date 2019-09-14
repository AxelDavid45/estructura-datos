#include <stdio.h>
#include <conio.h>

int fibonacci (int n) {
	if (n == 1 || n == 0) return n;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}
	
int main() {
	
	int entero;
	printf("Escriba el numero entero: ");
	scanf("%i", &entero);
	
	for()
	printf("%i",fibonacci(6));
	
	return 0;
}


