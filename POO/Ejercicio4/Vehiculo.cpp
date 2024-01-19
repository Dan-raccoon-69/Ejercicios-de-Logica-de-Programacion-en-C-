#include <iostream>
#include "Vehiculo.h"
using namespace std;

		
			void Vehiculo::mostrar(){
				cout<<endl<<" Visulaizando datos: "<<endl;
				cout<<" Marca: "<<marca<<endl;
				cout<<" Modelo: "<<modelo<<endl;
				cout<<" Precio: "<<precio<<endl;
			}
			
			float Vehiculo::getprecio(){
				return precio;
			}
			
	
