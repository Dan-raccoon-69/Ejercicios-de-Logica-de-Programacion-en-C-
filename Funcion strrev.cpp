#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*programa que determina si una palabra es capicua-polindroma*/
main(){
	char cadena[50];
	cout<<" Ingresa la cadena: ";
	cin.getline(cadena,50,'\n');
	cout<<"\n Tu cadena es: "<<cadena<<endl;
	strrev(cadena);
	cout<<" Tu cadena invertida es: "<<cadena<<endl;
	getch();
}
