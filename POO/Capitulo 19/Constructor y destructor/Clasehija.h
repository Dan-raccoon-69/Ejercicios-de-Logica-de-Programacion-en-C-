#include <iostream>
using namespace std;
#include "Clasepadre.h"

class Clasehija : public Clasepadre{
	private:
		int num2;
		public:
			Clasehija(int num1,int num2) : Clasepadre(num1){ 
			//le indicas que hay atributos en la Clasepadre, por eso va y ejecuta 1ero el constructor de la Clasepadre
				this->num2=num2;
				cout<<"Ejecutando constructor de clase Hija"<<endl;
			}
			
			~Clasehija(){
				cout<<"Ejecutando destructor de clase Hija"<<endl;
			}
	
};
