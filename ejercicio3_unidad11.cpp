/*Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia
en numero entero positivo y depliegeue el resultado.
el numero entero positivo debera ser el segundo valor transmitido a la funcion. */
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void pedir_dat();
void funpot(int x,int y);
int x,y;

main (){
	pedir_dat();
	funpot(x,y);
	getch();
}

void pedir_dat(){
	cout<<" Escribe la base: "; cin>>x;
	cout<<" Escribe el exponente: "; cin>>y;
} 
/*

//forma pow
void funpot(int x,int y){
	int potencia=pow(x,y);
	cout<<" El resultado es: "<<potencia;
}

*/

//forma con bucle
//x=2; y=3;
void funpot(int x,int y){
int potencia=1;
for(int c=1;c<=y;c++){
	potencia=potencia*x;
}	
cout<<" Resultado es: "<<potencia;	
}


