#include <iostream>
using namespace std;

class Cuadrilatero{
	private: 
	float lado1,lado2;
	
	public:
		Cuadrilatero(float lado1,float lado2){
			this->lado1=lado1;
			this->lado2=lado2;
		}
		
		Cuadrilatero(float lado1){
			this->lado1=lado1;
		}
		
		float getArea1(){
			float Area=lado1*lado2;
			return Area;
		}
		float getArea2(){
			float Area=lado1*lado1;
			return Area;
		}
		float getPerimetro1(){
			float Perimetro=lado1*2+lado2*2;
			return Perimetro;
		}
		float getPerimetro2(){
			float Perimetro=lado1*4;
			return Perimetro;
		}
};
