#include<iostream>
using namespace std;
int potencia(int,int);
int main ()
{
	int a,b,r;
	cout<<" Ingresa la base: ";
	cin>>a;
	cout<<"\n Ingresa el exponente: ";
	cin>>b;
	r=potencia(a,b);
	cout<<" Resultado = "<<r<<endl;	
}

int potencia (int A, int B){
	int pot;
	if(B==0)
	return 1;
	if(B==1)
	return A;
	else{
		pot=A*potencia(A,B-1);
		return pot;
	}
}
