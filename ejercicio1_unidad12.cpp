//comprobar si un numero es par o impar  y señalar la posicion de memoria donde se esta guardando el numero. con punteros.
#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int num,*dir_num;
	cout<<" Ingresa numero: ";cin>>num;
	//almacenando la posicion de memoria de num, dentro del puntero
	dir_num=&num;
	if(*dir_num%2==0){
		cout<<" El numero "<<*dir_num<<" es par."<<endl;	
		cout<<" Direccion es: "<<dir_num;
	}
	else {
	cout<<" El numero "<<*dir_num<<" es impar."<<endl;	
	cout<<" Direccion es: "<<dir_num;	
	}
	
	
	
	getch();
}
