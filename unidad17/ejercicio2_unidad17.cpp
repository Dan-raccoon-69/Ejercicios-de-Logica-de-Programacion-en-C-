/*realize un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, 
a continuacion muestre el fichero */
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void mostrar();

main (){
	mostrar();		
	system("pause");
}

void mostrar(){
	string nombre,texto;
	ifstream archivo;
	cout<<" Ingresa el nombre del archivo o la direccion URL: ";
	getline(cin,nombre);
	
	archivo.open(nombre.c_str(),ios::in);
	if(archivo.fail()){
		cout<<" Error."<<endl;
		cout<<" Tu programa no existe o no colocaste el nombre correcto.";
		exit(1);
	}
	cout<<"\n Mostrando archivo: "<<endl;
	cout<<"\n";
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
}


