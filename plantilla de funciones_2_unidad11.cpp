//hallar el valor absoluto
#include<iostream>
#include<conio.h>
using namespace std;

//declaracion-prototipo de la funcion
template <class dato>
void valor_abs(dato numero);
main(){
	int x;
	float y;
	double z;
	cout<<" Escribe un numero entero(+ or -): "; cin>>x;
	cout<<" Escribe un numero racional (+ or -): "; cin>>y;
	cout<<" Escribe un numero double (+ or -): "; cin>>z;
	valor_abs(x);
	valor_abs(y);
	valor_abs(z);
	getch();
}

//funcion
template <class dato>
void valor_abs(dato numero){
	if(numero<0){
		numero=numero*-1;
	}
	cout<<" El absoluto es: "<<numero<<endl;
}


