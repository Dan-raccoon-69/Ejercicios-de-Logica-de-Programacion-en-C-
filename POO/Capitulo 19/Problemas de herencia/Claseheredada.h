#include <iostream>
using namespace std;
#include"Clasebase1.h"
#include "Clasebase2.h"

class Claseheredada: public Clasebase1,Clasebase2{
	protected:
		int x;
		public:
			Claseheredada(int x1,int x2,int x) : Clasebase1(x1),Clasebase2(x2){
				this->x=x;
			}
			~Claseheredada(){
				
			}
			
			int getx(){
				return x;
				/*si necesitas metodos, igual le pones a que clase pertenece
				ejemplo:
				return Clasebase1::getx();
				
				*/
			}
	
};
