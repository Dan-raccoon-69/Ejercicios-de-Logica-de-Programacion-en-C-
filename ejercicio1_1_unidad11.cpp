/* Escriba una funcion llamada mult() que acepte 2 numeros en punto flotante como parametros, multiplique 
estos 2 numeros y despliegue el resultado */
#include<iostream>
#include<conio.h>
using namespace std;
//declarcion
void pedir_datos();
void mult(float x,float y);
//variables globales para que todo el programa las use 
float x,y;
//main
main(){
	pedir_datos();
	mult(x,y);
	getch();
}
//funcion
void pedir_datos(){
	cout<<" 1er num: "; cin>>x;
	cout<<" 2do num: "; cin>>y;	
}
	
void mult(float x,float y){
	float resultado;
	resultado=x*y;
	cout<<" Resultado es: "<<resultado;
}

