#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	int datos[20]={0}; //  DECLARACION DEL ARREGLO
	
		
		int op, no=0, i, N, suma,max,pmax, min, pmin,d,ban,sub, mayor, prom , pu , x, j, bnum, posbus, nimp, z, TotalDatos, aux, k, der , izq, Shaker , pos,u=0;
	 
		srand(time(NULL));
		while(1)
		{
				cout<< " \n  ********************                                            ";
			cout<< " \n                            M  E  N  U         \n";
			cout<< "   ********************                                                \n";
			cout<< " 0- Impresión   \n";
			cout<< " 1- Manual    \n";
			cout<< " 2- Aleatoria  \n";
			cout<< " 3- Sumatoria \n";
			cout<< " 4- Máximo   \n";
			cout<< " 5- Minímo   \n";
			cout<< " 6- Buscar   \n";
			cout<< " 7- Promedio \n";
			cout<< " 8- Mayores al promedio \n";
			cout<< " 9- Inicializar con N \n";
		    cout<< " 10- Insertar numero al inicio  \n";
		    cout<< " 11- Insertar bloque al inicio \n";
		    cout<< " 12- Insertar numero al final \n";
		    cout<< " 13- Insertar bloque al final  \n";
		    cout<< " 14- Ingrese antes de x \n";
		    cout<< " 15- Ingrese despues de x \n";
		    cout<< " 16- Modificar x  \n";
		    cout<< " 17- Modificar impares \n";
		    cout<< " 18- Eliminar ultimo dato \n";
		    cout<< " 19- Eliminar primer dato \n";
		    cout<< " 20- Eliminar x \n";
		    cout<< " 21- Ordenamiento burbuja \n";
		    cout<< " 22- Shaker Sort \n ";
		    cout<< " 23- Insercion Directa \n";
		    cout<< " 24- Insercion Binaria \n";
			cout<< " 30 - EXIT \n";
			cout<< " \n  ********************                                            ";
		    cout<< " \n Selecciona una opción \n";
			cin>> op ;
			
			switch (op)
			{
				case 0:  //PARA IMPRIMIR ARREGLO
				cout<<"    Contenido de arreglo   \n";
				cout<<"Subindice      Valor almacenado \n";
				for (i=0; i<20; i++)
				cout<< "   "<< i << " \t \t \t \t "<<datos[i]<<"\n";
				break;
					
				case 1: // MANUALMENTE 
					cout<< "¿Cuantos datos quieres ingresar?:   ";
					cin>>no;
					if (no<=20) {
						for (i=0; i<no; i++) 
					{
				    cout << "Ingresa el valor de los datos [ "<<i<<"] :    ";
					cin>> datos[i];
					pu=i;
					d=i;
					}
				    }
				    else 
					cout<<"Excedes el tamaño del arreglo  \n \n   ";
					break;
				    
				case 2: //Random 
					cout<< "¿Cuantos datos quieres ingresar?:   ";
					cin>> no;
					if (no<=20)
					{
						for (i=0; i<no; i++)
				
					{
					datos[i]=1+rand()%100;
					pu=i;
					d=i;
					}
				}
					else
					cout<<"Excedes el tamaño del arreglo";
					break;
					
					case 3: // sumatoria 
					suma=0;
					for (i=0; i<no; i++)
					suma+=datos [i];
					cout<< "La sumatoria es :  " << suma<< " \n \n \n " ;
					break;
					
					case 4 : //MAXIMO
					max=0;
					if (no== 0)
					cout<< "Esta vacio el arreglo \n \n ";
					else 
					{	
					for (i=0; i<no; i++)
					{
						if (datos[i]>max)
						{
							max= datos[i];
							pmax=i;	
						} 
					}
					}
						cout<<"El valor máximo encontrado es : " <<max <<" y está almacenado en el subíndice  "<<pmax<<"\n \n \n";
						break;
						
				   	case 5 :// MINIMO 
					min=100;
					if (no== 0)
					cout<< "Esta vacio el arreglo ";
					else 
					{	
					for (i=0; i<no; i++)
					{
						if (datos[i]<min)
						{
							min= datos[i];
							pmin=i;	
						}
					}
				}
						cout<<"El valor minimo encontrado es : " <<min <<" y está almacenado en el subíndice  "<<pmin<<"\n \n \n "; 				
				    break;
				    
				    
				    case 6 : //Busca 
				    if (no==0)
				       cout<< "   El arreglo está vacio   \n";
				       else
				       {
				       	ban=0 ;
				       	cout<<"¿Que dato quieres buscar?:   \n";
				       	cin>>d;
				       	i=0;
				       	while (i<no)
				       	{
						   
				       	
				       		if (d==datos[i])
				       		{							   
				       		ban=1;
				       		sub=i;
				       		break;
				     	
						   }
						   i++;
					}
					
					
					if (ban==1)
					cout<< "Dato encontrado en el subíndice:  " <<sub<< "\n " ;
					else 
					cout<< "No se encontro el dato \n";
				}
		
				    break;
				    
			    case 7: // PROMEDIO
			    suma=0;
					for (i=0; i<no; i++)
				suma+=datos [i];
			    prom= suma/no;
			    cout<<"El promedio es:  "<<prom<<"\n";
			    break;
			    
			    
			    case 8://Mayor al promedio    
			     cout<<"\n Promedio: "<<prom<<endl; 
			     
			      cout<<" \n                --- Mayores al promedio ---  "<<endl;
			    cout<< "                                         \n";
			    	cout<<"Subindice   Valor almacenado \n";
			  	for (i=0; i<no; i++)
				  {
		
		if(datos[i]>prom)
		{
				mayor++;
					
		
	     	    cout<<"  [ "<<i<<"] "<<      "      "<< datos[i]<<"     "<<"\n" ;
			
		}
	}
	    
			     break;
						
		    case 9: // INICIALIZACION N
		    
		   cout<< "Ingresa el valor N:   ";
			cin>> no;		
			for (i=0; i<20; i++)
				{
                datos[i]=no;
				}	
				break;
				
			case 10: //Numero al inicio 
			if(no<=20)
			{
				pu++;
				for(i=pu; i>0; i--)//RECORRE UNA POSICION 
				datos[i]=datos[i-1];
				cout<<"Inserte el valor de datos [0]: ";
				cin>>datos[0];
				
			}
			break;
			
			case 11: //INSERTAR BLOQUE AL INICIO
			if(no<=20)
			{
				cout<<"¿Cuantos datos quieres ingresar?:  ";
				cin>> x ;
				
				for(i=1; i<=x ; i++)
				{
					pu++;
					for(j=pu; j>0; j--)
					datos[j]=datos[j-1];
				}
				for(i=0; i<x; i++)
				datos[i]=1+rand()%100;	
				} 
			  
			  break; 
			  
			  case 12://INSERTAR DATO AL FINAL 
			  pu++;
			  datos[pu]=1+rand()%100;
			  break;
			  
			  case 13: //INSERTAR BLOQUE DE DATOS AL FINAL 
			  cout<<"¿Cuantos datos quieres ingresar?:  ";
			  cin>>x;
			  
			  for(i=1; i<=x; i++)
			  {
			  	pu++;
			  	datos[pu]=1+rand()%100;
			  	}
			  	break;
			  	
			 case 14: //INGRESE ANTES DE X 
          
		if(no<20)
		{
		cout<<" Ingresa x: ";
		cin>>bnum;	
		for(i=0;i<20;i++){
		if(datos[i] == bnum){
		ban='V';
		posbus=i;
		break;	
		}
		else{
		ban='F';
		}
		}
		if(ban=='V'){
		
			cout<<"Dato encontrado "<<endl;
					posbus++;
			pu++;
			for(i=pu;i>=posbus;i--)
				datos[i]=datos[i-1];
				cout<<" Inserta el valor del nuevo dato "<<posbus-1<<" : "; cin>>datos[posbus-1]; 
		}
		if(ban=='F'){
			cout<<" No se encontro el dato." <<endl;}
		}
	
		break;
		
		
	    case 15:   //INGRESE DESPUES DE X
	   	if(no<20)
		{
		cout<<" Ingresa x: ";
		cin>>bnum;	
		for(i=0;i<20;i++){
		if(datos[i] == bnum){
		ban='V';
		posbus=i;
		break;	
		}
		else{
		ban='F';
		}
		}
		if(ban=='V'){
		
			cout<<"Dato encontrado "<<endl;
					posbus++;
			pu++;
			for(i=pu;i>=posbus;i--)
				datos[i]=datos[i-1];
				cout<<" Inserta el valor del nuevo dato "<<posbus-1<<" : "; cin>>datos[posbus]; 
		}
	}
		if(ban=='F'){
			cout<<" No se encontro el dato." <<endl;}
	
		break;
		
		case 16: // MODIFICAR X 
	if(no<20)
		{
		cout<<" Ingresa x: ";
		cin>>bnum;	
		for(i=0;i<20;i++){
		if(datos[i] == bnum){
		ban='V';
		posbus=i;
		break;	
		}
		else{
		ban='F';
		}
		}
		if(ban=='V'){
		
			cout<<"Dato encontrado "<<endl;
					posbus++;
			pu++;
			for(i=pu;i>=posbus;i--)
				datos[i]=datos[i];
				cout<<" Ingresa el dato para sustituir a "<<bnum<<" :  "; cin>>datos[i]; 
		}
	}
		if(ban=='F'){
			cout<<" No se encontro el dato." <<endl;}
	
		break;
		
		case 17:
			{
			int nimp=0;
			for (int i=0; i<no; i++)
			{
				if(datos[i] %2 !=0){
					nimp++;
					datos[i]=datos[i]+1;
				}
			}
			cout<<"Se han modificado " <<nimp<<" datos ";
	
	}
			break;
			
		case 18: // ELIMINAR ULTIMO DATO 
		
		datos[pu]=0;
		pu--;
		cout<<"Se elimino el ultimo dato";
	    
			break;
			
		
		case 19://ELIMINAR PRIMER DATO
		
		datos[0]=0;
		if(datos[0]==0)
		{
			for (i=0; i<no; i++)
			datos[i]=datos[i+1];
			}
			
		cout<<"Se elimino el primer dato";
			
			break;
			
			
		case 20:// ELIMINAR X 

cout<<"Ingrese x:  "<<endl; 
cin>>bnum;
cout<<endl;

for (i=0; i<=20; i++)
{
	if(bnum==datos[i])
	{
	
		cout<<"Dato encontrado "<<endl;
		datos[i]=0;
		
			for(j=i; j<no; j++)
			{
				datos[j]=datos[j+1];
					}
			pu--;
			cout<<"Se elimino el dato"<<endl;
			ban='F';
			break;
			}
			}
			  
   break;
   
              case 21: //Ordenamiento burbuja 
                           TotalDatos=no-1; //Total de datos en el arreglo 
                         cout<< "  Arreglo original   \n";
                         for (k=0; k<=TotalDatos; k++)
                         cout<<datos[k]<<"          "<<endl;
                          
                         cout<<"\n                          *** Metodo Burbuja  ****      \n";
                        for(i=0; i<TotalDatos; i++) // Ciclo de pasadas 
                        {
                           cout<<endl;
                       	    cout<<"  Pasada:   "<<i+1<<endl;
                        	cout<<endl;
                        for (j=0; j<TotalDatos; j++)// Ciclo de comparaciones 
						{
							cout<<datos[j]<< ">"<<datos[j+1];
    		             if (datos[j]>datos[j+1]) // Ascendente 
    	               	{
    	               		cout<<" V ";
    			         aux=datos[j];
    			         datos[j]=datos[j+1];
    			         datos[j+1]=aux;
    			        for (k=0; k<=TotalDatos; k++)
    			        cout<<datos[k]<<"   ";
    			           cout<<endl;	
			}
			else {
				           cout<<" F ";
				        for(k=0; k<=TotalDatos; k++)
			               cout<<datos[k]<< "   ";
				             cout<<endl;
			}
		} 
	}
    break;
    
        case 22: // Shaker sort 
   TotalDatos=no-1; //Total de datos en el arreglo 
                    cout<< "  Arreglo original   \n";
                    for (k=0; k<=TotalDatos; k++)
                    cout<<datos[k]<<"          "<<endl;
                   cout<<endl<<" \n   Shaker sort  \n"<<endl;
	  
		
                        
                        	/*u++;
                           cout<<endl;
                       	    cout<<"  Pasada:   "<<u<<endl;
                        	cout<<endl;
                        	*/cout<<" Der-Izq  "<<endl;  
                        	cout<<endl;
 izq = 1;
 der = no-1;
 aux = 0;
 
do{
	u++;
	cout<<u;	
 
	for (j=der; j>=izq; j--) //////DERECHA - IZQUIERDA 
				{
				cout<<datos[j]<< "<"<<datos[j-1];
                if( datos[j-1] > datos[j]) 
    	               	{
    	        cout<<" V ";
    	        
    		     aux = datos[j-1];
                datos[j-1]=datos[j];
                datos[j]=aux;
            
               
  				for (k=0; k<=TotalDatos; k++)
    			cout<<datos[k]<<"   ";
    			cout<<endl;
					
			}
			else {
				cout<<" F ";
				for(k=0; k<=TotalDatos; k++)
			    cout<<datos[k]<<"   ";
				cout<<endl;
				         }
				     }
          //// IZQUIERDA- DERECHA
                cout<<" Izq-Der   "<<endl;
                cout<<endl;
for (j=1; j<TotalDatos; j++)// Ciclo de comparaciones 
						{
							cout<<datos[j]<< ">"<<datos[j+1];
    		             if (datos[j]>datos[j+1]) // Ascendente 
    	               	{
    	               		cout<<" V ";
    			         aux=datos[j];
    			         datos[j]=datos[j+1];
    			         datos[j+1]=aux;
    			        for (k=0; k<=TotalDatos; k++)
    			        cout<<datos[k]<<"   ";
    			           cout<<endl;	
			}
			else {
				           cout<<" F ";
				        for(k=0; k<=TotalDatos; k++)
			               cout<<datos[k]<<"   ";
				             cout<<endl;
			}
		} 
 
}while(izq>der);

    break;
    
    	 case 30:  //SALIDA DEL ARREGLO 
			  	exit (0);
		    	break;
}
}
}
