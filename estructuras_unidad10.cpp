#include<iostream>
#include<conio.h>
using namespace std;

struct personas{
char nombre[50];
int edad;
float altura;
}persona1;

main (){

		cout<<"\n Escribe el nombre de la persona: "; 
		cin.getline(persona1.nombre,50,'\n');
		cout<<" Escribe la edad de la persona: "; 
		cin>>persona1.edad;
		cout<<" Escribe la altura de la persona es: "; 
		cin>>persona1.altura;

	cout<<"\n Imprimiendo datos: "<<endl;
		cout<<"\n El nombre de la persona es : "; cout<<persona1.nombre<<endl;
		cout<<" La edad de la persona es : "; cout<<persona1.edad<<endl;
		cout<<" La altura de la persona es : "; cout<<persona1.altura;	
	

	getch();
}
