#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

main (){
	int opcion,num_datos,buscar_numero,posicion_buscar,pos,n,nt,pu,bloque,x,j,new_dato,contador_modificados=0,v=0,inicio,inicio_i=1,der,m;
	float promedio=0,suma_promedio=0,mayor_promedio=0;
	int datos[10]={0};

	
	int i,contador, cont=1,suma=0,mayor=0,posicion,minimo=101,posicion_minimo,aux,izq,k,u,s;
	char band='F';
	srand(time(NULL));
		/*
		cout<<" Numero de datos: ";
		cin>>num_datos;
		*/
		if(num_datos>10){
			cout<<"\n Demaciados elementos."<<endl;
		}
		else {
		for(int i=0;i<10;i++){
		datos[i]=1+rand()%100;		
		pu=i;
		}	
		
		cout<<endl<<" Impresion"<<endl;
		for(int i=0;i<10;i++)
		cout<<"    "<<i<<"    "<<datos[i]<<"\n";	
		
		}
		
		cout<<endl<<" Ordenamiento"<<endl;
		for( i=0;i<=9;i++){
		for( j=0;j<=9;j++){
			if(datos[j]>datos[j+1]){ 
				
				aux=datos[j];
				datos[j]=datos[j+1];
				datos[j+1]=aux;
				
			}
		}
		}
		for( j=0;j<10;j++){
		cout<<" "<<datos[j]<<"  ";
		//cout<<"\n";		
		
		}
	
}

				




		
