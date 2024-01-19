#include <iostream>
using namespace std;
int main(){
	int numero1,numero2,suma,resta,multi;
	float div=0;
	cout<<"Escribe el 1er numero ";
	cin>>numero1;
	cout<<"Escribe el 2do numero ";
	cin>>numero2;
	suma=numero1+numero2;
	resta=numero1-numero2;
	multi=numero1*numero2;
	div=numero1/numero2;
	cout<<"la suma es: "<<suma;
	cout<<"\nla resta es: "<<resta;
	cout<<"\nla multiplicacion es: "<<multi;
	cout<<"\nLa division es: "<<div;
	
	return 0;
}
