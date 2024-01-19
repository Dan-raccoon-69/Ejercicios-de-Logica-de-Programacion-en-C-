#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};
void quitar(nodo *&,int&);

main (){
	int n1,n2;
	nodo *pila=NULL;
	
	getch();
}
//se le coloca a n pasos por referencia porque n va cambiar y es el que queremos eliminar
void quitar(nodo *&pila,int &n){
	nodo *aux=pila;
	n=aux -> dato;
	pila=aux -> siguiente;
	pila=nuevo_nodo;
	delete aux;
	cout<<endl<<" Se a quitado el elemento "<<n;
}
