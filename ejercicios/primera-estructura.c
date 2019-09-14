#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Modele y programe una estructura de datos que ejemplifique el comportamiento de un punto
que pueda ser ubicado en el plano cartesiano, implemente sus comportamientos basicos
- Mover punto
- Mover coordenada X
- Mover coordenada Y
- Obtener coordenada X
- Obtener coordenada Y
- Imprimir
*/

struct punto {
	float coordX;
	float coordY;
	float coordX2;
	float coordY2;
};

void moverPunto(struct punto *, float coordX, float coordY);

void moverPuntoX(struct punto *,float);

void moverPuntoY(struct punto *,float);

float getX(struct punto *);

float getY(struct punto *);

void imprimir(struct punto );
void moverTodosPuntos(float, float, float, float, struct punto *);
float DistEntrePuntos(struct punto *);


int main() {
	struct punto A;
	float puntos[4], distancia;
	
	moverPunto(&A , 2 , 4);
	imprimir(A);
	
	printf("\nCalculando distancia entre dos puntos...\n");
	printf("Ingrese las coordenadas del punto inicial:\n");
	printf("X1: ");
	scanf("%f", &A.coordX);
	printf("Y1: ");
	scanf("%f", &A.coordY);
	
	printf("\nIngrese las coordenadas del punto final:\n");
	printf("X2: ");
	scanf("%f", &A.coordX2);
	printf("Y2: ");
	scanf("%f", &A.coordY2);
	
	//Llamamos al metodo
	distancia = DistEntrePuntos(&A);
	printf("\nLa distancia entre los puntos es: %.2f", distancia);
	
	return 0;
}

void moverTodosPuntos(float x1, float y1, float x2, float y2, struct punto *A ) {
	A->coordX = x1;
	A->coordX2 = x2;
	A->coordY = y1;
	A->coordY2 = y2;	
}

void moverPunto(struct punto *A, float coordX, float coordY) { //Metodo OK
	A->coordX = coordX;
	A->coordY = coordY;
}

void moverPuntoX(struct punto *A,float posx) { //Metodo OK
	A->coordX = posx;
}

void moverPuntoY(struct punto *A,float posy) { //Metodo OK
	A->coordY = posy;
}

float getX(struct punto *A) { //Metodo OK
	return A->coordX;
}

float getY(struct punto *A) { //Metodo OK
	return A->coordY;
}

void imprimir(struct punto A) {
	printf("\nCoordenada X: %f\n",A.coordX);
	printf("\nCoordenada Y: %f\n", A.coordY);
}

float DistEntrePuntos(struct punto *A) {
	//Formula dp1p2 = sqrt(pow((x2-x1), 2) + pow((y2-y1),2));
	float distancia = sqrt((pow((A->coordX2 - A->coordX), 2) + pow((A->coordY2 - A->coordY), 2)));
	return distancia;
}
