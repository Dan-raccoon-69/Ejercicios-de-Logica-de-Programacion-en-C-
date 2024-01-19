#include <iostream>
using namespace std;

class Clasepadre{
	private:
		int num1;
		
		public:
			Clasepadre(int num1){
				this->num1=num1;
				cout<<"Ejecutando constructor de clase Padre"<<endl;
			}
			
			~Clasepadre(){
				cout<<"Ejecutando destructor de clase Padre"<<endl;
			}
};
