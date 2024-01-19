#include<iostream>
#include"Animal.h"
using namespace std;
//esta clase ya no es abstracta porque ya estamos implemnetando el resultado 
//cuando ya se implemente ya no se pone virtual, solo void, como cualquier funcion.
class Animalcarnivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El animal carnivoro se alimenta de carne."<<endl;
		}
	
};
