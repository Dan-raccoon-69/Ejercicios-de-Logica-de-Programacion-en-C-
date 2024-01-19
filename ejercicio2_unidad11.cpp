/*escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue
el resultado. la funcion debera ser capaz de elevar al cuadrado numeros flotantes. */
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//declaracion
void pedir_Dato();
void al_cuadrado(float x);
float x;
//main
main (){
	pedir_Dato();
	al_cuadrado(x);
	getch();
}

//funcion
void pedir_Dato(){
	cout<<" Escribe el num: "; cin>>x;
}
void al_cuadrado(float x){
	float cuadrado=pow(x,2);
	cout<<" Resultado es: "<<cuadrado;
}

