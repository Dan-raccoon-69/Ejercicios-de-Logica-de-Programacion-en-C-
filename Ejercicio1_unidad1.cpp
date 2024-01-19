#include <iostream>
using namespace std;
int main(){
	int numero1,numero2,suma,resta,multi;
	float div=0;
	cout<<"Escribe el 1er numero ";
	cin>>numero1;
	cout<<"Escribe el 2do numero ";
	cin>>numero2;
	suma = numero1+numero2;
	resta=numero1-numero2;
	multi=numero1*numero2;
	div = (float) numero1/ (float) numero2;
	cout<<"La suma es: "<<suma;
	cout<<"\nLa resta es: "<<resta;
	cout<<"\nLa multiplicacion es: "<<multi;
	cout<<"\nLa division es: "<<div;
	return 0;
}
