#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
/*pedir 2 cadenas de caracteres numericos, uno entero y uno flotante, convertirlos a sus respectivos 
valores y por ultimo sumarlos*/
main (){
	char cadena1[50],cadena2[50];
	int numero; float numero2,suma;
	cout<<"\n Escribe el valor entero: "; cin.getline(cadena1,50,'\n');
	cout<<"\n Escribe el valor decimal: "; cin.getline(cadena2,50,'\n');
	//transformacion de cadena a numero
	numero=atoi(cadena1);
	numero2=atof(cadena2);
	suma=numero+numero2;
	cout<<"\n Tus numeros son: "<<numero<<","<<numero2<<endl;
	cout<<"\n El resultado es: "<<suma;
	getch();
}
