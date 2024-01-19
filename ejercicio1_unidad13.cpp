#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregar(nodo *&,int);
void mostrar(nodo *&,int);
int dato,elementos;
	
main (){
	nodo *pila=NULL;
	cout<<" Ingresa el numero de elemento a agregar a la pila: "; cin>>elementos;
	for(int i=0;i<elementos;i++){
		cout<<" Ingresa el dato (" << i+1<< ") a agregar a la pila: "; cin>>dato;
		agregar(pila,dato);
		cout<<"\n";	
	}
	mostrar(pila,dato);
	getch();
}

void agregar(nodo *&pila,int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo -> dato=n;
	nuevo_nodo ->siguiente=pila;
	pila=nuevo_nodo;
	cout<<" Se a agregado el elemento "<<n<<" a la pila"<<endl;
}
void mostrar(nodo *&pila,int n){
	cout<<" Los elementos de la pila son: ";
	for(int i=0;i<elementos;i++){
	nodo *aux=pila;
	n=aux -> dato;
	pila=aux -> siguiente;
	cout<<" "<<n;	
	}	
}
