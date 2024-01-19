#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int ,int&,int&,int&);

main(){
	int horas,min,totalseg,seg;
	cout<<" Ingresa los segundos: "; cin>>totalseg;
	
	tiempo(totalseg,horas,min,seg);
	
	cout<<"\n Horas: "<<horas<<endl;
	cout<<" Minutos: "<<min<<endl;
	cout<<" Segundos: "<<seg<<endl;
	
	getch();
}

void tiempo(int totalseg,int& horas,int& min,int& seg){
	int x;
	horas=totalseg/3600;
	x=totalseg%3600;
	min=x/60;
	x=x%60;
	seg=x;
	
}

