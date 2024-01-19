#include<iostream>
#include"DiaAnio_ejercicio1.h"

using namespace std;

bool DiaAnio_ejercicio1::igual(DiaAnio_ejercicio1& d){
	if(dia==d.dia && mes==d.mes){
		return true;
	}
	else {
		return false;
	}	
}	

void DiaAnio_ejercicio1::visualizar(){
	cout<<"\n Mostrando datos: "<<endl;
	cout<<" Dia: "<<dia<<endl;
	cout<<" Mes: "<<mes<<endl;
	cout<<"\n";
}
