#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
/* hacer matriz preguntando al usuario cuantas filas columnas quiere, llenarla de numeros aleatorios, copiarla
a otra matriz y mostrarla en pantalla*/
main(){
	int matriz1[10][10];
	int matriz2[10][10];
	int filas,columnas,f,c;
	//preguntando al usuario
	cout<<" Ingrese el numero de filas: "; cin>>filas;
	cout<<" Ingrese el numero de columnas: ";cin>>columnas;
	//genera diferentes numeros aleatorios
	srand(time(NULL));
	//generando la matriz 1 con aleatorios
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
			matriz1[f][c]=1+rand()%(100);
		}
	}
	//imprimiendo la matriz 1
	cout<<"\n Matriz 1:"<<endl;
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
			cout<<" "<<matriz1[f][c];
		}cout<<"\n";
	}
	//copiando datos de matriz 1 a matriz 2
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
			matriz2[f][c]=matriz1[f][c];
		}cout<<"\n";
	}
	//imprimiendo matriz 2
	cout<<" Matriz 2:"<<endl;
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
			cout<<" "<<matriz2[f][c];
		}cout<<"\n";
	}
	getch();
}
