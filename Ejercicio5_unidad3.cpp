#include<iostream>
using namespace std;
//escribir una vocal y que indique si es mayuscula o miniscula
main(){
char letra;
cout<<" La letra es: "; cin>>letra;
switch(letra){
	case 'A': 
	case 'E': 
	case 'I': 
	case 'O': 
	case 'U': 
	cout<<"\n La letra es mayuscula";break;
	default:
	cout<<"\n La letra no es una vocal mayuscula";break;
}
}
