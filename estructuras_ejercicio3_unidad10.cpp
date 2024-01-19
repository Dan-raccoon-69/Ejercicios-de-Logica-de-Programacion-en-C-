/* programa que le un arreglo de estructuras de datos de N empleados de la empresa y que imprima los datos 
del empleado con mayor y menor salario.  */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct{
	char nombre[50];
	float salario;
}empleado[50];
main(){
int n,posicion_mayor,posicion_menor,num_empleados;
	float mayor=0,menor=10000;
	
	cout<<" Escribe la cantidad de empleados a ingresar: "; cin>>num_empleados;
	for(n=1;n<=num_empleados;n++){
	fflush(stdin);
	cout<<"\n Escribe tu nombre completo comenzando por apellidos: "; cin.getline(empleado[n].nombre,50,'\n');
	cout<<" Escribe tu salario: "; cin>>empleado[n].salario;
	//mayor
	if(empleado[n].salario>mayor){
		mayor=empleado[n].salario;
		posicion_mayor=n;
	}
	//menor
	if(empleado[n].salario<menor){
		menor=empleado[n].salario;
		posicion_menor=n;
	}
	}
	//imprimiendo
	system("cls");
	cout<<"\n Tus datos son: "<<endl;
	//mayor
	cout<<"\n El nombre que tiene mayor salario es: "<<empleado[posicion_mayor].nombre<<endl;
	cout<<" Salario es: "<<empleado[posicion_mayor].salario<<endl;	
	//menor
	cout<<"\n El nombre que tiene menor salario es: "<<empleado[posicion_menor].nombre<<endl;
	cout<<" Salario es: "<<empleado[posicion_menor].salario<<endl;	
	getch();
}	

