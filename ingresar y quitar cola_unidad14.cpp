#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void agregarcola(nodo *&,nodo *&,int);
void quitarcola(nodo *&,nodo *&,int&);

bool cola_vacia(nodo *);
main (){
	int dato;
	nodo *frente=NULL;
	nodo *final=NULL;
	
	cout<<" Ingresa el elemento a agregar a la pila: "; cin>>dato;
	agregarcola (frente,final,dato);
	cout<<"\n Ingresa el elemento a agregar a la pila: "; cin>>dato;
	agregarcola (frente,final,dato);
	cout<<"\n Ingresa el elemento a agregar a la pila: "; cin>>dato;
	agregarcola (frente,final,dato);
	system("cls");
	cout<<"\n Eliminando: ";
	while(frente !=NULL){
		quitarcola(frente,final,dato);
		if(frente !=NULL){
			cout<<dato<<",";
		}
		else{
			cout<<dato<<".";
		} 
		
	}

	getch();
}

void agregarcola(nodo *& frente,nodo *& final ,int n){
	//1er paso
	nodo *nuevo_nodo= new nodo(); 	
	//2er paso
	nuevo_nodo -> dato=n;
	nuevo_nodo -> siguiente=NULL ;
	//3er paso
	if(cola_vacia(frente ))	{
		frente=nuevo_nodo;
	}
	else {
		final -> siguiente = nuevo_nodo;
	}
	final=nuevo_nodo;
	cout<<"\n Tu dato "<<n<< " esta registrado correctamente.";
}

//funcion para saber si esta vacia
bool  cola_vacia(nodo *frente){
	/*ESTA FORMA ES MUY GRANDE
	if(frente==NULL){
		return true;
	}
	else {
		return false; 
	}
	*/
	//ESTA FORMA ES LO MISMO QUE LA DE ARRIBA PERO SOLO 1 LINEA DE CODIGO
	return (frente==NULL)? true:false; 
}
void quitarcola(nodo *& frente,nodo *& final ,int &n){
	//1er paso
	n=frente -> dato;
	//2er paso
	nodo *aux=frente; 
	//3er paso
	if(frente==final)	{
		frente=NULL;
		final=NULL;
	}
	else {
		frente=frente -> siguiente;
	}
	delete aux;
}

