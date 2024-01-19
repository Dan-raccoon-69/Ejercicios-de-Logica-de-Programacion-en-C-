#include<iostream>
#include"Animal.h"
using namespace std;
//esta clase ya no es abstracta porque ya estamos implemnetando el resultado 
//cuando ya se implemente ya no se pone virtual, solo void, como cualquier funcion.
class Animalhervivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"El animal hervivoro se alimenta de hierba."<<endl;
		}
	
};
