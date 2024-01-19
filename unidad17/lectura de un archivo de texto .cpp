#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void leer();


main (){
	leer();	
	system("pause");
}

void leer(){
	ifstream archivo;
	string texto;
	archivo.open("ejercicio1.txt",ios::in);
	if(archivo.fail()){
		cout<<" Error al abrir el documento"<<endl;
		cout<<" El documento no existe";
		exit(1);
	}
	while(!archivo.eof()){ //mientras no sea el final del archivo, va recorrer el archivo 
		getline(archivo,texto);//copea todo dentro de archivo a texto
		cout<<texto<<endl;
	}
	archivo.close();
}

