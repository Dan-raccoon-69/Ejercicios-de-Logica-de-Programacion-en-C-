#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void quitarcola(nodo *&,nodo *&,int&);
bool cola_vacia(nodo *);
main (){
	int dato;
	nodo *frente=NULL;
	nodo *final=NULL;
	cout<<" Ingresa el elemento a agregar a la pila: "; cin>>dato;
	quitarcola (frente,final,dato);

	getch();
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
	cout<<"\n Tu dato "<<n<< " esta borrado correctamente.";
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
