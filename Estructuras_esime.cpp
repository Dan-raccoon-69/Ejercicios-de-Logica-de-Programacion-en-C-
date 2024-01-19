#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

main (){
	int datos[10];
	int i, cont=1,suma=0,mayor=0,posicion,minimo=101,posicion_minimo;
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
	datos[i]=1+rand()%100;	
	suma=suma+datos[i];
	if(datos[i]>mayor){
		mayor=datos[i];
		posicion=i;
	}
	if(datos[i]<minimo){
		minimo=datos[i];
		posicion_minimo=i;
	}
	}
	
	for(int i=0;i<10;i++)
	cout<<"    "<<i<<"    "<<datos[i]<<"\n";	
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"El dato mayor es "<<mayor<<" y esta en la posicion "<<posicion<<endl;	
	cout<<"El dato menor es "<<minimo<<" y esta en la posicion "<<posicion_minimo<<endl;	
		
	
	
	
}
