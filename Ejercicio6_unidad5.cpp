#include<iostream>
#include<conio.h>
using namespace std;
/*
	
*/
main(){
int numeros[]={12,2,3,4,10};
int c,suma=0,mayor=0;
for(c=0;c<5;c++){
	suma=suma+numeros[c];
	if(numeros[c]>mayor){
		mayor=numeros[c];
	}
}
if(mayor==suma-mayor){
		cout<<" Hay un valor equivale a la suma de los demas numeros";
	}
	else cout<<" No hay un valor equivale a la suma de los demas numeros"; 
}
