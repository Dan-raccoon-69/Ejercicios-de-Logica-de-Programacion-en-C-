#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

void creaABB(struct abb *,int);
void preOrden(struct abb *);
void inOrden(struct abb *);
void posOrden(struct abb *);
int buscar(struct abb *,int);
int dato_buscar,band=0;

struct abb
{
    int info;
    struct abb *izq,*der;
};
	
int main()
{
	setlocale(LC_ALL, "spanish");
    struct abb *raiz=NULL;
	int dato,opc,r;
	while(opc!=5){
		cout<<"\n";
		cout<<" 1. Insertar"<<endl;
		cout<<" 2. Eliminar (no existe)"<<endl;
		cout<<" 3. Recorrido"<<endl;
		cout<<" 4. Busqueda"<<endl;
		cout<<" 5. Salir"<<endl;
		cout<<"\n Selecciona la opcion: "; cin>>opc;
		switch(opc){
			case 1:
				cout<<"\n";
				if(raiz==NULL){
					raiz=new(abb);
					raiz->izq=NULL;
					raiz->der=NULL;
					cout<<" Teclea el valor del nodo raiz: ";
					cin>>raiz->info;
				}
				else{
					cout<<" Teclea el valor del nodo: ";
					cin>>dato;
					creaABB(raiz, dato);
				}
				 break;
			case 3:
			cout<<"\n";	
			cout<<" Recorridos: "<<endl;
			cout<<" 1. Preo orden "<<endl;
			cout<<" 2. In orden "<<endl;
			cout<<" 3. Pos orden "<<endl;
			cout<<"\n Seleccion la opcion deseada: ";
			cin>>r;
			switch(r){
				case 1:
					cout<<"\n";
					cout<<"PreOrden: "<<endl;				
					preOrden(raiz);
					cout<<"\n";
					break;
					case 2:
					cout<<"\n";
					cout<<"InOrden: "<<endl;				
					inOrden(raiz);
					cout<<"\n";
					break;
					case 3:
					cout<<"\n";
					cout<<"PosOrden: "<<endl;				
					posOrden(raiz);
					cout<<"\n";
					break;					
			}
			break;	 
			case 4:
			band=0;
			cout<<"\n";
			cout<<"Ingresa el dato a buscar: ";
    		cin>>dato_buscar;
    		buscar(raiz,dato_buscar);
    		if(band==1){
    		cout<<"Dato encontrado\n";
    		}
    		else
    		cout<<"Dato NO encontrado\n";
			break;
			
			case 5:
			exit(1);
			break;
		}
	}    
}
void creaABB(struct abb *nodo,int x){
	struct abb *nuevo;
	if(x<nodo->info){
    if(nodo->izq==NULL){
    	nuevo=new(abb);
    	nuevo->izq=NULL;
    	nuevo->der=NULL;
    	nuevo->info=x;
    	nodo->izq=nuevo;   	
    }
    else
	creaABB(nodo->izq,x);	
    }
	else{
		if(x>nodo->info){
		if(nodo->der==NULL){
    	nuevo=new(abb);
    	nuevo->izq=NULL;
    	nuevo->der=NULL;
    	nuevo->info=x;
    	nodo->der=nuevo;   	
    }
	else 
	creaABB(nodo->der,x);	
		}
		else 
		cout<<" El nodo ya existe en el arbol!\n";
	}	
	}
    
void preOrden(struct abb *raiz){
	if(raiz!=NULL){
		cout<<raiz->info<<" ";
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

void inOrden(struct abb *raiz){
	if(raiz!=NULL){
		inOrden(raiz->izq);
		cout<<raiz->info<<" ";
		inOrden(raiz->der);
	}
}

void posOrden(struct abb *raiz){
	if(raiz!=NULL){
		posOrden(raiz->izq);
		posOrden(raiz->der);
		cout<<raiz->info<<" ";
	}
}

int buscar(struct abb *raiz,int dato_buscar){
	if(raiz!=NULL){
		buscar(raiz->izq,dato_buscar);
		buscar(raiz->der,dato_buscar);
		//cout<<nodo->info<<" ";
		if(dato_buscar==raiz->info){
			band=1;
			return band;
		}
}
}
