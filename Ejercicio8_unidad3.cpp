#include<iostream>
using namespace std;
//leer 3 numeros, despues lee un 4to numero e indica si coincide con alguno
main(){
	int num1,num2,num3,num4;
	cout<<" Ingresa el num1: "; cin>>num1;
	cout<<"\n Ingresa el num2: "; cin>>num2;
	cout<<"\n Ingresa el num3: "; cin>>num3;
	
	cout<<"\n El num1 es: "<<num1;
	cout<<"\n El num2 es: "<<num2;
	cout<<"\n El num3 es: "<<num3;
	cout<<"\n\n Ingresa el num4: "; cin>>num4;
	if(num4==num1){
	cout<<"\n El num4 coincide con el num1";	
	}
	else if(num4==num2){
	cout<<"\n El num4 coincide con el num2";
	}
	else if(num4==num3){
	cout<<"\n El num4 coincide con el num3";
	}
	else 
	cout<<"\n El num4 NO coincide con ningun numero";
}
