/* MATRICES DINAMICAS */
//Rellenar una matriz de NxM y mostrar su contenido

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirdatos();
void imprimir_matriz(int **,int,int);
int **matriz,filas,columnas;

main (){
	pedirdatos();
	imprimir_matriz(matriz,filas,columnas);
	//liberando para las COLUMNAS 
	for(int i=0;i<filas;i++){
		delete [] matriz[i];
	}
	//liberando para las FILAS 
	delete [] matriz;
	
	getch();
}

void pedirdatos(){
	cout<<" Numero de filas: "; cin>>filas;
	cout<<" Numero de columnas: "; cin>>columnas;
	
	//reservando memoria para la matriz dinamica 
	matriz= new int *[filas];//reservando memoria para las filas
	for(int i=0;i<filas;i++){
		matriz[i]= new int [columnas];
		//reservando memoria para las columnas, hay un ciclo porque tiene que pasar en cada columna 
	}
	//pidiendo datos
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" Ingresa el dato "<<i+1<<" "<<j+1<<" : ";
			cin>>*(*(matriz+i)+j); //sintaxis para ingresar matriz con punteros
		}
	}
}

void imprimir_matriz(int **matriz,int filas,int columnas){
	cout<<"\n Imprimiendo matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<*(*(matriz+i)+j);
		}
		cout<<"\n";
	}
}
