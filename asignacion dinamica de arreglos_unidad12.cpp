/*ASIGNACION DINAMICA DE ARREGLOS (solo utilizar el espacio requerido para cada arreglo)
new= reserva el numero de bytes solicitado por la declaracion
delete= libera un bloque de bytes reservado con anterioridad
//pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/
#include<iostream>
#include<conio.h>
//para usar la funcion new y delete se usa la libreria stdlib.h
#include<stdlib.h>
using namespace std;
//declaracion de funciones
void pedirdatos();
void mostrardatos();
//variables globales
int ncalificaciones,*calificaciones;

main (){
	pedirdatos();
	mostrardatos();
	//en arreglos dinamicos se usan punteros y se necesita escribir el delete al finalizar el programa
	// liberar el espacio en bytes utilizados en arreglo dinamicos
	delete[] calificaciones;
	getch();
}

void pedirdatos(){
	cout<<" Ingresa el numero de calificaciones: "; cin>>ncalificaciones;
	//es int porque es un dato "ncalificaciones" numerico
	calificaciones= new int[ncalificaciones];//creacion del arreglo
			
	for(int i=0;i<ncalificaciones;i++){
		cout<<" Ingresa el dato "<<i+1<<" : "; cin>>calificaciones[i];
	}		
}
void mostrardatos(){
	cout<<" Tus datos son: "<<endl;
	for(int i=0;i<ncalificaciones;i++){
	cout<<" "<<calificaciones[i]<<endl;
	}	
}

