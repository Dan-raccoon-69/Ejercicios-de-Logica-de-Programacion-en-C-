////////////////// PILA //////////

#include <conio.h>
#include <stdlib.h>
#include  <iostream>
#include<time.h>

using namespace std;

int main()
{     
    system("color 0C");
    setlocale(LC_ALL, "spanish"); //Acentos 
    int datos[10]= {0,0,0,0,0,0,0,0,0,0}; //  DECLARACION 
    int cima=-1,n, a , opc;

   while(1)
     {
       cout<<endl;   	
       cout<<"----------- M  E  N  U -------------------";
       cout<<endl;
       cout<<"\n 1. PUSH   / Insertar datos   ";
       cout<<"\n 2. POP   / Eliminar dato";
       cout<<"\n 3. IMPRIMIR ARREGLO ";
       cout<<"\n 4. SALIR  \n";
       cout<<"\n ------------------------------------------";
       cout<<"\n\n    Selecciona una opción: ";
       cin>>opc;
       cout<<"\n";
       switch(opc)
       {
       	
       	case 1 : // PUSH -  INSERTAR DATOS 
    
     	cout<<"¿Cuántos datos quieres ingresar? ";
     	cout<<endl;
       	cin>>n; 
		    if(n>10){
			cout<<"\n Excedes el tamaño de la pila ."<<endl;
		}
       	else { 	for (int i=0;i<n;i++) {
       	cout<< "Introduzca el dato: ";
	   cin>>datos[cima+1];
	   cout<<endl;
	   cima++; }
	   cout<<" Se agregaron los datos a la pila"<<endl;
       } 
	   	
	      break; 
	   
	   case 2 : 
	   if (cima>-1 ) {
	   	cima--; 
	   	cout<<"Se elimino el dato * " << datos[cima+1] <<" * de la pila "<<endl; 
	   }
	   else {
	   	cout<<"Pila vacia"<<endl;
	   }
	   break;
	   
	   case 3: 
	    if (cima>-1){
	    	for (int a=cima; a>-1; a--) {
	    	cout <<"  "<<datos[a]<< "\n";
	    	cout<<endl;
			}
		}
	   else 
	   {
	   	cout << "Pila vacia "<<endl;
	   }
	   
	   break; 

}}}
