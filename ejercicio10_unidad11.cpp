#include<iostream>
#include<conio.h>
using namespace std;

void intercambiar(int&,int&);
main(){
int num1=15,num2=20;
	cout<<" El 1er valor es: "<<num1<<endl;
	cout<<" El 2do valor es: "<<num2;
	intercambiar(num1,num2);
	cout<<"\n El nuevo 1er valor es: "<<num1<<endl;
	cout<<" El nuevo 2do valor es: "<<num2;
	getch();
}
void intercambiar(int& num1,int& num2){
int aux;
aux=num1;
num1=num2;
num2=aux;;	
}
