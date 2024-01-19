#include<iostream>
#include<conio.h>
using namespace std;

void cuadrado(int vect[],int);
void mostrar(int vect[],int);

int main(){
	
	const int TAM=5; 
	int vect[TAM]={1,2,3,4,5};
	
	cuadrado(vect,TAM);
	mostrar(vect,TAM);
	
	getch();
	return 0;
}

void cuadrado(int vect[],int tam){
	for(int i=0;i<tam;i++){
		vect[i]*=vect[i];
	}
}

void mostrar(int vect[],int tam){
	for(int i=0;i<tam;i++){
		cout<<" "<<vect[i]<<" ";
	}
}

