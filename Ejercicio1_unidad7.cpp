#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/* el usuario digita una cadena de caracteres, verifica la longitud y si supera los 10 caracteres 
mostrarla en pantalla , caso contrario no mostrarla*/
main(){
	char cadena[50];
	int longitud=0;
	
	cout<<" Ingresa la cadena de caracteres: "; cin.getline(cadena,50,'\n');
	longitud=strlen(cadena);
	if(longitud>10){
		cout<<"\n La cadena es: "<<cadena;
	}else{
		cout<<"\n Cadena sin mostar";
	}
	getch();
}
