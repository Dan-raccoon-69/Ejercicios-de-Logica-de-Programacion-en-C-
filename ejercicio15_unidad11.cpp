#include<iostream>
#include<conio.h>
using namespace std;

void pedirdatos();
void simetrica(int m[][100],int,int);
void matriz_traspuesta(int m[][100],int,int);

int matriz[100][100],filas,columnas;

main(){
	
	pedirdatos();
	if(filas==columnas){
	matriz_traspuesta(matriz,filas,columnas);	
	}
	simetrica(matriz,filas,columnas);
	
	getch();
}

void pedirdatos(){
	cout<<" Numero de filas: "; cin>>filas;
	cout<<" Numero de columnas: "; cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" Ingresa el dato: "<<i<<j<<": "; cin>>matriz[i][j];
		}
	}	
}
void matriz_traspuesta(int m[][100],int filas,int columnas){
	cout<<" Mostrando matriz: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<m[j][i];
		}cout<<"\n";
	}
}
void simetrica(int m[][100],int,int){

	int contador=0;
			if(filas==columnas){		
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(matriz[i][j] == matriz[j][i]){
				contador++;	
				}
			}
		}	
	}
	if(contador==(filas*columnas)){
  cout<<"\n La matriz digitada ES simetrica."<<endl;
     }else{
      cout<<"\n La matriz digitada NO es simetrica.";
  }
}
