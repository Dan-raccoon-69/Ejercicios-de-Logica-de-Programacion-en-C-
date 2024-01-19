#include<iostream>
#include<conio.h>
using namespace std;
/*programa que toma 6 temperaturas, calcula la media del dia 
la temperatura mas alta y la temperatura mas baja*/
main(){
	float menor=100,mayor=0,temperatura,media_tem,suma_tem=0;
	for(int c=0;c<24;c+=4){
	cout<<" Ingresa la temperatura de la hora "<<c<<" :"; cin>>temperatura;
	suma_tem=suma_tem+temperatura;
	
	if(temperatura>mayor){
		mayor=temperatura;
	}
	if(temperatura<menor){
		menor=temperatura;
	}
	}
	media_tem=suma_tem/6;
	cout<<"\n La suma de la temperatura es: "<<suma_tem;
	cout.precision(3);
	cout<<"\n La temperatura media es: "<<media_tem;
	cout<<"\n La temperatura mayor es: "<<mayor;
	cout<<"\n La temperatura menor es: "<<menor;
	getch();
}

