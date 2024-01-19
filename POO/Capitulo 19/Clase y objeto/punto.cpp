//indicando que voy a usar el archivo de cabecera y atravez de este archivo vamos a definir las funcio.
#include "punto.h"

//estableciendo valores
//indicando a que clase 
		void punto::setX(int valorx){
			x=valorx;
		}
		void punto::setY(int valory){
			y=valory;
		}
		//obteniendo valores
		int punto::getX(){
			return x;
		}
		int punto::getY(){
			return y;
		}		
