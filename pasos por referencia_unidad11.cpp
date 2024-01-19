#include<iostream>
#include<conio.h>
using namespace std;

void valnuevo(int&,int&);
main(){
int num1,num2;
cin>>num1>>num2;
	valnuevo(num1,num2);
	getch();
}
void valnuevo(int& xnum,int& ynum){
	cout<<" 1er num es: "<<xnum<<endl;
		cout<<" 2do num es: "<<ynum;	
}
