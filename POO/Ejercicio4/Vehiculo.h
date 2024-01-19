#include<iostream>
using namespace std;

class Vehiculo{
	private:
		string marca,modelo;
		float precio;
		
		public:
			
			Vehiculo(string marca, string modelo, float precio){
			this->marca=marca;
			this->modelo=modelo;
			this->precio=precio;	
			}
			//CUANDO USES ARREGLOS DE OBJETOS TIENES QUE CREAR AHUEVO UN METODO COSTRUCTOR SOLITO, COMO ESTE:
			Vehiculo(){
				
			}
			
		void mostrar();	
		float getprecio();
	
	
};	
