#include <iostream>
#include <stdlib.h>
using namespace std;
#include<math.h>
#include "Figura.h"
//": public Figura" << PONES PUBLIC O PRIVATE Y EL NOMBRE DE LA CLASE "PADRE", eso es para heredar los atribbutos y metodos
class Triangulo : public Figura{
	private: 
	float lado1,lado2,lado3;
	
	public:
		Triangulo(int nlados,float lado1,float lado2,float lado3) : Figura(nlados){ //" : Figura(nlados)" especificas de donde viene "nlados"
			this->lado1=lado1;
			this->lado2=lado2;
			this->lado3=lado3;
		}
		
		float Areatriangulo(){
			float p=(lado1+lado2+lado3)/2;
			//lados=3,3,3;
			float area=sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
			//raiz cuadrada de (4.5(4.5-3)(4.5-3)(4.5-3))
			//4.5(1.5)(1.5)(1.5)
			//4.5*3.375=15.1875, raiz de 15.1875=3.89;
			return area;
		}
};
