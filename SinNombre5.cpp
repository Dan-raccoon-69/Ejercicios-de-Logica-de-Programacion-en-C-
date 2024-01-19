/* realize una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos */
#include<iostream>
#include<conio.h>
using namespace std;

void suma_num(int vect[],int);
int elementos;

int main(){
	cout<<" Numero de elementos: "; cin>>elementos;
	const int TAM=elementos; 
	int vect[TAM];
	suma_num(vect,TAM);
	
	getch();
	return 0;
}

void suma_num(int vect[],int tam){
	int suma=0;
	for(int i=0;i<tam;i++){
		cout<<" Escribe el dato "<<i+1<<": ";
		cin>>vect[i];
		suma=suma+vect[i];
	}
	cout<<" Resultado es: "<<suma;
}

