#include<iostream>
#include<conio.h>
using namespace std;
//suma de factoriales
main(){
	int suma=0,num,factorial=1,i;
	do{
	cout<<"\n Escribe el numero para la suma de sus factoriales: ";
	cin>>num;
	
	if(num<=0){
	cout<<"\n Solo se aceptan valores positivos(+)";
	}
	
	}while(num<=0);
	
	
	for(int i=1;i<=num;i++){
		factorial=factorial*i;
	suma+=factorial;
	}
		
	cout<<" La suma de factoriales es: "<<suma;
	
	//suma=suma+factorial;
	getch();
}
