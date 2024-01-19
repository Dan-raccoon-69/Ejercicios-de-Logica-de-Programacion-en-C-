#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};
void agregar(nodo *&,int);
void quitar(nodo *&,int&);

main (){
	int dato;
	nodo *pila=NULL;
	cout<<" Ingresa el elemento a agregar a la pila: "; cin>>dato;
	agregar (pila,dato);
	cout<<"\n Ingresa el elemento a agregar a la pila: "; cin>>dato;
	agregar (pila,dato);
	cout<<"\n Quitando elementos: ";
	while(pila !=NULL){
		quitar(pila,dato);
		if(pila !=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<". ";
		}
	}
	
	getch();
}

void agregar(nodo *&pila,int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo -> dato=n;
	nuevo_nodo ->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<endl<<" Se a agregado el elemento "<<n;
}

//se le coloca a n pasos por referencia porque n va cambiar y es el que queremos eliminar
void quitar(nodo *&pila,int &n){
	nodo *aux=pila;
	n=aux -> dato;
	pila=aux -> siguiente;
	delete aux;
	
}
