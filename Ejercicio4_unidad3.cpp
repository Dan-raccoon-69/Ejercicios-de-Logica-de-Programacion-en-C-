#include<iostream>
using namespace std;
//programa que te dice si un numero es + o -
main(){
	int num;
	cout<<" Ingresa el num: "; cin>>num;
	if(num==0){
	cout<<"\n El numero "<<num<<" no tiene signo, no sea wuey";	
	}
	else if(num>0){
		cout<<"\n El numero "<<num<<" es positivo (+)";
	}else
	cout<<"\n El numero "<<num<<" es negativo (-)";
	
}
