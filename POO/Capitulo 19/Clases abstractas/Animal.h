#ifndef ANIMAL_H
#define ANIMAL_H

#include<iostream>
#include"Servivo.h"
using namespace std;
//esta clase ya no es abstracta porque ya estamos implemnetando el resultado 
//cuando ya se implemente ya no se pone virtual, solo void, como cualquier funcion.
class Animal : public Servivo{
	public:
		/* no es necesario colocar nada, ya que se hereda como un metodo virtual y aun no 
		implemnetamos nada */
};
#endif
