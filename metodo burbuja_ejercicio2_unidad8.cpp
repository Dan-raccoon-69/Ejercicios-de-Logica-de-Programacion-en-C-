#include<iostream>
#include<conio.h>
using namespace std;
//ingresando valores y ordenandolos del mayor al menor
main (){
	int cadena[20];
	int f,c,aux,elementos;
	cout<<" Escribe la cantidad de datos a ingresar: "; cin>>elementos;
	
		for(c=0;c<elementos;c++){
			cout<<" Ingresa el dato "<<c+1<< ": ";cin>>cadena[c];
		}
	
	for(f=0;f<elementos;f++){
		for(c=0;c<elementos;c++){
			if(cadena[c]>cadena[c+1]){
				aux=cadena[c];
				cadena[c]=cadena[c+1];
				cadena[c+1]=aux;
			}
		}
	}
	//imprimiendo
	cout<<"\n Ascendente es: ";
	for(f=1;f<=5;f++){
		cout<<cadena[f]<<" ";
	}
	cout<<"\n Descendente es: ";
	for(f=5;f>0;f--){
		cout<<cadena[f]<<" ";
	}
	getch();
}
