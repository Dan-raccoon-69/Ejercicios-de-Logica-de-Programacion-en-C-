/*Escriba un programa que devuelva la parte frcaccionaria de cualquier numero introducido por el usuario.
por ejemplo, si se introduce el numero 256.879, debera desplegar el numero 0.879 */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedir_dato();
double fraccion(double y);
double y,resul;

main (){
	pedir_dato();
	fraccion(y);
	cout<<" Parte decimal: "<<resul;
	getch();
}

void pedir_dato(){
cout<<" Escribe el valor: "; cin>>y;	
}

double fraccion(double y){
	int x;
	x=y;
	resul=y-x;
	return resul;
}
