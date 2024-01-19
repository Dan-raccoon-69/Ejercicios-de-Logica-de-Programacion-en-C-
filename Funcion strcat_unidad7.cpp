#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*funcion strcat()*/
main(){
	char cadena1[]=" Hola,";
	char cadena2[]=" soy Daniel Gustavo";
	char cadena3[50];
	
	//1era forma
	strcpy(cadena3,cadena1);
	strcat(cadena3,cadena2);
	cout<<cadena3;
	
	//2da forma
	//cout<<strcat(cadena1,cadena2);
	getch();
}
