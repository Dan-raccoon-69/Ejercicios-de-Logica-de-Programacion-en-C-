/*Escriba una plantilla de funcion llamada maximo () que devuelva el valor maximo de 3 argumentos que se transmitan
a la funcion cuando sea llamada.
suponga que los 3 argumentos seran del mismo tipo de datos */
#include<iostream>
#include<conio.h>
using namespace std;

template <class dato>
dato maximo(dato c1,dato c2, dato c3);
main(){
	//tipo de dato cual sea, char,int,float,double
	char x='i',y='a',z='o';
	maximo(x,y,z);
	getch();
}

template <class dato>
dato maximo(dato c1,dato c2, dato c3){
	dato mayor;
	if(c1<c2 && c2<c3){
		cout<<" El mayor es: "<<c3;
		mayor=c3;
	}
	else if(c1<c2 && c2>c3){
		cout<<" El mayor es: "<<c2;
		mayor=c2;
	}
	else if(c1>c2 && c2<c3 ){
		cout<<" El mayor es: "<<c3;
		mayor=c3;
	}
	else if(c1<c2 && c3<c2){
		cout<<" El mayor es: "<<c2;
		mayor=c2;
	}
	else if(c1>c2 && c3>c2){
		cout<<" El mayor es: "<<c1;
		mayor=c3;
	}
	else if(c1>c2 && c2>c3){
		cout<<" El mayor es: "<<c1;
		mayor=c1;
	}
	return mayor;
}
