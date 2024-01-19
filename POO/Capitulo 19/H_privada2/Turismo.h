#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Turismo : public Vehiculo{
	private:
		int numpuertas;
		
		public:
		Turismo(string marca,string color,string modelo,int numpuertas ): Vehiculo(marca,color,modelo){
			this->numpuertas=numpuertas;
		}
		~Turismo(){
			
		}
		int getnumpuertas(){
			return numpuertas;
		}
		/*EL METODO getmodelo() ESTA PROTEGIDO EN "VEHICULO",LO HEREDA IGUALMENTE PROTEGIDO, Y LO PASAS A 
		LA CLASE "TURISMO" EN MODO PUBLICO, ES COMO UN TRANSBORDO, YA QUE ESTA PUBLICO YA LO PUEDE MOSTRAR CON UN RETURN */
		string retornarmodelo(){
			return getmodelo();
		}	
};
