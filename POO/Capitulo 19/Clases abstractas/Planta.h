#include<iostream>
#include"Servivo.h"
using namespace std;
//esta clase ya no es abstracta porque ya estamos implemnetando el resultado 
//cuando ya se implemente ya no se pone virtual, solo void, como cualquier funcion.
class Planta : public Servivo{
	public:
		void alimentarse(){
			cout<<"La planta se alimenta por fotosintesis."<<endl;
		}
	
};
