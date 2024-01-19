#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int datos[10]={0};//Declaracion del arreglo e inicializacion
	int suma=0, max=0, pmax, min=100, qmin, resta=0, n, opc;
	while(opc!=6){
	cout<<"----------MENU------------------"<<endl;
	cout<<"0. Impresion del arreglo"<<endl;
	cout<<"1. Inicializacion manual"<<endl;
	cout<<"2. Inicialización aleatoria"<<endl;
	cout<<"3. Sumatoria de los elementos del arreglo"<<endl;
	cout<<"4. Encuentra el valor máximo"<<endl;
	cout<<"5. Encuentra el valor mínimo"<<endl;
	cout<<"6. Busqueda"<<endl;
	cout<<"7. Promedio"<<endl;
	cout<<"8. Mayores al promedio"<<endl;
	cout<<"9.Salir";
	cout<<"Por favor ingrese la opcion del menú"<<endl;
	cin>>opc;
		
	switch(opc)
	{
		case 0: //impresion arreglo
		cout<<"Contenido del arreglo"<<endl;
		cout<<"Subíndice     Valor almacenado"<<endl;
		for(int i=0; i<=10; i++)
		cout<<"     "<<i<<"  "<<datos[i]<<endl;
		break;
		
		case 1: //Inicialización manual
		cout<<" Por favor ingrese los datos que quiera en su arreglo"<<endl;
		cin>>n;
		if (n<=10){
			for (int i=0;i<n;i++)
			{
				cout<<"ingresa el valor de los datos, por favor"<<endl;
				cin>>datos[i];
			}
		}
		else {
			cout<<"Son muchos datos"<<endl;
		}
		break;
		case 2: //Inicializacion aleatoria	
		srand(time(NULL));
		for(int i=0; i<10; i++) //Inicializa el arreglo a 1
		{
		datos[i]=1+rand()%100;
		cout<<"      "<<i<<"        "<<datos[i]<<"\n";	
		}
		break;
		case 3: //Sumatoria de los datos del arreglo
		srand(time(NULL));
		for(int i=0; i<10; i++) //Inicializa el arreglo a 1
		{
		datos[i]=1+rand()%100;
		cout<<"      "<<i<<"        "<<datos[i]<<"\n";
		suma=suma+datos[i];	
		cout<<"La sumatoria del arreglo es:"<<suma<<"\n";
		}
		break;
		case 5: //Valor máximo
		if(n==0){
			cout<<"El arreglo esta vacio"<<endl;
		}
		else {
			for(int i=0; i<10; i++){
			if (datos[i]>max){//encuentra el valor max
			max=datos[i];
			pmax=i;
			}
		}
			
		}
		break;
		case 6: //Valor minimo
		if(n==0){
			cout<<"El arreglo esta vacio"<<endl;
		}
		else {
			for(int i=0; i<10; i++){
			if (datos[i]<min){//encuentra el valor minimo
			min=datos[i];
			qmin=i;
			}
		}
		}
		break;
	}
	
	}
	
}
