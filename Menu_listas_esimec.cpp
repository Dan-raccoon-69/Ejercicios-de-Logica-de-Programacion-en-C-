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
	nodo *p=NULL, *f, *aux,*nuevo, *aux2,*aux3,*nuevo2;
	
	while(opc!=20){
	cout<<"\n\t MENU "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<" 0. Imprimir "<<endl;
	cout<<" 1. Insertar a la derecha "<<endl;
	cout<<" 2. Insertar a la izquierda "<<endl;
	cout<<" 3. Insertar aleatorios a la derecha "<<endl;
	cout<<" 4. Insertar aleatorios a la izquierda "<<endl;
	cout<<" 5. Sumatoria "<<endl;
	cout<<" 6. Busqueda "<<endl;
	cout<<" 7. Insertar antes de X"<<endl;
	cout<<" 8. Insertar despues de X"<<endl;
	cout<<" 9. Modificar X"<<endl;
	cout<<" 10. Eliminar primer nodo"<<endl;
	cout<<" 11. Eliminar ultimo nodo"<<endl;
	cout<<" 12. Eliminar X"<<endl;
	cout<<" 13. Eliminar despues de X"<<endl;
	cout<<" 14. Eliminar antes de X"<<endl;
	cout<<" 15. Eliminar todos los pares"<<endl;
	
	cout<<" 20. Salir "<<endl;
	cout<<"\n Ingresa la opcion deseada: ";
	cin>>opc;
	
	switch (opc){
		case 0:
		cout<<"\n Imprimir "<<endl;
		aux=p;
		if(aux==NULL)
		cout<<"\n Lista vacia \n";
		else {
		cout<<"\n Contenido de la lista \n";
			while(aux!=NULL){
				cout<<" "<<aux->dato<<" ";
				aux=aux->liga;
			}
			cout<<"\n";
		}
		
		break;
		case 1:
			if(p==NULL){
				p=new(nodo);
				cout<<" Ingresa el dato: ";
				cin>>p->dato;
				p->liga=NULL;
				f=p;
			}
			else {
				aux=new (nodo);
				cout<<" Ingresa el dato: ";
				cin>>aux->dato;
				aux->liga=NULL;
				f->liga=aux;
				f=aux;
			}
			break;
			
		case 2:
		cout<<"\n Insertar a la izquierda "<<endl;
			if(p==NULL){
				p=new(nodo);
				cout<<" Ingresa el dato: ";
				cin>>p->dato;
				p->liga=NULL;
				f=p;
			}
			else {
				aux=new (nodo);
				cout<<" Ingresa el dato: ";
				cin>>aux->dato;
				aux->liga=p;
				p=aux;
			}
		break;	
		
		case 3:
			srand(time(NULL));
			cout<<" Cuantos datos deseas agregar: ";
			cin>>n;
			for(i=1;i<=n;i++){
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
		break;
		
		case 4:
			srand(time(NULL));
			cout<<" Cuantos datos deseas agregar: ";
			cin>>n;
			for(i=1;i<=n;i++){
			if(p==NULL){
				p=new(nodo);
				p->dato=1+rand()%100;
				p->liga=NULL;
				f=p;
			}
			else {
				aux=new (nodo);
				aux->dato=1+rand()%100;
				aux->liga=p;
				p=aux;
			}
			}
		break;
		
		case 5:
			suma=0;
			if(p==NULL)
			cout<<" La suma es: "<<suma<<endl;
			
			else {
				aux=p;
				while(aux!=NULL){
					suma=suma+aux->dato;
					aux=aux->liga;
				}
				cout<<" Sumatoria: "<<suma<<endl;
			}
			break;


		case 6:
		if(p==NULL)
		cout<<"\n Lista vacia"<<endl;
		else {
			band=0;
			cout<<"\n Ingresa el dato a buscar: ";
			cin>>d;
			aux=p;
			while(aux!=NULL){
				if(d==aux->dato){
					band=1;
					cout<<endl<<" Dato encontrado :)"<<endl;
					break;
				}
				aux=aux->liga;
			}
			if(band==0)
			cout<<endl<<" Dato no encontrado :("<<endl;
		}
		
		break;		
		
		case 7:
		if(p==NULL)
		cout<<"\n Lista vacia"<<endl;
		else {
			band=0;
			cout<<"\n Ingresa X: ";
			cin>>x;
			aux=p;
			while(aux!=NULL){
				if(x==aux->dato){
					band=1;
					if(aux==p){
						nuevo=new(nodo);
						cout<<" Ingresa el dato: ";
						cin>>nuevo->dato;
						nuevo->liga=p;
						p=nuevo;
					}
					else {
						nuevo=new(nodo);
						cout<<" Ingresa el dato: ";
						cin>>nuevo->dato;
						aux2->liga=nuevo;
						nuevo->liga=aux;
					}
					break;
						}
				aux2=aux;
				aux=aux->liga;
			}
			if(band==0)
			cout<<endl<<" Dato no encontrado :("<<endl;
		}
		break;
		
		case 8:
			
		if(p==NULL)
		cout<<"\n Lista vacia"<<endl;
		else {
			band=0;
			cout<<"\n Ingresa X: ";
			cin>>x;
			aux=p;
			while(aux!=NULL){
				if(x==aux->dato){
					band=1;
					if(aux==f){
						aux2=new(nodo);
						cout<<" Ingresa el dato: ";
						cin>>aux2->dato;
						aux2->liga=NULL;
						f->liga=aux2;
						f=aux2;
					}
					else {
						aux2=new(nodo);
						cout<<" Ingresa el dato: ";
						cin>>aux2->dato;
						aux2->liga=aux->liga;
						aux->liga=aux2;
						
					}
					break;
						}
				aux2=aux;
				aux=aux->liga;
			}
			if(band==0)
			cout<<endl<<" Dato no encontrado :("<<endl;
		}
		
		break;


		case 9:
		if(p==NULL)
		cout<<" Lista vacia"<<endl;
		else {
			band=0;
			cout<<" Ingresa x: "; cin>>x;
			aux=p;
			while(aux!=NULL){
				if(x==aux->dato){
					band=1;
					cout<<" Ingresa el dato: ";
					cin>>aux->dato;
					break;
				}
				aux=aux->liga;
			}
			if(band==0)
			cout<<" Dato No Encontrado :( "<<endl;
		}
		if(band==1)
		cout<<" Dato Modificado :) "<<endl;
		
		break;				
		
		case 10:
		if(p==NULL)
		cout<<" Lista vacia"<<endl;
		else {
			aux=p;
			if(aux==p && aux==f){ //si es el mismo nodo
				delete(aux);
				p=NULL;
			}
			else { //no es el mismo nodo
				p=p->liga; //pasa al nodo siguiente
				aux->liga=NULL;  //quita la direccion al que va elminar
				delete (aux); //lo borra
			}
		}
		cout<<" Dato borrado. "<<endl;
		break;

		
		case 11:
		if(p==NULL)
		cout<<" Lista vacia"<<endl;
		else {
			if(p==f){ //
				delete(p);
				p=NULL;
			}
			else { //
				aux=p;
				while(aux->liga!=NULL){
					aux2=aux;
					aux=aux->liga;
				}
				f=aux2;
				f->liga=NULL;
				delete (aux);
				}
		}
		cout<<" Dato borrado. "<<endl;
		break;

	
	case 12: // ELIMINAR X 
	if (p==NULL)
	cout << " ----Lista vacia--- "<<endl;
	else{
		band=0;
		cout<<" Ingresa x: ";
		cin>> x;
		aux=p;
		while(aux!=NULL){
			if(x==aux->dato){
				band=1;
				if(p==f){//UNICO NODO 
					delete(p);
					p=NULL;		
				}
				else{ // mas de un nodo en la lista 
				if(x==p->dato){ //PRIMER NODO 
				p=p->liga;
				aux->liga=NULL;
				delete(aux);
				}
					else{
						if(x==f->dato) {//fin de la lista 
							f=aux2;
							f->liga=NULL;
							delete(aux);
						}
						else{ // Centro de la lista 
						aux2->liga=aux->liga;
						aux	->liga=NULL;
						delete(aux);
						}
					}
				}
				break;
	    }
	    aux2=aux;
	    aux=aux->liga;
		}
        if (band==0)
         cout<< " No se encontro el dato \n";
		 }
		 break;
		
		case 13:
		if (p==NULL)
		cout << " ----Lista vacia--- "<<endl;
		else{
		band=0;
		cout<<" Ingresa x: ";
		cin>> x;
		aux=p;
		aux3=f;
		while(aux!=NULL){
			
			if(x==aux->dato){
				band=1;
				if(p==f){//UNICO NODO 
					cout<<" No hay ningun dato a la derecha a eliminar "<<endl;
				}
				else{ // mas de un nodo en la lista 
				if(x==aux->dato){ //PRIMER NODO 
				aux2=aux2->liga;
				aux=aux->liga;
				aux->liga=NULL;
				delete(aux);
				aux2->liga=aux;
				/*
				aux->liga=NULL;
				aux->liga=f;
				*/
				aux2->liga=f;
								
				
				//aux->liga=aux3;
				
				/*
				aux2=aux;
				aux=aux2->liga;
				aux->liga=NULL;
				delete(aux);
				aux->liga=aux;
				*/
				}
				else{
					 if(x==f->dato)
					 	cout<<" No hay ningun dato a la derecha a eliminar "<<endl;
				}
				
				}
				break;
	    }
	    aux2=aux;
	    aux=aux->liga;
	    }
        if (band==0)
         cout<< " No se encontro el dato \n";
		 }
		break;
	
		
		case 14:{
			
		if(p == NULL){                          //p - > direccion del primer elemento
			cout<<"* * * Lista vacía * * *\n";  //f - > direccion del ultimo elemento
		}else{
			band = 0;
			cout<<" Ingresa x: ";
			cin>>x;
			aux = p;
			if(p == f){//Si hay un unico nodo
				cout<<" No se puede eliminar ya que es el único nodo"<<endl;
				band = 1;
				break;
			}else if(x == aux->dato){
				cout<<" No se puede eliminar ya que no hay datos a la izquierda"<<endl;
				band = 1;
				break;
			}else{
				aux2 = aux;
				aux = aux->liga;
				if(aux->dato == x){//Se encuentra en la segunda posicion
					p = p->liga;
					aux2->liga = NULL;
					delete(aux2);
					band = 1;
				}else{
					aux = p;
					while(aux != NULL){
					if(aux->dato == x){
						aux3->liga = aux2->liga;
						aux2->liga = NULL;
						delete(aux2);
						band = 1;
						break;
					}
					aux3 = aux2;
					aux2  = aux;
					aux = aux->liga;
				}
				}
			}
			if(band == 0){
				cout<<" No se encontró el dato"<<endl;
			}
		}
		break;
	}
	
	case 15:
				x=0;
				band=0;
				aux=p;
				if(p==NULL)
						cout << " Lista vacia  \n";
				else{
					while(aux!=NULL) 	{
						aux=aux->liga;
						x++;
					}	
				}
				while(x!=0) {
					aux=p;
					while(aux!=NULL){
						if(aux->dato%2==0)	{
							band=1;
							if(p==f && p->dato%2==0) {
								delete(p);
								p=NULL;}
							else	{
								if(p->dato%2==0) 	{
									p=p->liga;
									aux->liga=NULL;
									delete(aux);	}
								else	{
									if(f->dato%2==0)	{
										f=aux2;
										f->liga=NULL;
										delete(aux);	}
									else if(aux->dato%2==0) 	{
										aux2->liga=aux->liga;
										aux->liga=NULL;
										delete(aux);
									}
								}
							}
							break;
						}
						aux2=aux;
						aux=aux->liga;
					}
					x--;
				}	
				if(band==0 && p!=NULL)
					cout << " No hay datos pares ";
					if(band==1){
					cout << " Datos eliminados \n";
					}
			break;
	
		 	
		case 20:
		exit(1);	
		break;
		
				
		default:
		cout<<"\n La opcion que seleccionaste no existe FIJATE."<<endl;
	}
	}
}


/*
case 13: // Eliminar despues de x 	
	  if(p==NULL)
		cout<<"\n ---- Lista vacia ---- \n";
		else
		{
			band=0;
			cout<<"Ingrese x: ";
			cin>>x;
			aux=p;
			while (aux!=NULL)
			{
				if(x==aux->dato)
				{
				band=1;
				 if(x==p->dato) //P NODO 
				{
					aux->liga=NULL;
					p->liga=aux;
					aux=NULL;
					delete (aux);
				}
				
				else 
				{
				if(x==f->dato) //fin de la lista 
					f->liga=aux->liga;
					aux->liga=f;	
					aux=NULL;
					delete (aux);	
				}
				break;
			}
			      aux2=aux;
			      aux=aux->liga;
				  }
				  if (band==0)
				  cout<<" ----Dato no encontrado--- \n";
			}
	break;
	*/
		
