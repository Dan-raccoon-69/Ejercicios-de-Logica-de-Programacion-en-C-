#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct datos{
	char domicilio[50];
	char ciudad[50];
	char pais [50];
};

struct personas{
char nombre[50];
int edad;
float altura;
struct datos datos_personas;
}persona[2];

main (){
int c;
for(c=1;c<3;c++){
		cout<<"\n Escribe el nombre de la persona "<<c<<": " ; 
		cin.getline(persona[c].nombre,50,'\n');
		cout<<" Escribe la edad de la persona "<<c<<": " ;
		cin>>persona[c].edad;
		cout<<" Escribe la altura de la persona "<<c<<": " ;
		cin>>persona[c].altura;
		fflush(stdin);
		cout<<" Escribe el domicilio de la persona "<<c<<": " ; 
		cin.getline(persona[c].datos_personas.domicilio,50,'\n');
		cout<<" Escribe la ciudad de origen de la persona "<<c<<": " ; 
		cin.getline(persona[c].datos_personas.ciudad,50,'\n');
		cout<<" Escribe el pais de la persona "<<c<<": " ; 
		cin.getline(persona[c].datos_personas.pais,50,'\n');
}
	system("cls");
	cout<<"\n Imprimiendo datos: "<<endl;
	
	for(c=1;c<3;c++){
		fflush(stdin);
		cout<<"\n El nombre de la persona "<<c<< " es : "; cout<<persona[c].nombre<<endl;
		cout<<" La edad de la persona "<<c<< " es : "; cout<<persona[c].edad<<endl;
		cout<<" La altura de la persona "<<c<< " es : "; cout<<persona[c].altura<<endl;	
		cout<<" El domicilio de la persona "<<c<< " es : "; cout<<persona[c].datos_personas.domicilio<<endl;	
		cout<<" La ciudad de la persona "<<c<< " es : "; cout<<persona[c].datos_personas.ciudad<<endl;	
		cout<<" El pais de la persona "<<c<< " es : "; cout<<persona[c].datos_personas.pais<<endl;	
	cout<<"\n";
	}
		
		

	getch();
}
