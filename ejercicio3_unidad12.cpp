/* rellenar un array de 10 numeros , posteriormente utilizando punteros indicar 
cuales son numeros pares y su posicion en memoria */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main (){
	int numeros[10],i;
	int *dir_numeros;
	//rellenando
	for(i=0;i<10;i++){
		cout<<" Ingresa el valor "<<i+1<<" : "; cin>>numeros[i];
	}
	system("cls");
	//par o impar
	
	dir_numeros=&numeros[0];
	cout<<" Tu arreglo es: "<<endl;
	for(i=0;i<10;i++){
			cout<<" "<<*dir_numeros++;
	}
	cout<<"\n ";
	dir_numeros=&numeros[0];
	for(i=0;i<10;i++){
		if(*dir_numeros%2==0){
			cout<<" El numero "<<*dir_numeros<<" es par."<<endl;
			cout<<" Direccion almacenada: "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}
	
	getch();
}
