#include <iostream>
#include <math.h>
using namespace std;
//calcular soluciones de la formula general de segundo grado e6_u2
// ax2+bx+c=0;
main(){
	float a,b,c,solucion1,solucion2,raiz;
	cout<<" Ingresa a: "; cin>>a;
	cout<<" Ingresa b: "; cin>>b;
	cout<<" Ingresa c: "; cin>>c;
	raiz=sqrt((pow(b,2))-(4*a*c));
	b=-1*b;
	solucion1=(b+raiz)/(2*a);
	solucion2=(b-raiz)/(2*a);
	cout<<"\n La solucion 1 es: "<<solucion1<<endl;
	cout<<" La solucion 2 es: "<<solucion2;	
}
