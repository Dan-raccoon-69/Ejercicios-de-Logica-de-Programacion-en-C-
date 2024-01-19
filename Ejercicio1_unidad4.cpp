#include<iostream>
using namespace std;
/* Solicitar un numero del 1 al 10 y muestre en la salida estandar 
su tabla de multiplicar.
*/
void tablas(int num);
main(){
	tablas(4);
	tablas(7);
}

void tablas(int numero){
	do{
		if(numero < 1 || numero > 10){
			cout<<"Solo se aceptan numero entre 1-10\n ";
		}
	}while(numero<1 || numero>10);
	cout<<"\nLa tabla de multiplicar del numero "<<numero<< " es:\n";
	for(int c = 1;c < 11;c++){
		cout<<" "<< numero<<" * "<<c<<" = "<<numero*c<<endl;
	}
	system("pause");
}
