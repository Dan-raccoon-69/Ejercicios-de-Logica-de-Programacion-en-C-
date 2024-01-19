#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Furgoneta : protected Vehiculo{
	private:
		int carga;
		public:
			Furgoneta(string marca,string color,string modelo,int carga) : Vehiculo(marca,color,modelo){
				this->carga=carga;
			}
			
			int getcarga(){
				return carga;
			}
			string getcol(){
				return getcolor();
			}		
};
