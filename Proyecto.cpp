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

//FUNCIONES PROTOTIPO
void marge()
{
	for(int i=0;i<20;i++) printf("%c",178);
}

void opc()
{
	
	setlocale(LC_ALL, "spanish");
    cout<<endl;
    cout<<"--------------------------------------------";
    cout<<endl;
  	cout<<"|          A D M I N                         | \n";
	cout<<"|\t0.  Imprimir inventario              |\n";
	cout<<"|\t1.  Añadir artículo                  |\n";
	cout<<"|\t2.  Eliminar artículo                |\n";
	cout<<"|\t3.  Modificar artículo               |\n";
	cout<<"-------------------------------------------\n";
	cout<<endl;
	 cout<<"---------------------------------------------";
	 cout<<endl;
	cout<<"|           U S U A R  I O                      |\n";
	cout<<"|\t4.  Añadir artículo  al carrito         | \n";
	cout<<"|\t5.  Finalizar compra / Imprimir ticket  |\n";
	cout<<"|\t6.  Exit                                |\n";
	cout<<"---------------------------------------------";

	cout<<endl;
	
  	cout<<"\n\nINGRESA UNA OPCIÓN--->:";
}
void modif()
{
	cout<<"\n\t\t * ADMIN * \n"; 
	cout<<"---------------------------\n";
	cout<<"\t| 0.Modificar ID      |\n";
	cout<<"\t| 1.Modificar NOMBRE  |\n";
	cout<<"\t| 2.Modificar MODELO  |\n";
	cout<<"\t| 3.Modificar MARCA   |\n";
	cout<<"\t| 4.Modificar PRECIO  |\n";
	cout<<"\t| 5.Modificar UNIDADES|\n";
	cout<<"---------------------------\n"<<endl;
  	cout<<"\n\nINGRESA UNA OPCION--->:";
  
}

void reescribirBloc(inventario *primero){
	//int i=0;
	//string L;
	inventario *auxiliar;
	auxiliar=primero;
	ofstream F("PRODUCTOS.txt",ios::out|ios::trunc);
	while(auxiliar!=NULL){
		F << auxiliar->ID <<" "<< auxiliar->nombre << " " << auxiliar->modelo << " " << auxiliar->marca <<" "<< auxiliar->precio <<" "<< auxiliar->cantidad;
		auxiliar=auxiliar->der;
	}
	F.close();	
}

// FUNCION PRINCIPAL
int main()
{
	system("color 02");
	int opc1,total_cantidad2,cont,id_p,band,mov_id,new_id,precio,sub_total2,total_precio=0,seguir_agregando=0,contd=0,band2,opc2,total_cantidad,sub_total,total_art, finalizar_compra;
	inventario *p=NULL,*f,*aux,*aux1,*aux2,*aux3,*aux4;
	
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
     	cout<<endl;
     std::cout << "__________________________________________________________________________ \n";
    std::cout << "*************************     ********  *****  *************************\n";
    std::cout << "*******   ************* ******* ******  *****  ************* *********** \n";
    std::cout << "*****  ** ************* *******  *****  *****  ************ ** ********* \n";
    std::cout << "****  ***     *********  *************  *****  **********  ***** ******* \n";
    std::cout << "***   ****    **********    **********         ********   ****** ******* \n";
    std::cout << "**** *********************   *********         ********   *****  ******* \n";
    std::cout << "******    ************* *****   ******  *****  **************   ********\n";
    std::cout << "******    *************  *******  ****  *****  **************   ******** \n";
    std::cout << "************************  *****  *****  *****  *************************\n";
    std::cout << "**************************       *****  *****  *************************\n";
    std::cout << "  __________________________________________________________________________ \n";
    cout<<endl;
    
    
    cout<<"\n                    B I E N V E N I D O S   A                  \n";	
    cout<<"\n              ~ S  W  E  E  T    H  A  R  M  O  N  Y ~               \n";
    cout<<"\n            T I E N D A   D E   I N S T R U M E N T O S                 \n";
    cout<<endl;	
    cout<<endl;	
                     	marge();cout<<" M  E  N  U "; marge();
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
            cout<<" ----------- "<<endl;     
			cout<<" ID: "<<aux->ID<<endl;
			cout<<" Nombre: "<<aux->nombre<<endl;
			cout<<" Modelo: "<<aux->modelo<<endl;
			cout<<" Marca: "<<aux->marca<<endl;
			cout<<" Precio: "<<aux->precio<<endl;
			cout<<" Cantidad: "<<aux->cantidad<<endl;
		    
            aux=aux->der;
			}
			}
            break;
			}
			
			case 1:{ //// AÑADIR
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
                               cout<<"Se elimino el artículo \n";
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
			
			case 3:{ /// MODIFICAR
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
			cout<<"INGRESA EL NUEVO ID \n";
			cin>>aux->ID;
			break;
		}
		case 1:
			
			{
				cout<<"INGRESA EL NUEVO NOMBRE \n";
		        cin>>aux->nombre; break;
			}
		
		case 2:
			{
				cout<<"INGRESA EL NUEVO MODELO\n";
		        cin>>aux->modelo;break;
			}
			case 3:
			{
				cout<<"INGRESA EL NUEVA MARCA \n";
		        cin>>aux->marca;break;
			}case 4:
			{
				cout<<"INGRESA EL NUEVO PRECIO\n";
		        cin>>aux->precio;break;
			}
			case 5:
			{
				cout<<"INGRESA EL NUEVAS UNIDADES\n";
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
				cout<<"INGRESA EL NUEVO PRECIO: $ \n";
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
                               cout<<"Se modificó el artículo \n";
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
			
			case 4:{ //AÑADIR AL CARRO 
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
                       	
                       	mov_id=id_p;
                       	  band=1;
                           cout<<"\n Intrumento encontrado en la lista"<<endl;
                           cout<<endl;
                           if(seguir_agregando==0){
                           cout<<"¿Cuántas unidades desea agregar?: ";
                            cin>>total_cantidad; 
                           }
                           else
                           if(seguir_agregando==1){
                           cout<<"¿Cuántas unidades desea agregar?: ";
                            cin>>total_cantidad2; 
                           }
                            cout << "  ____ \n";
                           	cout<<" ID: "<<aux->ID<<"   "<<endl;
                           	if(seguir_agregando==0){
                           	cout<<" Unidades: "<<total_cantidad<<"   "<<endl;;
                           		
                           	}
                           	else if(seguir_agregando==1){
                           	cout<<" Unidades: "<<total_cantidad2<<"   "<<endl;;
                           	}
                           	cout<<" Instrumento:  "<<aux->nombre<<"   "<<endl;;
                           	cout<<" Modelo: "<<aux->modelo<<"   "<<endl;;
							cout<<" Marca:  "<<aux->marca<<"   "<<endl;;
							cout<<" Precio: $ "<<aux->precio<<"  "<<endl;;
							cout << "  ___ \n";
                       		precio=aux->precio;
                       		cout<<endl;
                       		cout<<"\n Instrumento agregado a carro"<<endl;
                       		cout<<"\n";
                       break;
                       
                       }
                       aux=aux->der;
                   }
                   total_cantidad=total_cantidad;
                   total_precio=precio+total_precio;
                   //cout<<total_precio<<endl;
                   cout<<" ¿Deseas volver a agregar un instrumento (si=1,no=0)?"; cin>>seguir_agregando;
                   cout<<endl;
                   if(band==0)
                       cout<<" Instrumento no encontrado en almacen \n";
                   if(seguir_agregando==1){
                   	new_id=aux->ID;
                   	       
                   	while(aux!=NULL){
                   		if(new_id==aux->ID){
                   			aux4=aux;
                   		}
                   		aux=aux->der;
                   	}
                   	
                   }
               }while(seguir_agregando==1);		
               	}
               }
           	break;    	
               
               
               
			case 5:///////QUITAR CARRO
				{
				reescribirBloc(p);
				if(p==NULL)
                   cout<<"NO INGRESO ARTICULOS AL CARRITO \n";
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
                               cout<<"Se elimino del carrito \n";
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
				
				break;
			
			
		case 6:////TICKET 
				{ 
				cout<<" ¿Deseas finalizar la compra (si= 1, no= 0) ?"; cin>>finalizar_compra;
                   cout<<endl;
                   if(band==0)
                       cout<<"Redireccionando al menu ... \n";
               }while(finalizar_compra==1)
				
				if(p==NULL)
                   cout<<"NO AGREGÓ ARTÍCULOS AL CARRITO \n";
               else
               {
               	
			    cout <<endl;
                       cout<<"\n Espere un momento se está imprimiendo su ticket . . . .\n";
              cout <<endl;
cout<<"*********";
cout<<endl;		
cout<<"\n                    B I E N V E N I D O S   A                  \n";	
cout<<"\n              ~ S  W  E  E  T    H  A  R  M  O  N  Y ~               \n";
cout<<"\n            T I E N D A   D E   I N S T R U M E N T O S                 \n";
cout<<"\n Av. Montevideo 363-Local 322, Lindavista Sur, Gustavo A. Madero, 07300\n";
cout<<"                   Ciudad de México, CDMX\n";
cout <<endl;   
      
cout<<"Jueves 7 de Octubre 2021                                                      \n";
cout<<"Caja_Empleado1                                                             \n";
cout <<endl;
cout<<" * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * *  \n "; 
cout<<"CANT.         \tARTÍCULO               \tPRECIO      \tSUBTOTAL \n";
cout<<" * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * *  "; 
cout <<endl;
cout <<endl;	
sub_total=precio*total_cantidad;

aux=p;
while(aux!=NULL){
	if(mov_id==aux->ID){
		
	cout<<"  " <<total_cantidad<<"           "<<aux->nombre<< "    "<<aux->modelo<<"         $  "<<aux->precio<<"         $  "<<sub_total<<endl;           
    cout <<endl;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * *  ";
    cout <<endl; 
	}
	aux=aux->der;
}
aux=p;
while(aux4!=NULL){
	if(new_id==aux4->ID){
	sub_total2=aux->precio*total_cantidad2;	
	cout<<"  " <<total_cantidad2<<"           "<<aux->nombre<< "    "<<aux->modelo<<"         $  "<<aux->precio<<"         $  "<<sub_total2<<endl;           
    cout <<endl;
    cout<<" * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * *  ";
    cout <<endl; 
	}
	aux4=aux4->der;
}



float total_precio=0;
total_precio=sub_total+sub_total2;
 
cout<<"\n                                TOTAL: $   "<<total_precio; 
cout <<endl;
cout<<" * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * * * * *  ";              
cout <<endl; 
cout<<"\n                GRACIAS POR SU COMPRA!! \n";
cout<<"\n                  VUELVA PRONTO :)                                           \n";
cout <<endl;
cout<<"********* \n";

cout <<endl;
if (id_p==aux->ID) {
cont=0;
aux->cantidad;
cont++;

}
break;
}
	
	break;
		
 	case 7 : //EXIT 
				exit (0);
		    	break;
		
	  	} //switch
   }//while
}//int main

