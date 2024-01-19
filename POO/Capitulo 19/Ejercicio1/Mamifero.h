#ifndef MAMIFERO_H
#define MAMIFERO_H
#include <iostream>
using namespace std;

class Mamifero{
			
		public:
		virtual void dieta() = 0;
		virtual void anio_lugarnacimiento() = 0;
		virtual void raza() = 0;
};
#endif
