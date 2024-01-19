#include<iostream>
#include<conio.h>
using namespace std;
/* programa que lee 5 num en un arreglo, los copie a otro arreglo multiplicados por 2
y muestre el segundo arreglo*/
main(){
	int num1[5];
	int num2[5];
	for(int c=0;c<5;c++){
		cout<<" Ingresa el dato "<<c+1<<": ";cin>>num1[c];
		num2[c]=num1[c];
	}
	cout<<"\n El vector 1 es: ";
	for(int c=0;c<5;c++){
		cout<<num1[c]<<" ";
		}
	cout<<"\n El vector 2 es: ";
	for(int c=0;c<5;c++){
		cout<<num2[c]*2<<" ";
		}
	getch();
}
