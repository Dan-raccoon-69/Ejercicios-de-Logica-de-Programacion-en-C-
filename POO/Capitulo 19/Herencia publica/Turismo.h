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
};
