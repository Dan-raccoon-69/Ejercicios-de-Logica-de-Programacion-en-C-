//unidad 5(Los vectores)
#include<iostream>
#include<conio.h>
using namespace std;
//programa que define un vector de numeros y calcule la suma de sus elementos
void sumarArreglo(int arreglo[]);

void sumarArreglo(int arreglo[]){
	int total = 0;
	
	int longitud = sizeof(arreglo) - 1;
	for(int c = 0;c < longitud; c++){
		total += arreglo[c];
	}
	cout<<"Suma es: "<<total;
	cout<<"\nLongitud es: "<<longitud;
}

int main(){
	int numero[]={1,2,3,4,5,6,7};
	sumarArreglo(numero);
	return 0;
}


