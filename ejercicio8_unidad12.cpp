//Realize un programa que calcule la suma de dos matrices dinamicas
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirdatos();
void suma(int **,int **,int,int);
void imprimirsuma(int **,int,int);

int **matriz1,**matriz2,filas,columnas;

main (){
	pedirdatos();
 	suma(matriz1,matriz2,filas,columnas);
 	imprimirsuma(matriz1,filas,columnas);
 	
 	//matriz1
 	//liberando para las COLUMNAS 
	for(int i=0;i<filas;i++){
		delete [] matriz1[i];
	}
	//liberando para las FILAS 
	delete [] matriz1;
	
	//matriz2
	for(int i=0;i<filas;i++){
		delete [] matriz2[i];
	}
	delete [] matriz2;
	
	getch();
}

void pedirdatos(){
	//1era
	cout<<" Primer matriz"<<endl;
	cout<<" Ingresa el num de filas: "; cin>>filas;
	cout<<" Ingresa el num de columnas: "; cin>>columnas;
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
	
	//2da
	cout<<"\n Segunda matriz"<<endl;
	matriz2=new int *[filas];
	for(int i=0;i<filas;i++){
		matriz2[i]= new int [columnas];
		//reservando memoria para las columnas, hay un ciclo porque tiene que pasar en cada columna 
	}
	//pidiendo datos
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" Ingresa el dato "<<i+1<<" "<<j+1<<" : ";
			cin>>*(*(matriz2+i)+j); //sintaxis para ingresar matriz con punteros
		}
	}
}

void suma(int **matriz1,int **matriz2,int filas,int columnas){
	cout<<"\n Suma"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			*(*(matriz1+i)+j)=*(*(matriz1+i)+j)+*(*(matriz2+i)+j);
		}
	}
}

void imprimirsuma(int **matriz1,int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<*(*(matriz1+i)+j);
		}
		cout<<"\n";
	}
	
}
