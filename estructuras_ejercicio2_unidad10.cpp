/* hacer una estructura llamada alumno, en la cual se tendran los sig campos: nombre,edad,promedio
pedir 3 datos al usuario para los alumnos, comprobar cual de los 3 tiene mejor promedio 
e imprimir los datos del usuario */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct{
	char nombre[50];
	int edad;
	float promedio;
}alumno[3];

main (){
	int c,posicion;
	float mayor=0;
	for(c=1;c<=3;c++){
	fflush(stdin);
	cout<<"\n Escribe tu nombre completo comenzando por apellidos: "; cin.getline(alumno[c].nombre,50,'\n');
	cout<<" Escribe tu edad: "; cin>>alumno[c].edad;
	cout<<" Escribe tu promedio: "; cin>>alumno[c].promedio;
	if(alumno[c].promedio>mayor){
		mayor=alumno[c].promedio;
		posicion=c;
	}
	}
	//imprimiendo
	system("cls");
	cout<<"\n Tus datos son: "<<endl;
	
	cout<<"\n Su nombre es: "<<alumno[posicion].nombre<<endl;
	cout<<" Su edad es: "<<alumno[posicion].edad<<endl;	
	getch();
}
