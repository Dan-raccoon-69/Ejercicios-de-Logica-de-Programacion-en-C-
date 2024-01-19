#include <iostream>
#include "Mamifero.h"
using namespace std;

class Gatodomestico : public Mamifero{
		private:
			string nombre;
		
		public:
		void dieta(){
			cout<<endl<<" La dieta del minino es lasania."<<endl;
		}		
	
		void anio_lugarnacimiento(){
			cout<<" Anio de nacimiento: 2020"<<endl;
			cout<<" Lugar de nacimiento: Guadalajara"<<endl;
		}
		
		void setnombre(string nombre){
			this->nombre=nombre;
		}		
		string getnombre(){
			return nombre;
		}
		
		void raza(){
		cout<<" Raza: Gato domestico"<<endl;
		}
		
};
