#include <iostream>
using namespace std;
#include"Barco.h"
#include"Avion.h"

class Hidroavion : public Barco,public Avion{
	private:
		string codigo;
		public:
			Hidroavion(string nombre,string modelo,string codigo) : Barco(nombre),Avion(modelo){
				this->codigo=codigo;
			}
			~Hidroavion(){
				
			}
			string getcodigo(){
				return codigo;
			}
			
			void mostrardatos(){
				cout<<"Mostrando datos: "<<endl;
				cout<<"Nombre: "<<getnombrebarco()<<endl;
				cout<<"Modelo: "<<getmodeloAvion()<<endl;
				cout<<"Codigo: "<<codigo<<endl;
			}
};
