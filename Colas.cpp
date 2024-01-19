#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

main (){
	system("color 0A");
    setlocale(LC_ALL, "spanish");
	int datos[10]={0};
	int opcion,i,j,f,num_datos,ultimo,pu;
	
	while(opcion!=3){
		system("cls");
	cout<<"\n\t MENU DE COLAS 7v7"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<" 0. Entrada de datos "<<endl;
	cout<<" 1. Salida de datos "<<endl;
	cout<<" 2. Impresión "<<endl;
	cout<<" 3. Salir"<<endl;

	cout<<"\n Ingresa la opcion deseada: ";
	cin>>opcion;
	
	switch(opcion){
		
		case 0: 
		system("cls");
		cout<<endl<<" Entrada de datos"<<endl;
		
		cout<<" Ingresa el numero de datos a ingresar: "; cin>>num_datos;
		if(num_datos>10){
			cout<<"\n Demaciados elementos para este arreglo."<<endl;
		}
		else {
		for(int i=0;i<num_datos;i++){
			cout<<" Ingresa el dato ["<<i<<"] : "; cin>>datos[i];
			ultimo=i;
		}
		}
		for(int i=ultimo+1;i<=10;i++){
			datos[i]=0;
		}	
		
		break;
		
		case 1:
		system("cls");
		cout<<"\n Salida de datos "<<endl;
			if(datos[0]==0){
			cout<<"\n No hay datos en la cola "<<endl;	
			}
			else
			{
				
			for(i=0;i<pu;i++){
				datos[i]=datos[i+1];		
			}
			cout<<"\n Dato eliminado "<<endl;
			}
		cout<<endl;	
		system("pause");
		system("cls");
		break;
			
		case 2: 
		system("cls");
		cout<<endl<<" Impresión de la cola "<<endl;
		if(datos[0]==0){
		cout<<" Cola Vacia"<<endl;
		}
		else{
		for(int i=0;i<10;i++)
		{
		cout<<"    "<<i<<"    "<<datos[i]<<"\n";	
		}	
		}
		cout<<endl;	
		system("pause");
		system("cls");
		
		break;
					
		case 3: 
		exit(1);
		break;
		
		default:
		cout<<"\n La opcion que seleccionaste no existe."<<endl;		
	}
}			
}



