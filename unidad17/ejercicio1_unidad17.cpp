/*reañlize un programa que pida al usuario el nombre de un archivo-fichero de texto y a continuacion permita 
almacenar al usuario tantas frases como el usuario desee */
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void creacionarchivo();

main (){
 	creacionarchivo();	
	system("pause");
}


void creacionarchivo(){
	ofstream archivo;
	string nombre,texto;
	char opcion;
	//en archivos para pedir nombre usaras string y getline(cin,variable_almacenar);
	cout<<" Ingresa el nombre del archivo: ";
	getline(cin,nombre);
	//creando
	archivo.open(nombre.c_str(),ios::out);
	//si hay error
	if(archivo.fail()){
		cout<<" Error al crear archivo.";
	}
	//agregando texto
	do{
		fflush(stdin);
	cout<<" Ingresa texto: ";
	getline(cin,texto);
	archivo<<texto<<endl;
	cout<<"\n Quieres volver a ingresar texto(si=s,no=cualquier letra): ";
	cin>>opcion;
	}while(opcion=='S' || opcion=='s');
	//cerrando archivo
	archivo.close();
	
}

