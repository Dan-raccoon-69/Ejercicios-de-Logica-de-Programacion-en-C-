#ifndef DEPORTISTA_H
#define  DEPORTISTA_H
#include <iostream>
using namespace std;

class Deportista{
	private:
		string nombreentrenador;
		public:
			Deportista(string nombreentrenador){
				this->nombreentrenador=nombreentrenador;
			}
			
			void mostrardatos(){
			cout<<" Nombre entrenador: "<<nombreentrenador<<endl;
			}
			
			void setnombrenetrenador(string nuevonombre){
				this->nombreentrenador=nuevonombre;
			}
			~Deportista(){
				
			}
			
			string getnombrentrenador(){
				return nombreentrenador;
			}
};
#endif
