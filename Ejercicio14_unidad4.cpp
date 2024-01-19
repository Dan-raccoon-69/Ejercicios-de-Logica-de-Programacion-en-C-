#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//numeros aleatorios en c++ 
using namespace std;
main (){
	int aleatorio,num,c=0;
	srand(time(NULL));
	aleatorio=1+rand() % (101-1);
do{
	cout<<" Ingresa el numero: "; cin>>num;	
	if(num<aleatorio){
		cout<<"\n El numero que anostaste es menor,sigue intentando"<<endl;
	}
	if(num>aleatorio){
		cout<<"\n El numero que anostaste es mayor,sigue intentando"<<endl;	
	}
	c++;
}while(num!=aleatorio);
cout<<"\n Acertasteee!!!, el numero aleatorio es: "<< aleatorio;
cout<< "\n El numero de intentos son: "<<c;	
	
}
