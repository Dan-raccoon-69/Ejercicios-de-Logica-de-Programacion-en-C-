/*Pedir su nombre al usuario y devolver el numero de vocales que hay. Debes utilizar punteros.*/ 
#include<iostream>
#include<conio.h>
using namespace std;

void pedirnombre();
void vocales(char *,int);
const int tamanio=100;
char nombre[tamanio];

main (){
	pedirnombre();
	vocales(nombre,tamanio);
	
	getch();
}

void pedirnombre(){
	cout<<" Ingresa tu nombre: "; cin.getline(nombre,100,'\n');
}

void vocales(char *c_nombre,int tamanio){
	//c_nombre=&c_nombre[0];
	int a=0,e=0,i=0,o=0,u=0,total=0;
	for(int j=0;j<=tamanio;j++){
		switch (*(c_nombre+j)){
			case 'a':
				a++;
				break;
			case 'e':
				e++;
				break;
			case 'i':
				i++;
				break;
			case 'o':
				o++;
				break;	
			case 'u':
				u++;
				break;	
		}
		total=a+e+i+o+u;
	}
	cout<<" Total de vocales son: "<<total<<endl;
	cout<<" Total de vocales a: "<<a<<endl;
	cout<<" Total de vocales e: "<<e<<endl;
	cout<<" Total de vocales i: "<<i<<endl;
	cout<<" Total de vocales o: "<<o<<endl;
	cout<<" Total de vocales u: "<<u<<endl;
}












