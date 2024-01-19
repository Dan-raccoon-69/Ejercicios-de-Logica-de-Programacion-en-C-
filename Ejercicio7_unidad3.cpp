#include<iostream>
using namespace std;
//programa que revisa si la edad esta en un rango de {18-25}
main(){
	int edad;
	cout<<" Ingresa la edad: ";cin>>edad;
	if(edad>=18 && edad<=25){
		cout<<"\n La edad esta en el rango de [18-25]";
	}
	else 
		cout<<"\n La edad NO esta en el rango";
}
