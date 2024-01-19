//encontrar el mayor de 2 numeros
#include<iostream>
#include<conio.h>
using namespace std;
//prototipo o declaracion de variable
int mayor_num(int x, int y);
//funcion main
main(){
	int x,y;
	cout<<" Escribe el num 1: "; cin>>x;
	cout<<" Escribe el num 2: "; cin>>y;
	cout<<" El mayor es: "<<mayor_num(x,y);
	getch();
}

//funcion
int mayor_num(int x, int y){
	int mayor;
	if(x>y){
		mayor=x;
	}
	else mayor=y;
	return mayor;
}

