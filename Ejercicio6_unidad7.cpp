#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*convertir 2 cadenas de minusculas a mayusculas, compararlas, y decir si son iguales o no; */
main(){
	char cadena[50],cadena2[50];
	cout<<" Ingresa la cadena 1: "; cin.getline(cadena,50,'\n');
	cout<<" Ingresa la cadena 2 : "; cin.getline(cadena2,50,'\n');
	strupr(cadena);
	strupr(cadena2);
	cout<<"\n La cadena 1 es: "<<cadena<<endl;
	cout<<" La cadena 2 es: "<<cadena2<<endl;
	if(strcmp(cadena2,cadena)==0){
	cout<<"\n Las cadenas son iguales. ";
	}else 
	cout<<"\n Las cadenas NO son iguales. ";
	getch();
}
