/* hacer una estructura llamada corredor, en la cual se tendran los sig campos: nombre,edad,sexo,club,pedir
datos al usuario para un corredor y asi una categoria de competicion:
-juvenil <=18 años
- señor <=40 años
-veterano >40 años 
posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct corredor{
	char nombre[50];
	int edad;
	char sexo[50];
	char club[50];
}persona1;

main(){
	cout<<"\n Escribe tu nombre completo comenzando por apellidos: "; cin.getline(persona1.nombre,50,'\n');
	cout<<" Escribe tu edad: "; cin>>persona1.edad;
	fflush(stdin);
	cout<<" Escribe tu sexo: ";cin.getline(persona1.sexo,50,'\n');
	cout<<" Escribe tu club: ";cin.getline(persona1.club,50,'\n');
	
	system("cls");
	cout<<"\n Tus datos son: "<<endl;
	cout<<" Tu nombre es: "<<persona1.nombre<<endl;
	cout<<" Tu edad es: "<<persona1.edad<<endl;
	cout<<" Tu sexo es: "<<persona1.sexo<<endl;
	cout<<" Tu club es: "<<persona1.club<<endl;
	if(persona1.edad<=18){
	cout<<" Tu categoria es: juvenil (6-18 anios)."<<endl;
	}
	else if(persona1.edad>18 && persona1.edad<=40){
	cout<<" Tu categoria es: Senior (19-40 anios)."<<endl;
	}
	else cout<<" Tu categoria es: Veterano (40 anios en adelante.)"<<endl;
	
	getch();
}
