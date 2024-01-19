#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>
struct nodo
{
    char dato[50];
    int id;
    char marca[50];
	struct nodo *der,*izq;
};
	
	
using namespace std;
int main()
{
	setlocale(LC_ALL, "spanish");
    int opc,n,i,suma,d,band,x,cont,j,temp;
    nodo *p=NULL,*f=NULL,*aux,*nuevo,*aux2,*aux3;
    fstream archivo("llenado.txt");
	string texto;			   
    
   while(1)
   {
   		cout<<"\n";
       cout<<"  -----------------Menu-----------------";
       cout<<"\n 1.  Mostrar instrumentos\n 2.  Ingresar un instrumento";
       cout<<"\n 3.  Buscar un instrumento\n";
       cout<<" 4.  Eliminar un instrumento\n";
       cout<<"\n Selecciona una opción: ";
       cin>>opc;
       cout<<"\n";
       switch(opc)
       {
           case 1://Imprimir
           cout<<"\n";
               aux=p;
               if(aux==NULL){
               	cout<<"  ---------Intrumentos----------\n";
                   while(!archivo.eof()){
					getline(archivo,texto);
					cout<<texto<<endl;
					}
               }
                   
               else
               {
                   cout<<"  ---------Intrumentos----------\n";
                   
				   while(!archivo.eof()){
					getline(archivo,texto);
					cout<<texto<<endl;
					}
				   cout<<"\n";
				   
				   while(aux!=NULL){
                       cout<<" "<<aux->dato<<" ";
                       cout<<" "<<aux->id<<" ";
                       cout<<" "<<aux->marca<<" ";
                       cout<<"\n";
                       aux=aux->der;
                   }
                   cout<<"\n\n";
                }
                cout<<"\n";
               break;
               
           case 2://Insertar
        
               if(p==NULL)
               {
               	if(!archivo.is_open()){
                   	archivo.open("llenado.txt",ios::out); 
           		}
                   fflush(stdin);
				   p=new(nodo);
                   fflush(stdin);
                   
				   cout<<" Ingresa el Nombre del instrumento: ";
               	   fflush(stdin);
                   cin>>p->dato;
                   cout<<" Ingresa el ID del instrumento: ";
               	   fflush(stdin);
                   cin>>p->id;
                   cout<<" Ingresa la marca del instrumento: ";
               	   fflush(stdin);
                   cin>>p->marca;
                   
                   archivo << " Instrumento: "<< p->dato <<endl;
                   archivo << " ID: "<< p->id <<endl;
                   archivo << " Marca: "<< p->marca <<endl;
                   archivo.close();
		    	
				   p->der=NULL;
                   p->izq=NULL;
                   f=p;
                   fflush(stdin);
                   
				   cout<<endl<<" Datos guardados."<<endl;
               }
               else
               {
               	if(!archivo.is_open()){
                   	archivo.open("llenado.txt",ios::out); 
           		}
					  
				   fflush(stdin);
                   aux=new(nodo);
                   fflush(stdin);
	               
				   cout<<" Ingresa el Nombre del instrumento: ";
                   cin>>aux->dato;
                   fflush(stdin);
                   cout<<" Ingresa el ID del instrumento: ";
               	   fflush(stdin);
				   cin>>aux->id;
                   cout<<" Ingresa la marca del instrumento: ";
                   fflush(stdin);
				   cin>>aux->marca;
                   
                   archivo << " Instrumento: "<< aux->dato <<endl;
                   archivo << " ID: "<< aux->id <<endl;
                   archivo << " Marca: "<< aux->marca <<endl;
               	   
               	   archivo.close();
		    	
				   aux->der=NULL;
                   aux->izq=f;
                   f->der=aux;
                   f=aux;
                   fflush(stdin);
				   
				   cout<<endl<<" Datos guardados."<<endl;
           		}
				
           		break;
           /*
		   case 4://Eliminar x
               if(p==NULL)
                   cout<<"* * * Lista vacía * * *\n";
               else
               {
                   band=0;
                   cout<<"Ingresa x: ";
                   cin>>x;
                   aux=p;
                   while(aux!=NULL)
                   {
                       if(x==aux->dato)
                       {
                           band=1;
                           if(p==f)//único nodo
                           {
                               delete(p);
                               p=NULL;
                           }
                           else//más de un nodo en la lista
                           {
                               if(x==p->dato)//primer nodo
                               {
                                   p=p->der;
                                   p->izq=NULL;
                                   aux->der=NULL;
                                   delete(aux);
                               }
                               else
                               {
                                   if(x==f->dato)//fin de la lista
                                   {
                                       f=f->izq;
                                       f->der=NULL;
                                       aux->izq=NULL;
                                       delete(aux);
                                   }
                                   else//centro de la lista
                                   {
                                       aux2=aux->izq;
                                       aux3=aux->der;
                                       aux2->der=aux3;
                                       aux3->izq=aux2;
                                       aux->der=NULL;
                                       aux->izq=NULL;
                                       delete(aux);
                                   }
                               }
                           }
                           break;
                       }
                       aux=aux->der;
                   }
               }
               if(band==0)
                   cout<<"* * * Dato NO encontrado * * *\n";
               break;
           */        
               
               case 3://Búsqueda
               int b_id,op_b, bca;
               cout<<" 1. Busqueda por ID"<<endl;
               cout<<" 2. Busqueda por Nombre"<<endl;
               cout<<" Selecciona la opcion deseada "<<endl;
               cin>>op_b;
               switch(op_b){
               	case 1: 
               if(p==NULL)
                   cout<<"* * * Lista vacía * * *\n";
               else
               {
                   band=0;
                   cout<<" Ingresa el ID del producto: "<<endl;
               	   cin>>b_id;
				   aux=p;
                   while(aux!=NULL)
                   {
                       if(b_id==aux->id)
                       {
                           band=1;
                           cout<<" Intrumento encontrado en la lista \n";
                           cout<<" "<<aux->dato<<" ";
                       		cout<<" "<<aux->id<<" ";
                       		cout<<" "<<aux->marca<<" ";
                       		cout<<"\n";
                       break;
                       }
                       aux=aux->der;
                   }
                   if(band==0)
                       cout<<"* * * Dato NO encontrado en la lista * * *\n";
               }
               	
               }
               break;
           /*
		   case 10://Burbuja
               if(p==NULL)
                   cout<<"* * * Lista vacía * * *\n";
               else
               {
                   cont=0;
                   aux=p;
                   while(aux!=NULL)
                   {
                       cont++;
                       aux=aux->der;
                   }
                   cout<<"Total de datos: "<<cont<<"\n";
                   cout<<"Método Burbuja\n";
                   for(i=1;i<cont; i++)//Pasadas
                   {
                       aux=p;
                       aux2=aux->der;
                       for(j=1;j<cont;j++)//Comparaciones
                       {
                           if(aux->dato>aux2->dato)
                           {
                               temp=aux->dato;
                               aux->dato=aux2->dato;
                               aux2->dato=temp;
                           }
                           aux=aux2;
                           aux2=aux2->der;
                       }
                   }
               }
               break;               
               */
}
}
}


