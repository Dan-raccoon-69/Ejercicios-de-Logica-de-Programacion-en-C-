#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
/*funcion atoi, funcion atof */
main (){
	char cadena[]="55";
	char cadena2[]="155.55";
	int numero;
	float numero2;
	numero=atoi(cadena);
	numero2=atof(cadena2);
	cout<<"\n Tu numero es: "<<numero<<endl;
	cout<<"\n Tu numero 2 es: "<<numero2;
	getch();
}
