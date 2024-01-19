#include <iostream>
#include "Personajes.h"

/* Para utilizar una funcion amiga necesitamos tener un metodo afuera de la clase, en otro archivo
o fuera de main   */

void modificar(Personajes &p,int fuer,int velo){
	p.fuerza=fuer;
	p.velocidad=velo;
}

int main(int argc, char** argv) {
	Personajes* Principal = new Personajes(100,50);
	Principal->mostrardatos();
	cout<<endl;
	//le pasa el objeto para que esta funcion (modificar) pueda manipular al objeto (Principal) y obvio modificarlo.
	modificar(*Principal,95,55);
	Principal->mostrardatos();

	return 0;
}
