#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

main (){
	int opcion,num_datos,buscar_numero,posicion_buscar,pos,n,nt,pu,bloque,x,j,new_dato,contador_modificados=0,v=0,inicio,inicio_i=1,der,m;
	float promedio=0,suma_promedio=0,mayor_promedio=0;
	int datos[10]={0};

	
	int i,zcontador, cont=1,suma=0,mayor=0,posicion,minimo=101,posicion_minimo,aux,izq,k,u,s;
	char band='F';
	srand(time(NULL));
	
	while(opcion!=30){
	cout<<"\n\t MENU "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<" 0. Impresion "<<endl;
	cout<<" 1. Inicializacion manual "<<endl;
	cout<<" 2. Inicializacion aleatoria "<<endl;
	cout<<" 3. Sumatoria del arreglo "<<endl;
	cout<<" 4. Maximo "<<endl;
	cout<<" 5. Minimo "<<endl;
	cout<<" 6. Busqueda "<<endl;
	cout<<" 7. Promedio "<<endl;
	cout<<" 8. Mayor Promedio "<<endl;
	cout<<" 9. Inicializar con N "<<endl;
	cout<<" 10. Insertar al inicio "<<endl;
	cout<<" 11. Insertar un bloque al inicio "<<endl;	
	cout<<" 12. Insertar al final "<<endl;
	cout<<" 13. Insertar un bloque al final "<<endl;
	cout<<" 14. Insertar antes de x "<<endl;
	cout<<" 15. Insertar despues de x "<<endl;
	cout<<" 16. Modificar x "<<endl;
	cout<<" 17. Modificar todos los impares "<<endl;
	cout<<" 18. Eliminar ultimo dato "<<endl;
	cout<<" 19. Eliminar primer dato "<<endl;
	cout<<" 20. Eliminar x "<<endl;
	cout<<" 21. Ordenacion burbuja "<<endl;
	cout<<" 22. Ordenacion Shaker sort "<<endl;
	cout<<" 23. Ordenacion Insercion directa "<<endl;
	cout<<" 24. Ordenacion binaria "<<endl;
	cout<<" 30. Salir :)"<<endl;

	cout<<"\n Ingresa la opcion deseada: ";
	cin>>opcion;
	
	switch(opcion){
		
		case 0: 
		cout<<endl<<" Impresion"<<endl;
		for(int i=0;i<10;i++)
		cout<<"    "<<i<<"    "<<datos[i]<<"\n";	
		break;
		
		
		case 1: cout<<endl<<" Inicializacion manual"<<endl;
		cout<<" Numero de datos: ";
		cin>>num_datos;
		if(num_datos>10){
			cout<<"\n Demaciados elementos."<<endl;
		}
		else {
		for(int i=0;i<num_datos;i++){
			cout<<" Ingrese el dato ["<<i<<"] : "; cin>>datos[i];
			pu=i;
		}	
		}
		break;
		
		
		case 2: cout<<endl<<" Inicializacion aleatoria"<<endl;
		cout<<" Numero de datos: ";
		cin>>num_datos;
		if(num_datos>10){
			cout<<"\n Demaciados elementos."<<endl;
		}
		else {
		for(int i=0;i<num_datos;i++){
		datos[i]=1+rand()%100;		
		pu=i;
		}	
		}
		break;
		
		
		case 3:
		cout<<"\n Sumatoria del arreglo ";
		for(int i=0;i<10;i++){
			suma+=datos[i];
		}
		cout<<"\n La suma de los elementos del arreglo es: "<<suma<<endl;
		break;
	
		
		case 4:
		cout<<"\n Maximo ";
		for(int i=0;i<10;i++){
		if(datos[i]>mayor){
		mayor=datos[i];
		posicion=i;
		}
		}
		cout<<"\n El dato mayor es "<<mayor<<" y esta en la posicion "<<posicion<<endl;	
		break;
		
		
		case 5:
		cout<<"\n Minimo elemento ";
		for(int i=0;i<10;i++){
		if(datos[i]<minimo){
		minimo=datos[i];
		posicion_minimo=i;
		}
		}
		cout<<"\n El dato menor es "<<minimo<<" y esta en la posicion "<<posicion_minimo<<endl;	
		break;
		
		
		case 6:
		cout<<"\n Busqueda "<<endl;
		cout<<" Ingrese el numero a buscar en el arreglo: ";
		cin>>buscar_numero;	
		for(i=0;i<num_datos;i++){
		if(datos[i] == buscar_numero && i<=num_datos){
		band='V';
		posicion_buscar=i;
		break;	
		}
		else{
		band='F';
		}
		}
		if(band=='V'){
			cout<<" El numero "<<buscar_numero<<" si existe en el arreglo y esta en la posicion "<<posicion_buscar<<endl;
		}
		if(band=='F'){
			cout<<" El numero "<<buscar_numero<<" NO existe en el arreglo."<<endl;
		}
		break;
		
		
		case 7:
		cout<<"\n Promedio "<<endl;
		for(int i=0;i<10;i++){
			suma_promedio+=datos[i];
		}
		promedio=suma_promedio/num_datos;
		cout<<" El promedio es: "<<promedio<<endl;	
		break;
			
		
		case 8:
		cout<<"\n Mayor Promedio "<<endl;
		for(int i=0;i<num_datos;i++){
			if(datos[i]>promedio){
				cout<<" Indice "<<"["<<i<<"] : "<<datos[i]<<endl;
			}
		}
		break;
	
		
		case 9:
		cout<<"\n Inicializar con N "<<endl;
		cout<<" Ingresa el valor N: "; cin>>n;
		for(int i=0;i<10;i++){
			datos[i]=n;
		}	
		
		break;

		
		case 10:
		cout<<"\n Insertar al inicio "<<endl;
		if(num_datos<10){
			pu++;
			for(i=pu;i>0;i--)
				datos[i]=datos[i-1];
				cout<<" Inserta el valor del dato [0]: "; cin>>datos[0];
		}
		else {
			cout<<" Demaciados datos "<<endl;
		}
		break;
		
		
		case 11:
		cout<<"\n Insertar un bloque al inicio "<<endl;	
		if(num_datos<10){
		cout<<" Numero de datos: "; cin>>x;
		for(i=0;i<x;i++){
			pu++;
			for(j=pu;j>0;j--)
				datos[j]=datos[j-1];		
		}
		
		for(i=0;i<x;i++){
		fflush(stdin);
		cout<<" Ingresa el dato ["<<i<<"] : "; cin>>datos[i];
			
		}
		}
		else {
			cout<<" Demaciados datos "<<endl;
		}
		break;
		
		
		case 12:
		cout<<"\n Insertar al final "<<endl;	
		pu++;
		//datos[pu]=1+rand()%100;
		cout<<" Inserta el valor del dato ["<<pu<<"] : "; cin>>datos[pu];
		break;
		
		
		case 13:
		cout<<"\n Insertar un bloque al final "<<endl;
		cout<<" Numero de datos: "; cin>>x;
		
		for(i=0;i<x;i++){
		pu++;
		cout<<" Inserta el valor del dato ["<<pu<<"] : "; cin>>datos[pu];
		}
		break;
		
		
		case 14:
		if(num_datos<10){
		cout<<"\n Busqueda "<<endl;
		cout<<" Ingresa x: ";
		cin>>buscar_numero;	
		for(i=0;i<10;i++){
		if(datos[i] == buscar_numero){
		band='V';
		posicion_buscar=i;
		break;	
		}
		else{
		band='F';
		}
		}
		if(band=='V'){
			cout<<" El numero "<<buscar_numero<<" si existe en el arreglo y esta en la posicion "<<posicion_buscar<<endl;
			pu++;
			for(i=pu;i>=posicion_buscar;i--)
				datos[i]=datos[i-1];
				cout<<" Inserta el valor del dato ["<<posicion_buscar<<"] : "; cin>>datos[posicion_buscar];
		}
		if(band=='F'){
			cout<<" El numero "<<buscar_numero<<" NO existe en el arreglo."<<endl;
		}	
		}
		else{
			cout<<" Muchos numeros en el arreglo :("<<endl;
		}
		break;
		
		
		case 15:
		if(num_datos<10){
		cout<<"\n Busqueda "<<endl;
		cout<<" Ingresa x: ";
		cin>>buscar_numero;	
		
		for(i=0;i<10;i++){
		if(datos[i] == buscar_numero){
		band='V';
		posicion_buscar=i;
		break;	
		}
		else{
		band='F';
		}
		}
		if(band=='V'){
			cout<<" El numero "<<buscar_numero<<" si existe en el arreglo y esta en la posicion "<<posicion_buscar<<endl;
					posicion_buscar++;
			pu++;
			for(i=pu;i>=posicion_buscar;i--)
				datos[i]=datos[i-1];
				cout<<" Inserta el valor del dato ["<<posicion_buscar<<"] : "; cin>>datos[posicion_buscar];
		}
		if(band=='F'){
			cout<<" El numero "<<buscar_numero<<" NO existe en el arreglo."<<endl;
		}	
		}
		else{
			cout<<" Muchos numeros en el arreglo :("<<endl;
		}
		
		break;
		
		case 16:
		cout<<" Modificar x "<<endl;
		if(num_datos<10){
		cout<<"\n Busqueda "<<endl;
		cout<<" Ingresa x: ";
		cin>>buscar_numero;	
		
		for(i=0;i<10;i++){
		if(datos[i] == buscar_numero){
		band='V';
		posicion_buscar=i;
		break;	
		}
		else{
		band='F';
		}
		}
		if(band=='V'){
			cout<<" El numero "<<buscar_numero<<" si existe en el arreglo y esta en la posicion "<<posicion_buscar<<endl;	
			cout<<" Inserta el valor del dato ["<<posicion_buscar<<"] : "; cin>>datos[posicion_buscar];
		}
		if(band=='F'){
			cout<<" El numero "<<buscar_numero<<" NO existe en el arreglo."<<endl;
		}	
			
		}
		else{
			cout<<" Muchos numeros en el arreglo :("<<endl;
		}
		
		break;
		
		
		case 17:
		cout<<"\n Modificar todos los impares "<<endl;
		for(i=0;i<10;i++){
		if(datos[i]%2==1){
			datos[i]=datos[i]+1;
			contador_modificados++;
		}
			
		}
		cout<<" Numero de datos modificados: "<<contador_modificados;
		
		break;
		
		
		case 18:
		cout<<"\n Eliminar ultimo dato "<<endl;
		datos[pu]=0;
		cout<<" Dato eliminado.";
		break;
		
		
		case 19:
		cout<<"\n Eliminar primer dato "<<endl;
		if(num_datos<10){
		
			for(i=0;i<=pu;i++)
				datos[i]=datos[i+1];		
		}
		else {
			cout<<" Demaciados datos "<<endl;
		}	
		cout<<" Dato eliminado. "<<endl;
		break;
			
				
		case 20:
		cout<<"\n Eliminar x "<<endl;
		cout<<" Ingresa x: ";
		cin>>buscar_numero;	
		
		for(i=0;i<10;i++){
		if(datos[i] == buscar_numero){
		band='V';
		posicion_buscar=i;
		break;	
		}
		else{
		band='F';
		}
		}
		
		if(band=='V'){
			cout<<" El numero "<<buscar_numero<<" si existe en el arreglo y esta en la posicion "<<posicion_buscar<<endl;	
			for(i=posicion_buscar;i<=pu;i++){
				datos[i]=datos[i+1];		
			}
		cout<<" Dato eliminado. "<<endl;
				
		}
		
		if(band=='F'){
			cout<<" El numero "<<buscar_numero<<" NO existe en el arreglo."<<endl;
		}	
		break;
		
			
		case 21:
		cout<<"\n Ordenacion burbuja "<<endl;
			//num_datos=5;
			num_datos=num_datos-1;	
			//num_datos=4;
		cout<<"\n Arreglo original"<<endl;
		for(int k=0;k<=num_datos;k++)
		cout<<" "<<datos[k]<<"  ";
		cout<<"\n Metodo burbuja :v"<<endl;	
		for( i=0;i<num_datos;i++)/*ciclo de pasadas*/{
		cout<<" Pasada "<<i+1<<"\n";
		for( j=0;j<num_datos;j++)/*ciclo de comparaciones*/{
			cout<<" "<<datos[j]<<">"<<datos[j+1];
			if(datos[j]>datos[j+1])/*ascendente*/{ 
				cout<<" V ";
				aux=datos[j];
				datos[j]=datos[j+1];
				datos[j+1]=aux;
				for(int k=0;k<=num_datos;k++)
				cout<<" "<<datos[k]<<"  ";
				cout<<"\n";		
			}
			else{
				cout<<" F ";
				for(int k=0;k<=num_datos;k++)
				cout<<" "<<datos[k]<<"  ";
				cout<<"\n";
			
			}
		}
		}
		cout<<" Arreglo ordenado "<<endl;
		break;
		
		
		case 22:
		cout<<"\n Ordenacion Shaker sort "<<endl;
		cout<<" Arreglo original"<<endl;
		
		for(int k=0;k<num_datos;k++){
		cout<<" "<<datos[k]<<"  ";	
		}
		cout<<"\n\n";
		inicio=num_datos;
        do{
			v++;
			cout<<" Pasada: "<<v<<endl;
			cout<<" Derecha a izquierda"<<endl;
            for(i=pu;i>=1;i--){//d-i
                cout<<" "<<datos[i]<<"<"<<datos[i-1];
				if(datos[i-1]>datos[i]){
					cout<<" V ";
                    aux=datos[i-1];
                    datos[i-1]=datos[i];
                    datos[i]=aux;
                    inicio=i;
                    for(int s=0;s<num_datos;s++){
                    cout<<" "<<datos[s]<<"  ";	
                 	}  cout<<"\n";
                }
            	else {
                cout<<" F ";
				for(int s=0;s<num_datos;s++){
				cout<<" "<<datos[s]<<"  ";
				}cout<<"\n";
				}
				
        }
				inicio_i=inicio+1;
				cout<<" Izquierda a derecha"<<endl;
            for(i=inicio_i;i<=pu;i++){//i-d
                cout<<" "<<datos[i]<<"<"<<datos[i-1];
			if(datos[i-1]>datos[i]){
				cout<<" V ";
                    aux=datos[i-1];
                    datos[i-1]=datos[i];
                    datos[i]=aux;
                    inicio=i;
                    for(int s=0;s<num_datos;s++){
					cout<<" "<<datos[s]<<"  ";	
					}cout<<"\n";
                }
                else {
                cout<<" F ";
				for(int s=0;s<num_datos;s++){
				cout<<" "<<datos[s]<<"  ";
				}cout<<"\n";
				} 
			}
		
        pu=inicio-1;
        }while(inicio_i<pu);
		/*cout<<" "<<datos[3]<<"<"<<datos[2]<<" V ";
		for(int s=3;s<=3;s++){
				aux=datos[s];
                    datos[s]=datos[s-1];
                    datos[s-1]=aux;
				}
				for(int t=0;t<num_datos;t++){
					cout<<" "<<datos[t]<<"  ";
				}
		*/
		cout<<"\n Arreglo ordenado"<<endl;
		break;
		
		case 23:
		cout<<"\n Ordenacion Insercion directa "<<endl;
			//num_datos=6;
			//num_datos=num_datos-1;	
			//num_datos=5;
		cout<<"\n Arreglo original"<<endl;
		for(int k=0;k<num_datos;k++)
		cout<<" "<<datos[k]<<"  ";
		cout<<"\n\n";
		
		cout<<" Pasada 1"<<endl;
		cout<<" "<<datos[1]<<"<"<<datos[0]<<" V ";
		for( i=1;i<=1;i++){
				aux=datos[i];
                    datos[i]=datos[i-1];
                    datos[i-1]=aux;
				
				for(int t=0;t<num_datos;t++){
					cout<<" "<<datos[t]<<"  ";
				
			}
			
		///////////////////
		cout<<"\n";
		cout<<endl<<" Pasada 2"<<endl;
		for( i=2;i>0;i--){
		cout<<" "<<datos[i]<<"<"<<datos[i-1];
		if(datos[i]<datos[i-1]){ 
				band='V';
				cout<<" V ";
				aux=datos[i];
				datos[i]=datos[i-1];
				datos[i-1]=aux;
				for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			
				}
			else {
			cout<<" F ";
			for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			band='F';
			}
		}
		////////////////
		cout<<endl<<" Pasada 3"<<endl;
		for( i=3;i>0;i--){
		cout<<" "<<datos[i]<<"<"<<datos[i-1];
		if(datos[i]<datos[i-1]){ 
				band='V';
				cout<<" V ";
				aux=datos[i];
				datos[i]=datos[i-1];
				datos[i-1]=aux;
				for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
		}
			else {
			cout<<" F ";
			for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			band='F';
			}
		}
		
		////////////////
		cout<<endl<<" Pasada 4"<<endl;
		for( i=4;i>0;i--){
		cout<<" "<<datos[i]<<"<"<<datos[i-1];
		if(datos[i]<datos[i-1]){ 
				band='V';
				cout<<" V ";
				aux=datos[i];
				datos[i]=datos[i-1];
				datos[i-1]=aux;
				for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
		}
			else {
			cout<<" F ";
			for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			band='F';
			}
		}
		
		////////////////
		cout<<endl<<" Pasada 5"<<endl;
		for( i=5;i>0;i--){
		cout<<" "<<datos[i]<<"<"<<datos[i-1];
		if(datos[i]<datos[i-1]){ 
				band='V';
				cout<<" V ";
				aux=datos[i];
				datos[i]=datos[i-1];
				datos[i-1]=aux;
				for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
		}
			else {
			cout<<" F ";
			for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			band='F';
			}
		}
		
		////////////////
		cout<<endl<<" Pasada 6"<<endl;
		for( i=6;i>=4;i--){
		cout<<" "<<datos[i]<<"<"<<datos[i-1];
		if(datos[i]<datos[i-1]){ 
				band='V';
				cout<<" V ";
				aux=datos[i];
				datos[i]=datos[i-1];
				datos[i-1]=aux;
				for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
		}
			else {
			cout<<" F ";
			for(int k=0;k<num_datos;k++)
			cout<<" "<<datos[k]<<"  ";
			cout<<"\n";
			band='F';
			}
		}
		cout<<" Arreglo completado"<<endl;
		break;
		
		
		case 24:
		cout<<"\n Metodo insercion binaria"<<endl;	
		cout<<"Arreglo Original \n";
			for(int k=0;k<=pu;k++){
				cout<<datos[k]<<"  ";
			}
			for(int i=0; i < pu; i++){
			cout<<endl;
			cout<<"Pasada "<<i+1;
			cout<<endl;
			for(int j=i+1; j > 0; j--){
				cout<<datos[j]<<" < "<<datos[j-1];
				if(datos[j] < datos[j - 1]){
					aux = datos[j];
					datos[j] = datos[j - 1];
					datos[j - 1] = aux;
						
					if(i==0){
						cout<<"  V  ";	
						for(int k=0; k <= pu; k++){
							cout<<datos[k]<<"  ";
						}
					}else{
						cout<<"  V  "<<endl;;	
					}
				
				}else{
					cout<<"  F  ";
					for(int k=0; k <= pu; k++){
						cout<<datos[k]<<"  ";
					}
					cout<<endl;
					break;
				}
			}
		}
		break;		
		
		
		case 30: 
		exit(1);
		break;
		

		default:
		cout<<"\n La opcion que seleccionaste no existe."<<endl;		
	}
}			
}}


