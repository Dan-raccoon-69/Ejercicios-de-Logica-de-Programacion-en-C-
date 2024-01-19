#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;

void crear_archivo();

main (){
	crear_archivo();
	
	getch();
}

void crear_archivo(){
	string nombrearchivo,texto;
	//declarando la variables para crear el archivo 
	ofstream archivo;
	//para pedir el nombre del archivo al usuario
	cout<<" Ingresa el nombre del archivo: ";
	getline(cin,nombrearchivo);
	//abriendo archivo - creando
	archivo.open(nombrearchivo.c_str(),ios::out);
	//ios::out es para crear o remplazar
	//por si no abre el archivo
	if(archivo.fail()){
		cout<<" NO SE PUEDE ABRIR EL ARCHIVO";
		exit(1);
	}
	//agregando texto
	cout<<" Ingresa texto: ";
	getline(cin,texto);
	archivo<<texto; 
	//cerrando archivo
	archivo.close();
	
	
		

}
