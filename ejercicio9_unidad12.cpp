//Realize un programa que calcule la suma de dos matrices dinamicas
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirdatos();
void imprimirtraspuesta (int **,int,int);

int **matriz1,filas,columnas;

main (){
	pedirdatos();
 	imprimirtraspuesta(matriz1,filas,columnas);
 	
 	//matriz1
 	//liberando para las COLUMNAS 
	for(int i=0;i<filas;i++){
		delete [] matriz1[i];
	}
	//liberando para las FILAS 
	delete [] matriz1;
	getch();
}

void pedirdatos(){
	//1era
	cout<<"\n Ingresa el num de filas: "; cin>>filas;
	cout<<" Ingresa el num de columnas: "; cin>>columnas;
	cout<<"\n";
	matriz1=new int *[filas];
	for(int i=0;i<filas;i++){
		matriz1[i]= new int [columnas];
		//reservando memoria para las columnas, hay un ciclo porque tiene que pasar en cada columna 
	}
	//pidiendo datos matriz 1
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" Ingresa el dato "<<i+1<<" "<<j+1<<" : ";
			cin>>*(*(matriz1+i)+j); //sintaxis para ingresar matriz con punteros
		}
	}
}	

void imprimirtraspuesta(int **matriz1,int filas,int columnas){
	cout<<"\n TRASPUESTA"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<*(*(matriz1+j)+i);
		}
		cout<<"\n";
	}
}
