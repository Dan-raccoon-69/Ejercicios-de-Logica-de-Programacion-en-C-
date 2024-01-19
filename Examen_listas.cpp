#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct nodo {
	int dato;
	struct nodo *liga;
};

int main (){
	int opc, n, i, suma, d , band, x,c=0;
	nodo *p=NULL, *f, *aux,*nuevo, *aux2;
	
	while(opc!=3){
	cout<<"\n\t MENU "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<" 0. Imprimir "<<endl;
	cout<<" 1. Insertar aleatorio "<<endl;
	cout<<" 2. Eliminar primos "<<endl;
	cout<<" 3. Salir "<<endl;
	cout<<"\n Ingresa la opcion deseada: ";
	cin>>opc;
	switch (opc){
	
	case 0:	
		cout<<"\n Contenido de la lista "<<endl;
		aux=p;
		if(aux==NULL){
		cout<<"\n Lista vacia \n";
		}
		else {
			while(aux!=NULL){
				cout<<" "<<aux->dato<<" ";
				aux=aux->liga;
			}
			cout<<"\n";
		}
		
		break;	
		
	case 1:
	srand(time(NULL));
			for(i=1;i<=20;i++){
			if(p==NULL){
				p=new(nodo);
				p->dato=1+rand()%100;
				p->liga=NULL;
				f=p;
			}
			else {
				aux=new (nodo);
				aux->dato=1+rand()%100;
				aux->liga=NULL;
				f->liga=aux;
				f=aux;
			}
			}
		cout<<"\n Datos agregados"<<endl;	
			
		break;
		
		
		case 2:
		if(p==NULL){
			cout<<" lista vacia  "<<endl;
				
		}
				else
				{
					while(p&&p->dato%2!=0)
					{
						aux=p;
						p=p->liga;
						delete(aux);
					}
					aux=p;
					while(aux&&aux->liga!=NULL)
					{
						while(aux->liga&&aux->liga->dato%2!=0)
						{
							aux2=aux->liga;
							aux->liga=aux2->liga;
						}
						aux=aux->liga;
					}
				}
			
		cout<<"\n Datos eliminados "<<endl;
		
		break;
		default:
		cout<<"\n La opcion que seleccionaste no existe."<<endl;
	}
	
}
}
