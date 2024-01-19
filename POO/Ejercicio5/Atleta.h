#include<iostream>
using namespace std;
 class Atleta{
 	private: 
 		int numeroatle;
 		float tiempo;
 		string nombre;
 		
 		public:
 			Atleta(int numeroatle,string nombre,float tiempo){
 				this->numeroatle=numeroatle;
 				this->nombre=nombre;
 				this->tiempo=tiempo;
 			}
 			
 			Atleta(){
 				
 			}
 			float gettiempo();
 			void mostrar();
 		
 		
 };

