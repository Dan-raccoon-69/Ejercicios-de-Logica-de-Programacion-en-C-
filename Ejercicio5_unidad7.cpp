#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/*programa que determina si una palabra es capicua-polindroma*/
main(){
	char cadena[50];
	char cadena2[50];
	cout<<" Ingresa la cadena: ";
	cin.getline(cadena,50,'\n');
	//copiando
	strcpy(cadena2,cadena);
	//invirtiendo
	strrev(cadena2);
	//imprimiendo cadena,cadena2
	cout<<"\n Tu cadena es: "<<cadena<<endl;
	cout<<" Tu cadena invertida es: "<<cadena2<<endl;
	//comparando
	if(strcmp(cadena2,cadena)==0){
		cout<<"\n La palabra es capicua-polindroma";
	}else cout<<"\n La palabra NO es capicua-polindroma"; 
	getch();
}
