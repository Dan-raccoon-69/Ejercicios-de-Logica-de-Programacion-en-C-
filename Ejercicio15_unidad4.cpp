#include<iostream>
#include<conio.h>
#include<stdlib.h>
//descomposicion en factores primos en c++ 
using namespace std;
main (){
	int num,c;
cout<<" Digita el num: "<<endl;
cin>>num;

for(c=2;num>1;c++)
while(num%c==0){
	cout<<c<<" ";
	num=num/c;
}

}

