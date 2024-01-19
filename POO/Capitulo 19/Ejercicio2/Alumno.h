#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
using namespace std;

class Alumno{
	private:
		string nombrecarrera;
		public:
			Alumno(string nombrecarrera){
				this->nombrecarrera=nombrecarrera;
			}
			
			void mostrardatos(){
				cout<<" Nombre carrera: "<<nombrecarrera<<endl;
				
			}
			~Alumno(){
				
			}
			void setnombrecarrera(string nuevonombre){
				this->nombrecarrera=nuevonombre;
			}
			
			string getnombrecarrera(){
				return nombrecarrera;
			}
};
#endif
