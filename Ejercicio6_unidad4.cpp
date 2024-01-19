#include<iostream>
#include<stdlib.h>
using namespace std;
/*programa que calcula la potencia x a la y
sin utilizar la funcion pow*/
main(){
	int c,x,y,potencia=1;
	cout<<" Escribe el valor de la base (x): "; cin>>x;
	cout<<"\n Escribe el valor del exponente (y): "; cin>>y;
	for(c=1;c<=y;c++){
	potencia*=x;
	}
	cout<<" Resultado es:"<<potencia;
	cout<<"\n";
	system("pause");
}
