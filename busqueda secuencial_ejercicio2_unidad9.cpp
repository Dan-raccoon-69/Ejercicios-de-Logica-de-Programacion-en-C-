#include<iostream>
#include<conio.h>
using namespace std;
//busqueda secuencial en una matriz
main(){
	int cadena[20][20],where [20][20];
	int busca;
	int f,filas,columnas,c;
	char band='F';
	cout<<"\n Ingresa el numero de filas: "; cin>>filas;
	cout<<"\n Ingresa el numero de columnas: "; cin>>columnas;
	
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		cout<<" Ingresa el valor "<<f<<c<<": "; cin>>cadena[f][c];		
		}	
	}
	
	cout<<"\n Tu arreglo es: "<<endl;
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		cout<<" "<<cadena[f][c];		
		}cout<<"\n";	
	}
	cout<<"\n Que numero deseas buscar?: ";cin>>busca;
	
	/*
	i=0;
	while((band=='F')&&(i<columnas*filas)){
		if(cadena[i] == busca){
		band='V';
		}
		i++;	
	}
	cout<<"\n";
	if(band=='V'){
		cout<<"\n Si existe el numero en el arreglo, en la posicion " << i;
	}
	else 
	cout<<"\n NO existe el numero en el arreglo, F";
	*/
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		if(cadena[f][c]==busca){
			band='V';
		}	
		}	
	}
	if(band=='V'){
		cout<<"\n Si existe el numero en el arreglo en la posicion: ";
	}
	else 
	cout<<"\n NO existe el numero en el arreglo, F";
		
	
	getch();
}
