#include<iostream>
using namespace std;
/*
expresion (a+(b/c))/(d+(e/f)) en c++
*/
main (){
	float a,b,c,d,e,f,resultado;
	cout<<" Ingresa a: "; cin>>a;
	cout<<" Ingresa b: "; cin>>b;
	cout<<" Ingresa c: "; cin>>c;
	cout<<" Ingresa d: "; cin>>d;
	cout<<" Ingresa e: "; cin>>e;
	cout<<" Ingresa f: "; cin>>f;
	
	resultado=(a+(b/c))/(d+(e/f));
	
	cout.precision(3);
	cout<<" El resultado es: "<<resultado;
	
}
