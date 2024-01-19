#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<fstream>

struct nodo
{
    int dato;
    struct nodo *ant,*sig;
};
	
	
using namespace std;

int main()

{
	setlocale(LC_ALL, "spanish");
    int opc,n,i,suma,d,band,x,cont,j;
    nodo *p=NULL,*f=NULL,*temp,*temp2,*aux2,*aux3,*nuevo,*aux;
 
 	while (opc!=30)
{
    cout<<endl;
   cout<< "         M E N U   \n";
   cout<<endl;
    cout<< " 1.  Insertar a la izquierda \n";
    cout<< " 2.  Insertar a la derecha \n";
    cout<< " 3.  Imprimir Izq-Der  \n";
    cout<< " 4.  Imprimir Der-Izq \n";
    cout<< " 5.  Eliminar Inicio  \n";
    cout<< " 6.  Eliminar Final  \n";
    cout<< " 7.  Ingresar aleatorios  \n";
    cout<< " 8.  Insertar cada N nodos  \n";
    cout<< " 9.  Eliminar cada N nodos  \n";
    
    cout<< " 30.  Salir  \n";
    
    cout<< "\n Seleccione una opcion: ";
   	cin>>opc;
	switch (opc)
	{
	case 1: 
	if(p==NULL){
		p=new(nodo);
		cout<<" Ingrese el dato: ";
		cin>>p->dato;
		p->sig=p;
		p->ant=p;
		f=p;
	}
	else{
		aux=new(nodo);
		cout<<" Ingrese el dato: ";
		cin>>aux->dato;
		aux->ant=f;
		aux->sig=p;
		p->ant=aux;
		f->sig=aux;
		p=aux;
	}
	break;
	
	case 2:
	if(p==NULL){
		p=new(nodo);
		cout<<" Ingrese el dato: ";
		cin>>p->dato;
		p->sig=p;
		p->ant=p;
		f=p;
	}
	else{
		aux=new(nodo);
		cout<<" Ingrese el dato: ";
		cin>>aux->dato;
		aux->ant=f;
		aux->sig=p;
		f->sig=aux;
		p->ant=aux;
		f=aux;
	}
	break;
	
	case 3: //impresion izq-der
		if(p==NULL)
		cout<<" Lista vacia\n";
		else {
			aux=p;
			do{
				cout<<" "<<aux->dato<<" ";
				aux=aux->sig;
			}while(aux!=p);
		}
		break;
		
	case 4: //impresion der-izq
		if(p==NULL)
		cout<<" Lista vacia\n";
		else {
			aux=f;
			do{
				cout<<" "<<aux->dato<<" ";
				aux=aux->ant;
			}while(aux!=f);
		}
		break;
		
		
		case 5: //eliminar inicio
		if(p==NULL)
		cout<<(" Lista vacia\n");
		else
		{
			if(p==f) //lista solo tiene un nodo
			{
				p = NULL;
				f = NULL;
			}
			else
			{
				aux=p;
				p= p -> sig;
				p->ant=f;
				f->sig=p;
				aux->ant=NULL;
				aux->sig=NULL;
				delete(aux);
			}
		}
		break;
		
		case 6: //eliminar final
		if(p==NULL)
		cout<<(" Lista vacia\n");
		else
		{
			if(p==f) //lista solo tiene un nodo
			{
				p = NULL;
				f = NULL;
			}
			else
			{
				aux=f;
				f= f -> ant;
				f->sig=p;
				p->ant=f;
				aux->ant=NULL;
				aux->sig=NULL;
				delete(aux);
			}
		}
		break;
		
		
		case 7:
		cout<<" Ingresa el total de datos: ";
		cin>>n;
		for(i=1;i<=n;i++){
		if(p==NULL){
		p=new(nodo);
		p->dato=1+rand()%100;
		p->ant=p;
		p->sig=p;
		f=p;
	    }
	else{
		aux=new(nodo);
		aux->dato=1+rand()%100;
		aux->ant=f;
		aux->sig=p;
		f->sig=aux;
		p->ant=aux;
		f=aux;
	}	
		}
		cout<<"\n Datos agregados "<<endl;
		
	break;

		case 8:
		if(p==NULL)
		cout<<" Lista vacia\n";
		else{
			cont=0;
			aux=p;
			do{
				cont++;
				aux=aux->sig;
			}while(aux!=p);
			cout<<" Total de datos= "<<cont;
			cout<<"\n Ingresa el valor de N: ";
			cin>>n;
			cout<<"\n Ingresa el valor de x: ";
			cin>>x;
			aux=p;
			i=1;
			j=1;
			do{
				if(j%n==0 && j!=0){
					if(aux!=f){
					aux2=aux->sig;
					nuevo=new(nodo);
					nuevo->dato=x;
					nuevo->sig=aux2;
					nuevo->ant=aux;
					aux2->ant=nuevo;
					aux->sig=nuevo;
					j=-1;
					}
				else{
					nuevo=new(nodo);
					nuevo->dato=x;
					nuevo->sig=p;
					nuevo->ant=aux;
					p->ant=nuevo;
					aux->sig=nuevo;
					f=nuevo;
					j=-1;
				}
			}
			aux=aux->sig;
			j++;
			i++;
		}while(i<=(cont/n)+cont);
	}
		break;
		
		
		case 9:
		if(p==NULL)
		cout<<" Lista vacia\n";
		else{
			cont=0;
			aux=p;
			do{
				cont++;
				aux=aux->sig;
			}while(aux!=p);
		cout<<"\n Ingresa el valor de N: ";
		cin>>n;
		aux=p;
		aux2=aux->sig;
		i=1;
		j=1;
		do{
			if(j%n==0){
					if(aux2!=p){
					aux3=aux2->sig;
					aux->sig=aux3;
					aux3->ant=aux;
					aux2->sig=NULL;
					aux2->ant=NULL;
					delete(aux2);
					aux2=aux3;
					if(aux2==f)
					f=aux;
					j=0;
					i++;
					}
		}
		aux=aux2;
		aux2=aux2->sig;
		i++;
		j++;
	}while(i<=cont);
}
		break;
		
		case 30:
			exit(1);
			break;
			
		
	}
    
}
}
