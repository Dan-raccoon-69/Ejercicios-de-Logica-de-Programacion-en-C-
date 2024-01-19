#include<iostream>
#include<conio.h>
using namespace std;

main (){
	int num,*dir_num;
	num=14;
	dir_num=&num;
	cout<<" Tu numero es: "<<*dir_num<<endl;
	cout<<" Tu direccion es: "<<dir_num<<endl;
	getch();
}
