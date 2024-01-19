#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include <fstream>
using namespace std;

struct inventario//informacion de los productos
{
	int ID;
	string nombre, modelo, marca;
	float precio;
	int cantidad;
	struct inventario *der,*izq;
};

struct carrito{
	int ID;
	string nombre;
	float precio;
	int cantidad;
};

//FUNCIONES PROTOTIPO
void marge()
{
	for(int i=0;i<20;i++) printf("%c",178);
}

void opc()
{
	setlocale(LC_ALL, "spanish");
    
  	cout<<"\n\t\tADMIN\n\t0.Imprimir inventario\n\t1.Añadir producto\n\t2.Eliminar producto\n\t3.Modificar producto\n\n\t\tUSUARIO\n\t4.Añadir producto al carrito\n\t5.Quitar producto del carrito\n\t6.Finalizar compra / Imprimir ticket\n\n"<<endl;
  	for(int i=0;i<44;i++)printf("%c",205);
  	cout<<"\n\nINGRESA UNA OPCION--->:";
}


void reescribirBloc(inventario *primero){
	int i=0;
	string L;
	inventario *auxiliar;
	auxiliar=primero;
	ofstream F("PRODUCTOS.txt",ios::out|ios::trunc);
	while(auxiliar!=NULL){
		F << auxiliar->ID <<" "<< auxiliar->nombre << " " << auxiliar->modelo << " " << auxiliar->marca <<" "<< auxiliar->precio <<" "<< auxiliar->cantidad << "\n";
		auxiliar=auxiliar->der;
	}
	F.close();	
}

// FUNCION PRINCIPAL
int main()
{
	
	int opc1,cont,id_p,band,precio,total_precio=0,seguir_agregando;
	inventario *p=NULL,*f,*aux;
	carrito *p1=NULL,*f1,*aux0;
	string texto;
	
	//LLENADO DE LISTA
	int i=0;
	string L;
	ifstream U("PRODUCTOS.txt");
	while ( getline (U,L) )
    {
    	i++;
    }
	U.clear();
	U.seekg(0);
	for(int n=0;n<i;n++){
		if(p==NULL){
            p=new(inventario);
            U >> p->ID >> p->nombre >> p->modelo >> p->marca >> p->precio >> p->cantidad;
            p->der=NULL;
            p->izq=NULL;
            f=p;
        }else{
            aux=new(inventario);
            U >> aux->ID >> aux->nombre >> aux->modelo >> aux->marca >> aux->precio >> aux->cantidad;
            aux->der=NULL;
            aux->izq=f;
            f->der=aux;
            f=aux;
        }
	}
	U.close();
	
	//MENU
	while (opc1!=30)
	{
     	marge();cout<<"MENU"; marge();
	    opc();
	    cin>>opc1;
	    system("cls");
	    switch(opc1){
	    	
	    	case 0:{
	    	
			break;
		
			case 1:{
			if(p==NULL){
            p=new(inventario);
            cout<<" ID: ";
			cin>>p->ID;
			cout<<" Nombre: ";
			cin>>p->nombre;
			cout<<" Modelo: ";
			cin>>p->modelo;
			cout<<" Marca: ";
			cin>>p->marca; 
			cout<<" Precio: ";
			cin>>p->precio;
			cout<<" Unidades: ";
			cin>>p->cantidad;
			
            p->der=NULL;
            p->izq=NULL;
            f=p;
        	}
			else{
            aux=new(inventario);
            cout<<" ID: ";
			cin>>aux->ID;
			cout<<" Nombre: ";
			cin>>aux->nombre;
			cout<<" Modelo: ";
			cin>>aux->modelo; 
			cout<<" Marca: ";
			cin>>aux->marca;
			cout<<" Precio: ";
			cin>>aux->precio;
			cout<<" Unidades: ";
			cin>>aux->cantidad;
			aux->der=NULL;
            aux->izq=f;
            f->der=aux;
            f=aux;
        	}
        	reescribirBloc(p);
        	system("cls");
	    	break;
			}
			
			case 2:{
				reescribirBloc(p);
				break;
			}
			
			case 3:{
				reescribirBloc(p);
				break;
			}
			
			case 4:{
				if(p==NULL)
                   cout<<"* * * Lista vacía * * *\n";
               else
               {
               	do{
               	cout<<" Ingrese el ID del producto que desea agregar: ";
				cin>>id_p; 
                   band=0;
                   aux=p;
                   while(aux!=NULL)
                   {
                       if(id_p==aux->ID)
                       {
                           band=1;
                           cout<<"\n Intrumento encontrado en la lista"<<endl;
                           	cout<<" "<<aux->ID<<" ";
                           	cout<<" "<<aux->nombre<<" ";
                           	cout<<" "<<aux->modelo<<" ";
							cout<<" "<<aux->marca<<" ";
							cout<<" "<<aux->precio<<" ";
                       		precio=aux->precio;
                       		cout<<"\n Instrumento agregado a carro"<<endl;
                       		cout<<"\n";
                       break;
                       
                       }
                       aux=aux->der;
                   }
                   total_precio=precio+total_precio;
                   //cout<<total_precio<<endl;
                   cout<<" ¿Deseas volver a agregar un instrumento (si=1,no=0)?"; cin>>seguir_agregando;
                   if(band==0)
                       cout<<" Instrumento no encontrado en almacen \n";
               }while(seguir_agregando==1);		
               	}
               }
           	break;    	
               }
               
               
			case 5:{
				
				break;
			}
			
			case 6:{
				cout<<" Precio T: "<<total_precio<<endl;
				//reescribirBloc(p);
				break;
			}
		
	  	} //switch
   }//while
}//int main




