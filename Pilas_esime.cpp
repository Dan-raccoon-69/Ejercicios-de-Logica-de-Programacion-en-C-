////////////////// PILA //////////
#include <conio.h>
#include <stdlib.h>
#include  <iostream>
#include<time.h>

 
struct nodo
{
    int dato;       
    struct nodo *sig;
};

using namespace std;
int main()
{    int datos[10]; //  DECLARACION DEL ARREGLO
    system("color 50");
    int opc,n,y=2,i,ca=0;
    nodo *p=NULL, *f=NULL;
   while(1)
   {
       cout<<endl;   	
       cout<<"----------- M  E  N  U -------------------";
       cout<<endl;
       cout<<"\n 1. PUSH   / Insertar datos   ";
       cout<<"\n 2. POP   / Eliminar datos ";
       cout<<"\n 3. IMPRIMIR ARREGLO ";
       cout<<"\n 4. SALIR  \n";
       cout<<"\n ------------------------------------------";
       cout<<"\n\n    Selecciona una opción: ";
       cin>>opc;
       cout<<"\n";
       switch(opc)
       {
       	
       	case 1 : // PUSH -  INSERTAR DATOS 
		{
       if(!p)
       {
        p=new(nodo);
        cout<<"Ingrese el dato: ";
        cin>>p->dato;
        p->sig=NULL;
        cout<<endl;
		}
      
      else {
        f=new(nodo);
        cout<<"\nIngrese el dato : ";
        cin>>f->dato;
        f->sig=p;
        p=f;
        cout<<endl;
        }
    
    }
		break;
       	
       	case 2 : // POP - ELIMINAR DATOS 
          {
        if(!p)
        {
        cout<<"\n\n Lista vacia ";
        cout<<endl;
        }
        else
        f=new(nodo);
        f=p;
        cout<<"\n\nDato eliminado: " <<f->dato<<endl;
        cout<<endl;
        p=f->sig;
         delete(f);
          
         }
	break;
          
       	case 3 : // IMPRESION 
      if(!p)
        {
        cout<<"\n\n Lista vacia ";
        cout<<endl; }  
        else    {
    cout << " CONTENIDO DE PILA "<<endl;  
    f=p;
    while(f)
    {
    ca++;
    f=f->sig;
     }
   
   for(i=0;i<=ca;i++)
    {
   cout<<" ";
    }  /////contenido de la pila 
    i=0;
    f=p;

 while(f)
     {
   cout<<"\n";
   cout<<++i<<")  "<<f->dato;
    f=f->sig;
    }
    }
    cout<<endl; 
    break ;
       		
       	case 4:  //SALIDA DEL ARREGLO 
		exit (0);
		break;
       	
	   } //switch
} //while
} // int main
