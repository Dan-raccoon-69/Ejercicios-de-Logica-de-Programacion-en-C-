/* Hacer un menu:
1 -> insertar un caracter a una cola
2 -> Mostrar todos los elementos de la cola
3 -> salir */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	char dato;
	nodo *siguiente;
};

void agregarcola(nodo *&,nodo *&,char);
void quitarcola(nodo *&,nodo *&,char&);
void menu();
bool cola_vacia(nodo *);

main (){
	menu();
	
	getch();
}

void agregarcola(nodo *& frente,nodo *& final ,char n){
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
void quitarcola(nodo *& frente,nodo *& final ,char &n){
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

void menu(){
	int opcion,op;
	char dato;
	
	nodo *frente=NULL;
	nodo *final=NULL;
	do{
	cout<<"\n\t MENU "<<endl;
	cout<<" 1 -> Ingresar caracteres: "<<endl;
	cout<<" 2 -> Mostrar caracteres: "<<endl;
	cout<<" 3 -> Salir: "<<endl;
	cout<<" Selecciona la opcion seleccionado: ";cin>>opcion;
	switch(opcion){
		case 1:
		system("cls"); 
		cout<<" Ingresa el caracter a agregar a la pila: "; cin>>dato;
		agregarcola (frente,final,dato);	
		break;
		case 2:
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
		break;
		case 3: 
		break;
	}		
	}while(opcion !=3);
}
	

