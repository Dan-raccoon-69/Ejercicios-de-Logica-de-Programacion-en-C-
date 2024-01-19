#include<conio.h>
#include<iostream>
using namespace std;
//factorial de un numero;
main(){
	int num,factorial=1;
	do{
	cout<<"\n Escribe el numero para su factorial: ";
	cin>>num;
	
	if(num<=0){
	cout<<"\n Solo se aceptan valores positivos(+)";
	}
	}while(num<=0);
	for(int c=1;c<=num;c++){
		factorial=factorial*c;
	}	
	
	cout<<"\n El factorial de "<<num<<" es: "<<factorial;
	getch();
}
