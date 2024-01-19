#include<iostream>
using namespace std;
int sumadosnumeros(int,int);
int main ()
{
	int a,b,r;
	cout<<" Ingresa un numero: ";
	cin>>a;
	cout<<"\n Ingresa un numero: ";
	cin>>b;
	
	r=sumadosnumeros(a,b);
	cout<<" Resultado = "<<r<<endl;	
}

int sumadosnumeros (int A, int B){
	
	if(A==0)
	return B;
	if(B==0)
	return A;
	else{
		return 1+sumadosnumeros(A,B-1);
	}
}
