/*Escriba una plantilla de funcion llamada despliegue () que despliegue el valor del agrgumento unico 
que se le trasnmite cuando la funcion es invocada */
#include<iostream>
#include<conio.h>
using namespace std;

template <class dato>
void despliegue(dato caracter);

main(){
	int x=5;	float y=5.53;
	double z=52.333333;		char a='a';
	despliegue(x);	
	despliegue(y);	
	despliegue(z);	
	despliegue(a);	
	getch();
}

template <class dato>
void despliegue(dato caracter){
	cout<<" Tu numero es: "<<caracter<<endl;
}
