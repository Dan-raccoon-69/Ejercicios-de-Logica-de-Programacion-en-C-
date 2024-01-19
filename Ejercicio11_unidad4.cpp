#include<iostream>
#include<stdlib.h>
using namespace std;
/*programa que calcula el valor de 2 ala 1 + 2 ala 2 + 2 ala 3 + 2 ala 4 + 2 ala n...*/
main(){
	int c,x=2,n,potencia=1,suma=0;
	cout<<"\n Escribe el valor del exponente (n): "; cin>>n;
	for(c=1;c<=n;c++){
	potencia=potencia*x;
	suma=potencia+suma;
	}
	cout<<" Resultado es:"<<suma;
	cout<<"\n";
	system("pause");
}
