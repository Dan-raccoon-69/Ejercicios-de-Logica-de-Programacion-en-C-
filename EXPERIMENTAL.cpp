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
void modif()
{
	cout<<"\n\t\tADMIN\n\t0.modificar ID\n\t1.modificar NOMBRE\n\t2.modificar MODELO\n\t3.modificar MARCA\n\t4.modificar PRECIO\n\t5.modificar UNIDADES"<<endl;
  	cout<<"\n\nINGRESA UNA OPCION--->:";
}
void modifsw(int opc2,inventario *aux,carrito *ID,carrito *nombre,carrito *modelo,carrito *marca,carrito *precio, carrito *cantidad)
{
 switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}
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
	
	int opc1,cont,id_p,band,precio,total_precio=0,seguir_agregando,contd=0,band2,opc2;
	inventario *p=NULL,*f,*aux,*aux1,*aux2,*aux3;
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
	    	
	    	case 0:{ //IMPRESION DEL INVETARIO
			aux=p;
			if(aux==NULL)
			{
				cout<<"NO CONTAMOS PRODUCTOS DENTRO DEL INVENTARIO\n";
			}
			else 
			{
			while(aux!=NULL){
            cout<<"\n";       
			cout<<" ID: "<<aux->ID<<endl;
			cout<<" Nombre: "<<aux->nombre<<endl;
			cout<<" Modelo: "<<aux->modelo<<endl;
			cout<<" Marca: "<<aux->marca<<endl;
			cout<<" Precio: "<<aux->precio<<endl;
			cout<<" Cantidad: "<<aux->cantidad<<endl;
			cout<<"\n";
            aux=aux->der;
			}
			}
            break;
			}
			
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
			
			case 2:{// ELIMINAR PRODUCTO
				reescribirBloc(p);
				if(p==NULL)
                   cout<<"NO CONTAMOS PRODUCTOS DENTRO DEL INVENTARIO\n";
               else
               {
                   band=0;
                   cout<<"Ingresa ID: ";
                   cin>>id_p;
                   aux=p;
                   while(aux!=NULL)
                   {
                       if(id_p==aux->ID)
                       {
                           band=1;
                           if(p==f)//UNICO PRODUCTO
                           {
                               delete(p);
                               p=NULL;
                           }
                           else//MAS DE UN PRODUCTO
                           {
                               if(id_p==p->ID)//PRIMER INSTRUMENTOS
                               {
                                   p=p->der;
                                   p->izq=NULL;
                                   aux->der=NULL;
                                   delete(aux);
                               }
                               else
                               {
                                   if(id_p==f->ID)//FIN DE LOS INSTRUMENTOS
                                   {
                                       f=f->izq;
                                       f->der=NULL;
                                       aux->izq=NULL;
                                       delete(aux);
                                   }
                                   else//CENTRO
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
               reescribirBloc(p);
			   if(band==0)
                   cout<<"NO SE ENCONTRO EL ID DEL PRODUCTO\n";
               
			   break;
	
			}
			
			case 3:{
				if(p==NULL)
                   cout<<"NO CONTAMOS PRODUCTOS DENTRO DEL INVENTARIO\n";
               else
               {
                   band=0;
                   cout<<"Ingresa ID: ";
                   cin>>id_p;
                   aux=p;
                   while(aux!=NULL)
                   {
                       if(id_p==aux->ID)
                       {
                           band=1;
                           if(p==f)//UNICO PRODUCTO
                           {
                               modif();cin>>opc2;
                                switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}
                           }
                           else//MAS DE UN PRODUCTO
                           {
                               if(id_p==p->ID)//PRIMER INSTRUMENTOS
                               {
                                   modif();cin>>opc2;
                                switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}
                               }
                               else
                               {
                                   if(id_p==f->ID)//FINAL DE LOS INSTRUMENTOS
                                   {
                                       modif();cin>>opc2;
                                switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}
                                   }
                                   else//CENTRO
                                   {
                                       modif();cin>>opc2;
                                switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}
                                   }
                               }
                           }
                           break;
                       }
                       aux=aux->der;
                   }
               }
               if(band==0)
                   cout<<"NO SE ENCONTRO EL ID DEL PRODUCTO\n";
               reescribirBloc(p);
			   break;
				
			}
				break;
			
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


          /*                         switch(opc2)
{
	case 0:
		{
			cout<<"INGRESA EL NUEVO ID:\n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE:\n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO:\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA:\n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO:\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES:\n";
		        cin>>aux->cantidad; break;
			}
			
}

*/

