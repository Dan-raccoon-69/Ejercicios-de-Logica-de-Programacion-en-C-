#include <iostream>
using namespace std;
//programa que lee 2 numeros e indica cual de ellos es mayor 
//declaracion de una 
void mayor(int a, int b);
main(){
	mayor(99,1000);
}

void mayor(int num1, int num2){
	if(num1==num2){
	cout<<"\n El numero "<<num1<< " es igual que el numero "<<num2;	
	}
	else if(num1>num2){
		cout<<"\n El numero "<<num1<< " es mayor que el numero "<<num2;
	}
	else{
	cout<<"\n El numero "<<num2<< " es mayor que el numero "<<num1;	
	}
}
