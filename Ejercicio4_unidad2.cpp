#include<iostream>
#include<math.h>
using namespace std;
//calculando la hipotenusa
main(){
float a,b,c;
	

	cout<<" Escribe el valor de a: "; cin>>a;
	cout<<" Escribe el valor de b: "; cin>>b;
	c=sqrt(pow(a,2)+pow(b,2));

	cout.precision(2);
	cout<<"\n Hipotenusa es: "<<c;
	
}

