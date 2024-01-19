/*CONSTRUIR UN PROGRAMA PARA UNA COMPETENCIA DE ATLETISMO, EL PROGRAMA DEBE GESTIONAR UNA SERIE DE ATLETAS 
CARACTERIZADOS POR SU NUMERO DE ATLETA, NOMBRE Y TIEMPO DE CARRERA, AL FINAL DEL PROGRAMA DEBE MOSTRAR LOS DATOS 
DEL ATLETA GANADOR DE LA CARRERA */
#include <iostream>
#include <stdlib.h>
using namespace std;
#include"Atleta.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
Atleta* competidores;
int num,numeroatle,posicion;
float tiempo,menor=999999;
string nombre;

cout<<" Ingresa el numero de competidores a registrar: "; cin>>num;

competidores = new Atleta[num];
for(int i=0;i<num;i++){
	fflush(stdin);
	cout<<"\n Datos del Atleta: "<<i+1;
 	cout<<" \n Ingrese su ID : ";
	cin>>numeroatle;
	fflush(stdin);	
	cout<<" Ingrese su Nombre : ";
	getline(cin,nombre);
		fflush(stdin);
	cout<<" Ingrese su tiempo : ";
	cin>>tiempo;
		fflush(stdin);
	competidores[i]= Atleta(numeroatle,nombre,tiempo);
	if(competidores[i].gettiempo()<menor){
		menor=competidores[i].gettiempo();
		posicion=i;
	}
		fflush(stdin);
}
	fflush(stdin);
(competidores+posicion)->mostrar();

	return 0;
}
