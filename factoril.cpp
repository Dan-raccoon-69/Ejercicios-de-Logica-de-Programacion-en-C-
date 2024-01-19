#include<iostream>
using namespace std;
int factorial(int);
int main ()
{
	int n, r;
	cout<<" Ingresa un numero: ";
	cin>>n;
	r=factorial(n);
	cout<<n<<" ! = "<<r<<endl;	
}

int factorial (int N){
	int f;
	if(N==0 || N==1)
	return 1;
	else{
		f=N*factorial(N-1);
		
	}
	return f;
}
