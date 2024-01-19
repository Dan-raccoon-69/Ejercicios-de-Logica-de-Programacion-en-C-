#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*crear cadena1 que diga "Hola que tal ", crear otra cadena2 que diga "Cual es tu nombre?" 
por ultimo añadir el nombre al final de la cadena1  y mostrar el mensaje completo "Hola que tal (nombredelusuario)"*/
main(){
	char cadena1[]=" Hola que tal, ";
	char cadena2[]="cual es tu nombre?: ";
	char cadena3[50];
	char nombre[50];
	strcpy(cadena3,cadena1);
	cout<<strcat(cadena3,cadena2);
	cin.getline(nombre,50,'\n');
	
	strcat(cadena1,nombre);
	cout<<cadena1;
	
	getch();
}
