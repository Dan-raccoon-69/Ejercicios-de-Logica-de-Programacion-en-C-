#include<iostream>
#include<conio.h>

using namespace std;
main (){
	int cadena[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
	dato=4;
	inf =0;
	sup=5;
	cout<<"\n tu arreglo es: ";
	for(int c=0;c<5;c++){
		cout<<" "<<cadena[c];
		
	}
	cout<<"\n El numero que quieres buscar es: "<<dato;
	
	while(inf<=sup){
		mitad=(inf+sup)/2;
		if(cadena[mitad]==dato){
			band='V';
			break;
		}
		if(cadena[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(cadena[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	if(band=='V'){
		cout<<"\n El numero a sido encontrado en la posicion "<<mitad+1;
	}
	else 
	cout<<"\n El numero NO a sido encontrado.";
	
}
