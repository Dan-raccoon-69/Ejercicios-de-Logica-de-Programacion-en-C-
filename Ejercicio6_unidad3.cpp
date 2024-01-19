#include<iostream>
using namespace std;
//escribir una vocal y que indique si es mayuscula o miniscula o si no es una vocal
main(){
char letra[0];
cout<<" La letra es: "; cin>>letra;
switch(letra[0]){
	case 'A': 
	case 'E': 
	case 'I': 
	case 'O': 
	case 'U': 
	cout<<"\n La letra es una vocal mayuscula";break;
	default:
	switch(letra[0]){
	case 'a': 
	case 'e': 
	case 'i': 
	case 'o': 
	case 'u': 
	cout<<"\n La letra es una vocal miniscula";break;
	default:
	cout<<"\n La letra no es una vocal ";break;
	}
				}
}
