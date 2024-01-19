#include<iostream>
#include<conio.h>
using namespace std;
/*programa que lee datos de un vector de enteros y determinar el mayor elemento del vector*/
main(){
	int num[10];
	int elementos,mayor=0;
	cout<<" Ingresa el numero de elementos que deseas ingresar: "; cin>>elementos;
	cout<<"\n";
	for(int c=0;c<elementos;c++){
		cout<<" Ingresa el dato "<<c+1<< ": ";cin>>num[c];
	if(num[c]>mayor){
		mayor=num[c];
	}
	}
	cout<< "\n El valor mayor es: "<<mayor;
}
