#include <stdio.h>
#include <conio.h>


//Realizar un TDA que represente los dias de la semana
enum week {
	domingo = 0,
	lunes = 2,
	martes = 3,
	miercoles = 4,
	jueves = 5,
	viernes = 6,
	sabado = 7,
};

typedef enum week Week;

int main() {
	
	Week Semana = domingo;
	
	Week i = domingo;
	
	for (i; i < sabado; i++) {
		printf("%d\n", i);
	}
	
	return 0;
}

