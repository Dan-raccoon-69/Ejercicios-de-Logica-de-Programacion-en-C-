/* Definir una clase llamada DiaAnio con los atributos mes y dia, los metodos igual() y visualizar ().
El mes se registrara como un valor entero (1,enero,2 febrero, etc.).
El dia del mes se registrara en otra variable entera de dia.
Escribir un programa que compruebe si una fecha es su cumpleaños.*/

#include <iostream>
#include<stdlib.h>
#include"DiaAnio_ejercicio1.h"

using namespace std;
main(int argc, char** argv) {
	int d,m;
	DiaAnio_ejercicio1* hoy;
	DiaAnio_ejercicio1* cumple;
	
	cout<<" Ingresa el dia de hoy: "; cin>>d;
	cout<<" Ingresa el mes de hoy: "; cin>>m;
	hoy = new DiaAnio_ejercicio1(d,m);
	
	cout<<" Ingresa el dia de tu cumpleanios: "; cin>>d;
	cout<<" Ingresa el mes de tu cumpleanios: "; cin>>m;
	cumple = new DiaAnio_ejercicio1(d,m);
	//mostrando fechas
	hoy->visualizar();
	cumple->visualizar();
	
	
	if(hoy->igual(*cumple)){ 
		cout<<"\n Feliz cumpleaños bb."<<endl;
	}
	else {
		cout<<"\n Que tengas un buen dia bb."<<endl;
	}
	system("pause");
}
