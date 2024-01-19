#include<iostream>
#include<conio.h>
#include<string.h>
/*pedir una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia 
otro arreglo de caracteres */
using namespace std;
main(){
	char cadena[50],cadena2[50];
	cout<<" Ingrese la cadena: ";
	cin.getline(cadena,50,'\n');
	strcpy(cadena2,cadena);//guardando
	cout<<"\n La cadena 1 es: "<<cadena<<endl;
	cout<<" La cadena 2 es: "<<cadena2;
	
	getch();
}
