#include<iostream>
using namespace std;
int fibonacci(int);
int main ()
{
	int n, r;
	cout<<" Ingresa un numero: ";
	cin>>n;
	r=fibonacci(n);
	cout<<n<<" Fibonacci ("<<r<<")= "<<r<<endl;	
}

int fibonacci (int N){
	int f;
	if(N==0 || N==1)
	return N;
	else{
		f=fibonacci(N-1)+fibonacci(N-2);
	}
	return f;
}
