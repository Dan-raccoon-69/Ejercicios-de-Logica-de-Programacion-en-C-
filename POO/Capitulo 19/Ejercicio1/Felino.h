#include <iostream>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero{
		private:
			string nombrecirco;
		
		public:
		void dieta(){
			cout<<endl<<" La dieta del felino es carne roja."<<endl;
		}	
		
		void anio_lugarnacimiento(){
			cout<<" Anio de nacimiento: 2002"<<endl;
			cout<<" Lugar de nacimiento: Ciudad de Mexico"<<endl;
		}
		
		void raza(){
			cout<<" Raza: Leon"<<endl;
		}
		void setcirco(string nombrecirco){
			this->nombrecirco=nombrecirco;
		}		
		string getcirco(){
			return nombrecirco;
		}
				
};
