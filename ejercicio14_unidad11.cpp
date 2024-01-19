/* realize una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos */
#include<iostream>
#include<conio.h>
using namespace std;

void datos();
void impares(int vect[],int);
int vect[100],tam;
char band='F';
int main(){
	datos();
	
	cout<<"\n Los impares son: ";
	impares(vect,tam);
	
	getch();
	return 0;
}

void datos(){
	cout<<" Numero de elementos: "; cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<" Escribe el dato "<<i+1<<": ";
		cin>>vect[i];
	}
}

void impares(int vect[],int){
	for(int i=0;i<tam;i++){
		if(vect[i]%2==1){
			cout<<" "<<vect[i];
			band='V';
		}
	}
	if (band=='F'){
		cout<<"\n No hay numeros impares.";
	}
	
}

