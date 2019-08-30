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
};

void moverPunto(struct punto *, float coordX, float coordY);

void moverPuntoX(struct punto *,float);

void moverPuntoY(struct punto *,float);

float getX(struct punto *);

float getY(struct punto *);

void imprimir(struct punto );
float DistEntrePuntos(float *);







int main() {
	struct punto A;
	float puntos[4], distancia;
	
	moverPunto(&A , 2 , 4);
	imprimir(A);
	
	printf("\nCalculando distancia entre dos puntos...\n");
	printf("Ingrese las coordenadas del punto inicial:\n");
	printf("X1: ");
	scanf("%f", &puntos[0]);
	printf("Y1: ");
	scanf("%f", &puntos[1]);
	
	printf("\nIngrese las coordenadas del punto final:\n");
	printf("X2: ");
	scanf("%f", &puntos[2]);
	printf("Y2: ");
	scanf("%f", &puntos[3]);
	
	//Llamamos al metodo
	distancia = DistEntrePuntos(puntos);
	printf("\nLa distancia entre los puntos es: %.2f", distancia);
	
	return 0;
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

float DistEntrePuntos(float *puntos) {
	//Formula dp1p2 = sqrt(pow((x2-x1), 2) + pow((y2-y1),2));
	float distancia = sqrt((pow((puntos[2] - puntos[0]), 2) + pow((puntos[3] - puntos[1]), 2)));
	return distancia;
}
