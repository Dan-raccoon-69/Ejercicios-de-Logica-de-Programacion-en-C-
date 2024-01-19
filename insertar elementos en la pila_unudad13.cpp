#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};
void agregar(nodo *&,int);

main (){
	int n1,n2;
	nodo *pila=NULL;
	cout<<" Ingresa el elemento a agregar a la pila: "; cin>>n1;
	agregar (pila,n1);
	cout<<"\n Ingresa el elemento a agregar a la pila: "; cin>>n2;
	agregar (pila,n2);
	
	getch();
}

void agregar(nodo *&pila,int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo -> dato=n;
	nuevo_nodo ->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<endl<<" Se a agregado el elemento "<<n;
}
