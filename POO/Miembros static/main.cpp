#include <iostream>
#include "Estatic.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Estatic* ob1 = new Estatic();
	Estatic* ob2 = new Estatic();
	
	cout<<" Contador: "<<ob1->getcontador();
	/* El contador sera 2, sin importar que el objeto sea diferente, porque si es STATIC YA NO LE PERTENECE A LOS OBJETOS
	LE PERTENECE A LA CLASE 
	se modifica para todos los objetos
	*/
	
	/*
	PARA LLAMAR A LOS METODOS STATIC SOLO PONER EL NOMBRE DE LA CLASE (Estatic),
	agregas "::" y el nombre de la funcion con sus parametros, asi: Estatic::sumar(36,33)*/
	
	cout<<"\n La suma es: "<< Estatic::sumar(36,33);
	cout<<" :)";
	
	return 0;
}
