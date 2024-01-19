#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//caracteres y funcion strlen();
main(){
	char palabra[]="Soy Daniel Gustavo";
	int longitud=0;
	longitud=strlen(palabra);
	char nombre[20];
	cout<<"\n Ingrese su nombre: "; 
	cin.getline(nombre,20,'\n');
	cout<<"\n Su nombre es: "<<nombre<<endl;
	cout<<"\n El texto: Soy Daniel Gustavo , tiene "<<longitud<<" elementos.";
	getch();
}
