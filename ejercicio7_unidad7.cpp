#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*pedir nombre en mayuscula, si el nombre comienza por la A, convertir su nombre a minusculas , de no serlo
no convertirno*/
main(){
	char nombre[50],nombre2[50];
	cout<<" Ingresa tu nombre: "; cin.getline(nombre,50,'\n');
	
	if(strncmp(nombre,"A",1)==0){
		strlwr(nombre);
		cout<<"\n Tu nombre es: "<<nombre;
	}
	else 
	cout<<"\n Tu nombre no puede convertirse.";
	
	getch();
}
