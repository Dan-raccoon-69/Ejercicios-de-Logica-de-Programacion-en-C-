#include <iostream>
#include <math.h>
using namespace std;
//checa tu cuaderno para ver la funcion a programar e5_unidad2
main(){
	float x,y,funcion;
	cout<<" Ingresa x: "; cin>>x;
	cout<<" Ingresa y: "; cin>>y;
	funcion=(sqrt(x))/(pow(y,2)-1);
	if((pow(y,2)-1)==0 ){
	cout<<" La division entre 0 no esta permitida";
	cout<<"\n Tu resultado es: ERROR";
	}
	if((pow(y,2)-1)!=0 ){
	cout.precision(3);
	cout<<" Tu resultado es: "<<funcion;
	}
}
	

