#include<iostream>
using namespace std;
/*
expresion a+(b/(c-d)) en c++
*/
main (){
	float a,b,c,d,e,f,resultado;
	cout<<" Ingresa a: "; cin>>a;
	cout<<" Ingresa b: "; cin>>b;
	cout<<" Ingresa c: "; cin>>c;
	cout<<" Ingresa d: "; cin>>d;
	
	resultado=a+(b/(c-d));
	
	cout.precision(3);
	cout<<" El resultado es: "<<resultado;
	
}
