/*realize un rpograma que pida al usuario agregar el nombre o direccion de un fichero de texto y, 
a continuacion añada texto en el hasta que el usuario lo decida */
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void agregar();

main (){
	agregar();
	system("pause");
}

void agregar(){
	ofstream archivo;
	string nombre,texto;
	char opcion;
	cout<<" Ingrese el nombre del archivo o la direccion URL: ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::app);
	
	if(archivo.fail()){
		cout<<" ERROR"<<endl;
		cout<<" No se encuentra el archivo o esta mal escrito.";
		exit(1);
	}
	do{
		fflush(stdin);
	cout<<" Ingresa el texto a agregar: ";
	getline(cin,texto);
	archivo<<texto<<endl;
	cout<<"\n Deseas agregar mas texto(si=s,no=cualquier otra letra): ";
	cin>>opcion;	
	}while(opcion=='S' || opcion=='s');	
	archivo.close();
}
