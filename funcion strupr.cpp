#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*funcion strupr(); */
main(){
	char cadena[50];
	cout<<" Ingresa la cadena: "; cin.getline(cadena,50,'\n');
	strupr(cadena);
	cout<<" "<<cadena;
	getch();
}
