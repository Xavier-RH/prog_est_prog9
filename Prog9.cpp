/* Autor: Xavier Romero Hernández, Realizado: 09/02/2022 
	Programa que pida los datos de un tetraedro regular y calcule su area y su volumen.
	*/

#include <stdio.h>
#include <math.h>

int main (){
	float area, volumen, lado;
	
	printf("Calcular el area de un tetraedro regular\n");
	printf("introduce el lado: ");
	scanf("%f",&lado);
	
	area=sqrt(3)*pow(lado,2);
	volumen=(sqrt(2)*pow(lado,2))/12;
	
	printf("\nEl area del tetraedro regular es de %.2f cm2",area);
	printf("\nEl volumen del tetraedro regular es de %.2f cm3",volumen);
	
	return 0;
}
