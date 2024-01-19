#include<iostream>
#include<conio.h>
using namespace std;
//ordenas las vocales 
main (){
	char cadena[]={'e','a','o','i','u'};
	int f,c,aux;
	for(f=0;f<5;f++){
		for(c=0;c<4;c++){
			if(cadena[c]>cadena[c+1]){
				aux=cadena[c];
				cadena[c]=cadena[c+1];
				cadena[c+1]=aux;
			}
		}
	}
	//imprimiendo
	cout<<"\n Ascendente es: ";
	for(f=0;f<5;f++){
		cout<<cadena[f]<<" ";
	}
	cout<<"\n Descendente es: ";
	for(f=4;f>=0;f--){
		cout<<cadena[f]<<" ";
	}
	getch();
}
