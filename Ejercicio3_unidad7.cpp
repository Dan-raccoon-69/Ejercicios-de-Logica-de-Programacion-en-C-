#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void cadenasIguales(const std::string& cadena1,const std::string& cadena2);
/* Usuario ingresa 2 cadenas,indica si son iguales, 
en caso de no serlo, indicar cual es mayor alfabeticamente */

void cadenasIguales(const std::string& cadena1,const std::string& cadena2){
	if(cadena1 == cadena2){
		cout<<"\n Las cadenas son iguales."<<endl;
	}
	else if(cadena1 > cadena2){
		cout<<"\n La cadena 1 es mayor alfabeticamente: "<<cadena1;
	}
	else cout<<"\n La cadena 2 es mayor alfabeticamente: "<<cadena2;
}
main(){
	std::string cadena1 = "arbol";
	std::string cadena2 = "azul";
	cadenasIguales(cadena1,cadena2);
} 
