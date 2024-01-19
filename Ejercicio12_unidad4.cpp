#include<iostream>
#include<stdlib.h>
using namespace std;
/*hacer un programa que calcule el resultado de la sig expresion 1-2+3-4+5-6+7-8...*/
main (){
	int c,mc,n,sumap=0,suman=0,total;
	cout<<" Ingresa el valor de n: "; cin>>n;
	for(c=1;c<=n;c++){
	mc=c%2;
	if(mc==1){
		sumap=sumap+c;
	}
	if(mc==0){
		suman=suman+c;
	}
	}
	suman=-1*suman;
	total=sumap+suman;
	cout<<" El resultado es: "<<total<<endl;
	system("pause");
}
