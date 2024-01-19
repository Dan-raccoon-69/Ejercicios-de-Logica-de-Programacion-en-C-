#include <iostream>
using namespace std;
#include "Poligono.h"
class Rectangulo :public Poligono{
	private:
		float a,b;
	public:
		
		Rectangulo(float a,float b){
			this->a=a;
			this->b=b;
		}
		float Area(){
			float ar=a*b;
			return ar;
		}
		
		float Perimetro(){
			float per=((a*2)+(b*2));
			return per;
		}
};
