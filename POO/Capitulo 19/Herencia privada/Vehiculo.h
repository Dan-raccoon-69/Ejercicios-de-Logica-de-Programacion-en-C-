//GUARDIAN DE INCLUISION MULTIPLE, LO COLOCS EN DONDE ESTE LA CLASE REPETIDA
#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
using namespace std;

class Vehiculo{
	private:
	string marca,color;
	///////////////////////////////
	protected:
	string modelo;
	
	string getmodelo(){
		return modelo;
	}
	///////////////////////////////
	public: 	
	Vehiculo(string marca,string color,string modelo){
		this->marca=marca;
		this->color=color;
		this->modelo=modelo;
	}
	string getmarca(){
		return marca;
	}
	string getcolor(){
		return color;
	}
	void setcolor(string color){
		this->color=color;
	}
};

#endif;
