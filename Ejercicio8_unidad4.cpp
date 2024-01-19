#include<iostream>
#include<conio.h>
using namespace std;
//programa que calcule el valor de 1+2+3+n;
main(){
	float num,suma=0;
	do{
	cout<<"\n Ingresa hasta el ultimo numero que deses sumar: ";
	cin>>num;
	if(num<=0){
		cout<<"\n Solo se pueden ingresar numeros mayores a 1."<<endl;
	}	
	}while(num<=0);
	for(int c=1;c<=2*num-1;c+=2){
		suma+=c;
	}
	cout<<"\n El resultado es: "<<suma;	
	getch();
}
