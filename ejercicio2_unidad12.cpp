/*determinar si un numero es un numero primo o no, con punteros y ademas indicar en que posicion de memoria
se guardo el numero */
#include<iostream>
#include<conio.h>
using namespace std;

main (){
	int numero,*dir_numero,contador=0;
	cout<<" Ingresa el numero: "; cin>>numero;
	dir_numero=&numero;
	/*mi forma que sirve un 95%
	if((*dir_numero%1==0) && (*dir_numero%*dir_numero==0) && (*dir_numero%4==0)){
		cout<<" El numero "<<*dir_numero<<" no es primo."<<endl;
		cout<<" Direccion es: "<<dir_numero;
	}
	else {
	cout<<" El numero "<<*dir_numero<<" es primo."<<endl;
	cout<<" Direccion es: "<<dir_numero;	
	}
	*/
	for(int i=1;i<*dir_numero;i++){
		if(*dir_numero%i==0){
			contador++;
		}
	}
	if (contador>2){
		cout<<" El numero "<<*dir_numero<<" no es primo."<<endl;
		cout<<" Direccion es: "<<dir_numero;
	}
	else {
	cout<<" El numero "<<*dir_numero<<" es primo."<<endl;
	cout<<" Direccion es: "<<dir_numero;	
	}
	getch();
}
 
