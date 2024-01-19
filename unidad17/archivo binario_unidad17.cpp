#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;

struct registro{
	char nombre [30];
	char apellido [30];
}persona;

void escribir();
void leer();

main (){
	
	escribir();
	leer();
	getch();
}

void escribir(){
	ofstream archivob;
	if(archivob.fail()){
		cout<<" Error al abrir archivo.";
		exit(1);
	}
	
	archivob.open("archivo_binario.dat",ios ::out | ios::binary);
	cout<<"Escribe tu nombre: "; cin.getline(persona.nombre,30,'\n');
	cout<<"Escribe tu apellido: "; cin.getline(persona.apellido,30,'\n');
	
	archivob.write((char *)&persona,sizeof(registro));
	archivob.close();
}

void leer(){
	ifstream archivob;
	archivob.open("archivo_binario.dat",ios::in | ios::binary);
	
	if(archivob.fail()){
	cout<<" No se puede abrir el archivo.";
	exit(1);
	}
	//leer el archivo
	archivob.read((char *)&persona,sizeof(registro));
	cout<<"\n Mostrando los datos leidos: "<<endl;
	cout<<" Nombre: "<<persona.nombre<<endl;
	cout<<" Apellido: "<<persona.apellido<<endl;
	archivob.close();
	
}
	
