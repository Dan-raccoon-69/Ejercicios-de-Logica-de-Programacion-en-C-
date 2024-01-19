#include<iostream>
#include<conio.h>
using namespace std;
//busqueda secuencial en un arreglo
main(){
	int cadena[20];
	int busca,elementos;
	int i;
	char band='F';
	cout<<"\n Ingresa el numero de elementos: "; cin>>elementos;
	
	for(i=0;i<elementos;i++){
		cout<<" Ingresa el valor "<<i+1<<": "; cin>>cadena[i];
	}
	cout<<"\n Que numero deseas buscas?: ";cin>>busca;
	
	cout<<"\n Tu arreglo es: "<<endl;
	for(i=0;i<elementos;i++){
		cout<<" "<<cadena[i];
	}
	
	i=0;
	while((band=='F')&&(i<elementos)){
		if(cadena[i] == busca){
		band='V';
		}
		i++;	
	}
	cout<<"\n";
	if(band=='V'){
		cout<<"\n Si existe el numero en el arreglo, en la posicion " << i;
	}
	else 
	cout<<"\n NO existe el numero en el arreglo, F";	
	getch();
}
