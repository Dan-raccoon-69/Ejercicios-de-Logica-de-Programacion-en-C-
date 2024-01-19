/*Hacer un programa en c++, para guardar numeros telefonicos que muestre un menu con las siguientes opciones: 
1. crear (nombre,apellidos,telefono)
2. agregar mas contactos (nombre,apellidos,telefono)
3. visualizar contactos existentes
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;

void menu();
void creacion();
void agregar();
void mostrar();

int opcion,opcion2,opcion3;	
string nombre,apellido,telefono,directorio;
	
main (){
	menu();	
	system("pause");
}

void menu(){
do {
	system("cls");
	cout<<"\t MENU "<<endl;
		cout<<" 1. Crear directorio."<<endl;
		cout<<" 2. Agregar contacto a directorio."<<endl;
		cout<<" 3. Visualizar contactos existentes."<<endl;
		cout<<" 4. Salir."<<endl;
		cout<<" Ingresa la opcion: "; cin>>opcion;
		if(opcion <1 && opcion >4){
		cout<<endl<<" Opcion no valida."<<endl;
		cout<<" Regresar a menu si=1,no=0";
		cin>>opcion3;
		if(opcion3==1){
		menu();	
		}
		else {
			exit(1);
		}
		}
		system("cls");
		switch(opcion){
			case 1: 
			creacion();			
			break;
			case 2: 
			agregar();	
			break;
			case 3: 
			mostrar();			
			break;
			case 4: 
			exit(1);
			break;
		}
		cout<<endl<<" Regresar al menu si=1,no=0 : ";
		cin>>opcion2;
}while(opcion2==1);
}

void creacion(){
	ofstream archivo;
	cout<<" Ingresa el nombre del directorio: ";
	cin>>directorio;
	archivo.open(directorio.c_str(),ios::out);
	if(archivo.fail()){
		cout<<" Error al abrir archivo."<<endl;
		cout<<" Regresar a menu si=1,no=0";
		cin>>opcion3;
		if(opcion3==1){
		menu();	
		}
		else {
			exit(1);
		}
	}
	fflush(stdin);
	cout<<"\n";
	cout<<"Ingresa solo tu(s) Nombre(s): ";
	getline(cin,nombre);
	cout<<"Ingresa tus Apellidos: ";
	getline(cin,apellido);
	cout<<"Ingresa tu numero telefonico: ";
	getline(cin,telefono);
	cout<<"\n";
	archivo<<" Nombre: "<<nombre<<endl;
	archivo<<" Apellidos: "<<apellido<<endl;
	archivo<<" Telefono: "<<telefono<<endl<<endl;
	cout<<"\n";
	archivo.close();
}

void agregar(){
	ofstream archivo;
	cout<<" Ingresa el nombre del directorio a agregar: ";
	cin>>directorio;
	archivo.open(directorio.c_str(),ios::app);
	if(archivo.fail()){
		cout<<" Error al abrir archivo.";
		cout<<" Regresar a menu si=1,no=0";
		cin>>opcion3;
		if(opcion3==1){
		menu();	
		}
		else {
			exit(1);
		}
	}
	fflush(stdin);
	cout<<"\n";
	cout<<"Ingresa solo tu(s) Nombre(s): ";
	getline(cin,nombre);
	cout<<"Ingresa tus Apellidos: ";
	getline(cin,apellido);
	cout<<"Ingresa tu numero telefonico: ";
	getline(cin,telefono);
	cout<<"\n";
	archivo<<" Nombre: "<<nombre<<endl;
	archivo<<" Apellidos: "<<apellido<<endl;
	archivo<<" Telefono: "<<telefono<<endl<<endl;
	cout<<"\n";
	
	archivo.close();
}

void mostrar(){
	ifstream archivo;
	string texto;
	cout<<" Ingresa el nombre del directorio a mostar: ";
	cin>>directorio;
	archivo.open(directorio.c_str(),ios::in);
	
	 if(archivo.fail()){
		cout<<" Error al abrir el documento"<<endl;
		cout<<" El documento no existe"<<endl;
		cout<<" Regresar a menu si=1,no=0";
		cin>>opcion3;
		if(opcion3==1){
		menu();	
		}
		else {
			exit(1);
		}
	}
	cout<<"\n";
	while(!archivo.eof()){ //mientras no sea el final del archivo, va recorrer el archivo 
		getline(archivo,texto);//copea todo dentro de archivo a texto
		cout<<" "<<texto<<endl;
	}
	archivo.close();
}
