#include<conio.h>
#include<stdio.h>
#include<iostream> //esta libreria es para usar el cin y el cout

using namespace std;
main(){
	int a,b,c,d;
	
	//EJEMPLO CON PRINTF y SCANF
	printf("Ingresa el 1er numero: ");
	scanf("%i",&a);
	
	/*EJEMPLO CON COUT Y CIN
	cout<<"Ingresa el 1er numero: ";
	cin>>a;     */
	
	printf("Ingresa el 2do numero: ");
	scanf("%i",&b);
	printf("Ingresa el 3er numero: ");
	scanf("%i",&c);
	d=a+b+c;
	
	
	// EJEMPLO PARA MANDAR A IMPRIMIR CON COUT
//	cout<<"El resultado es: "<<d;
	
	//EJEMPLO PARA MANDAR A IMPRIMIR CON PRINTF
	printf("\n El resultado es: %i", d);
	
	return 0;
}
