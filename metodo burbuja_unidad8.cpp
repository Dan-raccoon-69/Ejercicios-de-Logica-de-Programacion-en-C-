#include<iostream>
#include<conio.h>
using namespace std;

main (){
	int cadena[]={4,1,2,3,5};
	int f,c,aux;
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
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
