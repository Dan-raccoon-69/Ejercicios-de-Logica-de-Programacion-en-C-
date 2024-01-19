//elevar los elementos de una matriz al cuadrado
#include<iostream>
#include<conio.h>

using namespace std;

//siempre se pone el tamaño en la columna"3"
void mostrarmatriz(int m[][3],int,int);
void cuadrado(int m[][3],int,int);	
void mostrar_cuadrado(int m[][3],int,int);

main(){
	const int filas=2;
	const int columnas=3;
	int m[filas][columnas]={{1,2,3},{4,5,6}};
		
	mostrarmatriz(m,filas,columnas);
	cuadrado(m,filas,columnas);
	mostrar_cuadrado(m,filas,columnas);
	
	getch();
}

void mostrarmatriz(int m[][3],int filas,int columnas){
	cout<<" Mostrando matriz: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<m[i][j];
		}cout<<"\n";
	}
}

void cuadrado(int m[][3],int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			m[i][j]*=m[i][j];
		}
	}
}

void mostrar_cuadrado(int m[][3],int filas,int columnas){
	cout<<" Al cuadrado es: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<m[i][j];
		}cout<<"\n";
	}
}
