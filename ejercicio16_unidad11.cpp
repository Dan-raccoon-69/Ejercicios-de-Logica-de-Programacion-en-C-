#include<iostream>
#include<conio.h>
using namespace std;

void pedirdatos();
void imprimir(int matriz[][100],int,int);
void menor(int matriz[][100],int,int);

//void matriz_traspuesta(int m[][100],int,int);

int matriz[100][100],filas,columnas,buscar;
main(){
	
	pedirdatos();
	imprimir(matriz,filas,columnas);
	menor(matriz,filas,columnas);
	
	getch();
}

void pedirdatos(){
	cout<<" Numero de filas: "; cin>>filas;
	cout<<" Numero de columnas: "; cin>>columnas;
	cout<<" Numero de fila a buscar (0,1,2...): "; cin>>buscar;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" Ingresa el dato: "<<i<<j<<": "; cin>>matriz[i][j];
		}
	}	
}
void imprimir(int matriz[][100],int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<matriz[i][j];
		}cout<<"\n";
	}
}
void menor(int matriz[][100],int,int){
	int menor=9999;
	
	/* mi forma:
	
	if(buscar==1){
	for(int i=0;i<buscar;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
			 if(matriz[i][j]<menor){
				menor=matriz[i][j];
			} 
			
		}
	}	
	}
	else 
	if(buscar==2){
	for(int i=1;i<buscar;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
			 if(matriz[i][j]<menor){
				menor=matriz[i][j];
			} 
			
		}
	}	
	}
	else if(buscar==3){
	for(int i=2;i<buscar;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
			} 
			
		}
	}	
	}
	cout<<" Menor es: "<<menor;
	*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			 if(i==buscar){
				if(matriz[i][j]<menor){
					menor=matriz[i][j];
				}
		} 	
	}
	}
	cout<<" MENOR ES: "<<menor;
}
