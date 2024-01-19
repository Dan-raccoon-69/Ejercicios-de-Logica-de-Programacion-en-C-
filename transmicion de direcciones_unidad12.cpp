//transmision de direcciones

#include<iostream>
#include<conio.h>
using namespace std;

void intercambio(float *,float *);

main(){
	float num1,num2;
	
	num1=14.4;
	num2=23.5;	
	
	cout<<" Tu num1 es: "<<num1<<endl;
	cout<<" Tu num2 es: "<<num2<<endl;
	
 	intercambio(&num1,&num2);	
	
	cout<<" Nuevo valor de num1 es: "<<num1<<endl;
	cout<<" Nuevo valor de num2 es: "<<num2<<endl;
	getch();
}

void intercambio(float *num1,float *num2){
	float aux;
	aux=*num1;
	*num1=*num2;
	*num2=aux;
}

