/* pedir al usuario N numeros , almacenarlos en un arreglo dinamico posteriormente ordenar 
los numeros en orden ascendete y mostrarlos en pantalla, puedes utilizar cualquier metodo de ordenaminto*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirdatos();
void ordenar(int *,int);
void mostar(int *,int);

int elementos, *elemento;

main (){
	
	pedirdatos();
	ordenar(elemento,elementos);
	cout<<"\n Ordenados: ";
	mostar(elemento,elementos);
	delete [] elemento;
	getch();
}

void pedirdatos(){
	cout<<"\n";
	cout<<" Ingresa el num de datos: "; cin>>elementos;
	elemento= new int [elementos];
	for(int i=0;i<elementos;i++){
		cout<<" Ingresa el valor de "<<i+1<<" : "; 
		/* puedes colocarlo de esta manera:
		cin>>elemento[i];*/
		// o tambien de esta forma con punteros:
			cin>>*(elemento+i); //esto es igual a cin>>elemento[i];
	}
}

void ordenar(int *elemento,int elementos){
	int aux;
	for(int i=0;i<elementos;i++){
		for(int j=0;j<elementos;j++){
				if(*(elemento+j)>*(elemento+j+1)){
					aux=*(elemento+j);
					*(elemento+j)=*(elemento+j+1);
					*(elemento+j+1)=aux;
				}
		}			
	}
}

void mostar(int *elemento,int elementos){
	for(int i=0;i<elementos;i++){
		cout<<" "<<*(elemento+i);
	}
}





