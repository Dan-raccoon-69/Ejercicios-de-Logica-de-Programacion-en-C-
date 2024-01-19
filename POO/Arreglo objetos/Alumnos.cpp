#include "Alumnos.h"
#include <iostream>
using namespace std;

void Alumnos::pedirdatos(){
	cout<<" Ingresa la calificacion de Matematicas: "; cin>>calMate;
	cout<<" Ingresa la calificacion de Programación: "; cin>>calProgra;
	cout<<"\n";
}

void Alumnos::mostrar(){
	cout<<" Calificacion en Matematicas: "<<calMate<<endl;
	cout<<" Calificacion en Programacion: "<<calProgra<<endl;
	cout<<" Promedio: "<<(calMate+calProgra)/2;
	cout<<"\n";
}
