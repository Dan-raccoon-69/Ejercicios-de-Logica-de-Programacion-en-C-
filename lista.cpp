//// **Listas Simples  Tipo A ** ///
   
 
#include <iostream>
#include <time.h>
#include <stdlib.h>

struct nodo 
{
	int dato; //C1 entero
	struct nodo *liga; //C2 struct nodo
};
using namespace std;
int main ()

{
	int opc, n ,i,suma,d,band,x;
	nodo *p=NULL,*f ,*aux,*nuevo,*aux2,*aux3, *par ;
	while (1)
{
	cout<<endl;
   cout<< "**  M E N U   **** \n";
   cout<<endl;
    cout<< "0.  Imprimir \n";
    cout<< "1.  Insertar aleatorios \n";
    cout<< "2. Eliminar primos  \n";
    
    cout<< " \n Seleccione una opcion: ";
    
	cin>>opc;
	switch (opc)
	{
		case 0:// IMPRIMIR 
		aux=p;
		if(aux==NULL)
		cout<< "\n ------ Lista vacia ----- \n "<<endl;
		else {
			cout<< "\n  * * * Contenido de la lista  * * *"<<endl;
			while (aux!=NULL )
			{
				cout<<aux->dato<<" ";
				aux=aux->liga;
			}
		    cout<< "  \n "	;
		}
		break;
		case 1: //ALEATORIOS
		srand(time(NULL));
		for(i=0; i<=20; i++)
		{
			if (p==NULL)
			{
				p=new(nodo);
				p->dato= 1+rand()%100;
				p->liga=NULL;
				f=p;		
			}
			else
			{
				aux=new (nodo);
				aux-> dato=1+rand()%100;
				aux->liga=NULL;
				f->liga=aux;
				f=aux;
			}
		}
		break;
	case 2://ELIMINAR NUMEROS PRIMOS
			if(p==NULL)
				cout<<" lista vacia  "<<endl;
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
				break;
	}
}
}
