#include <iostream>
using namespace std;
#include "Vehiculo.h"

class Deportivo : private Vehiculo{
	private:
		int cilindrada;
		public:
			Deportivo(string marca,string color,string modelo,int cilindrada) : Vehiculo(marca,color,modelo){
				this->cilindrada=cilindrada;
			}
			
			int getcilindrada(){
				return cilindrada;
			}
		
};
