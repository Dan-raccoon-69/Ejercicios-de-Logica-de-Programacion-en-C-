#include <iostream>
#include <math.h>
using namespace std;
#include "Poligono.h"
class Triangulo :public Poligono{
	private:
		float a,b,c;
	public:
		
		Triangulo(float a,float b,float c){
			this->a=a;
			this->b=b;
			this->c=c;
		}
		float Area(){
			float p=(a+b+c)/2;
			float are=sqrt(p*(p-a)*(p-b)*(p-c));
			return are;
		}
		
		float Perimetro(){
			float per=a+b+c;
			return per;
		}
};
