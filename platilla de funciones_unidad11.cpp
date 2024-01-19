#include<iostream>
#include<conio.h>
using namespace std;
//declaracion-prototipo de la funcion
template <class dato>
void valor_abs(dato numero);

main(){
	int numero1=-5;
	float numero2=-15.54;
	double numero3=74.66;
	valor_abs(numero1);
	valor_abs(numero2);
	valor_abs(numero3);
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

