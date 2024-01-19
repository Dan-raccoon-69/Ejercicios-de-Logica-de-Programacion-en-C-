#include<iostream>
#include<conio.h>
using namespace std;
/* Programa que defina un vector numerico y calcule la multiplicacion 
acumulada de sus elementos */

void multiplicarArreglo(int arreglo[]);

void multiplicarArreglo(int arreglo[]){
	int total = 1;
	int longitud = sizeof(arreglo) - 1;
	for(int c = 0;c < longitud; c++){
		total *= arreglo[c];
	}
	cout<<"Multiplicacion es: "<<total;
}

int main(){
	int numero[]={1,2,3,4,5,6,7};
	multiplicarArreglo(numero);
	return 0;
}
