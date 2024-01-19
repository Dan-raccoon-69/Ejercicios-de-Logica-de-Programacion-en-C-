#include<iostream>
using namespace std;

class Personajes{
	//aqui le estamos dando el "permiso" a la funcion que desea utilizar los atributos de esta clase
	//es una declaracion de la funcion, recuerda que es por referencia el objeto (&).
	friend void modificar(Personajes &,int, int);
	private:
		int fuerza,velocidad;
		public:
			Personajes(int fuerza, int velocidad){
				this->fuerza=fuerza;
				this->velocidad=velocidad;
			}
			
			void mostrardatos(){
				cout<<" Fuerza: "<<fuerza<<endl;
				cout<<" Velocidad: "<<velocidad<<endl;
			}
	
};

