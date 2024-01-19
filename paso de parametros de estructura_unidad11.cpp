#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[50];
	int edad;	
}p1;

void pedirdatos();
//fucnion de estructura
//imprimiendo
void mostrarpersona(persona);


main (){
	pedirdatos();
	mostrarpersona(p1);
	getch();
}

void pedirdatos(){
	cout<<" Nombre: "; cin.getline(p1.nombre,50,'\n');
	cout<<" Edad: "; cin>>p1.edad;
}

void mostrarpersona(persona p1){
	cout<<"\n Nombre es: "<<p1.nombre<<endl;
	cout<<" Edad es: "<<p1.edad<<endl;
}
