#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

void creaArbol(struct arbol *);
void preOrden(struct arbol *);
void inOrden(struct arbol *);
void posOrden(struct arbol *);
int buscar(struct arbol *,int);
int dato,band=0,opc_bus;
struct arbol
{
    int info;
    struct arbol *izq,*der;
};
	
int main()
{
	setlocale(LC_ALL, "spanish");
    arbol *raiz=NULL;
	int x,N,dato;
    raiz=new(arbol);
    creaArbol(raiz);
    cout<<"\n";
    cout<<"Recorrido en pre Orden\n";
    preOrden(raiz);
    cout<<"\n";
    cout<<"\nRecorrido en in Orden\n";
    inOrden(raiz);
    cout<<"\n";
    cout<<"\nRecorrido en pos Orden\n";
    posOrden(raiz);
    cout<<"\n";
    do{
    band=0;
	cout<<"\nBusqueda\n";
    cout<<"Ingresa el dato a buscar: ";
    cin>>dato;
    buscar(raiz,dato);
    if(band==1){
    	cout<<"Dato encontrado";
    }
    else
    {
    	cout<<"Dato NO encontrado";
    }
    
    cout<<"\n";
	cout<<" ¿Deseas volver a buscar un numero? (1/0): ";
	cin>>opc_bus;    	
    }while(opc_bus!=0);

}

void creaArbol(struct arbol *nodo){
	int resp;
	arbol *nuevo;
	cout<<"Ingresa el valor: ";
    cin>>nodo->info;
    cout<<"Existe nodo por la izquierda de "<<nodo->info<<": ";
    cin>>resp;
    if(resp==1){
    	nuevo = new(arbol);
    	nodo->izq=nuevo;
    	creaArbol(nuevo);
    }
    else
    nodo->izq=NULL;
    
    cout<<"Existe nodo por la derecha de "<<nodo->info<<": ";
    cin>>resp;
    if(resp==1){
    	nuevo = new(arbol);
    	nodo->der=nuevo;
    	creaArbol(nuevo);
    }
    else
    nodo->der=NULL;
}

void preOrden(struct arbol*nodo){
	if(nodo!=NULL){
		cout<<nodo->info<<" ";
		preOrden(nodo->izq);
		preOrden(nodo->der);
	}
}

void inOrden(struct arbol*nodo){
	if(nodo!=NULL){
		inOrden(nodo->izq);
		cout<<nodo->info<<" ";
		inOrden(nodo->der);
	}
}

void posOrden(struct arbol*nodo){
	if(nodo!=NULL){
		posOrden(nodo->izq);
		posOrden(nodo->der);
		cout<<nodo->info<<" ";
	}
}

int buscar(struct arbol *nodo,int dato){
	if(nodo!=NULL){
		buscar(nodo->izq,dato);
		buscar(nodo->der,dato);
		//cout<<nodo->info<<" ";
		if(dato==nodo->info){
			band=1;
			return band;
		}
}
}

