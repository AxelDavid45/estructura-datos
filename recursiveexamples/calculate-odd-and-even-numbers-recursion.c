//Mediante dos funciones recursivas determine si un numero es par o es impar 

#include<stdio.h>
int n;
int par(int n);
int impar(int n);

int main(){

   
   printf("Ingrese un numero");
   scanf("%i",&n);
 
 	if(par(n))
 		printf("El numero es par");
 	else 
 		printf("El numero es impar");
		 
	printf("\n\n ");
}


int par(int n){
 if (n==0) return 1;
 else return (impar(n-1));
}


int impar(int n){
 if (n==0) return 0; 
 else return(par(n-1));
}
