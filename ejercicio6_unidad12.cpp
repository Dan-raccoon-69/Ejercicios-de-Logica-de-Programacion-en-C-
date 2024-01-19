/* Hacer una funcion 	para almacenar N numeros en un arreglo dinamico, posteriormente en otra funcion buscar
un numero en particular. puede usar cualquier metodo de busqueda(secuencial o binaria)*/
#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;

int n,*numeros;
void registrardatos();
void buscar(int *,int);
main (){
	
	registrardatos();
	buscar(numeros,n);
	delete []numeros;
	getch();
}

void registrardatos(){
	cout<<" Ingresa el num de registros a registrar: "; cin>>n;
	numeros=new int [n];
	for(int i=0;i<n;i++){
		cout<<" Ingresa el dato "<<i+1<<" : "; cin>>*(numeros+i);
	}
}

void buscar(int *numeros,int n){
	int busca;
	char band='F';
	cout<<"\n Buscar: "; cin>>busca;
	int i=0;
	while((band=='F') && i<n){
		if(*(numeros+i) == busca){
		band='V';
		}
		i++;
	}
	cout<<"\n";
	if(band=='V'){
		cout<<"\n Si existe el numero en el arreglo, en la posicion " << i;
	}
	else 
	cout<<"\n NO existe el numero en el arreglo, F";	
	
}
