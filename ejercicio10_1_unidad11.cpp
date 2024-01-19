#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int ,int&,int&,int&);
	
main(){
	int dias,anio,mes,dia;
	cout<<" Ingresa los dias: "; cin>>dias;
	tiempo(dias,anio,mes,dia);
	
	cout<<" Fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;	
	getch();
}

void tiempo(int dias,int& anio,int& mes,int& dia){
	anio=dias/365;
	dias=dias%365;
	mes=dias/30;
	dia=dias%30;
	
}

