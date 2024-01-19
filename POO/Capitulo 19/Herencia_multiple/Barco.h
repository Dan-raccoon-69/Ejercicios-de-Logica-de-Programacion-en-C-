#include <iostream>
using namespace std;

class Barco{
	private:
		string nombre;
		public:
			Barco(string nombre){
				this->nombre=nombre;
			}
			~Barco(){
				
			}
			void indicarbarco(){
				cout<<"	Recorre por agua."<<endl;
			}
			string getnombrebarco(){
				return nombre;
			}
};
