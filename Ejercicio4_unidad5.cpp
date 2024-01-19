#include<iostream>
#include<conio.h>
using namespace std;
/*definir un vector de numeros y muestre en la salida estandar 
el vector en orden inverso - del ultimo al 1er elemento*/
main(){
	int numeros[]={1,3,5,7,9};
	for(int c=4;c>=0;c--){
		cout<< " El valor de "<<c<<" es: "<<numeros[c]<<endl;
	}
	getch();
}
