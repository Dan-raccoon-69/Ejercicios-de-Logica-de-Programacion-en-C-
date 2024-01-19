/* Escriba una funcion llamada mult() que acepte 2 numeros en punto flotante como parametros, multiplique 
estos 2 numeros y despliegue el resultado */
#include<iostream>
#include<conio.h>
using namespace std;
//declarcion
float mult(float x,float y);
//main
main(){
	float x,y;
	cout<<" 1er num: "; cin>>x;
	cout<<" 2do num: "; cin>>y;
	cout<<"\n Resultado es: "<<mult(x,y);	
	getch();
}
//funcion
float mult(float x,float y){
	float resultado;
	resultado=x*y;
	return resultado;
}

