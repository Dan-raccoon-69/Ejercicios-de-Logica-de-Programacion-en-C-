#include<iostream>
#include<conio.h>
using namespace std;
/*programa que lee un vector de numeros(consola) y muestre en la salidda 
de los numeros del vector con sus indices asociados*/
main(){
int numeros[5];
int c,elementos;
	cout<<" Ingresa el numero de elementos: "; cin>>elementos;	
for(c=0;c<elementos;c++){
	cout<<" Ingresa el numero "<<c<<" :"; cin>>numeros[c];	
}
cout<<"\n";
for(c=0;c<elementos;c++){
cout<< " El numero "<< c <<" es: "<<numeros[c]<<endl;	
}
	getch();	
}
