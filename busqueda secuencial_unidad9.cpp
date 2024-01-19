#include<iostream>
#include<conio.h>
using namespace std;
//busqueda secuencial en un arreglo
main(){
	int cadena[]={5,4,3,2,1};
	int busca=1;
	int i;
	char band='F';
	
	
	cout<<"\n Tu arreglo es: "<<endl;
	for(i=0;i<5;i++){
		cout<<" "<<cadena[i];
	}
	cout<<"\n El numero que buscas es: "<<busca<<endl;
	
	i=0;
	while((band=='F')&&(i<5)){
		if(cadena[i] == busca){
		band='V';
		}
		i++;	
	}
	
	
	if(band=='V'){
		cout<<"\n Si existe el numero en el arreglo, en la posicion " << i;
	}
	else 
	cout<<"\n NO existe el numero en el arreglo, F";
	
	
	getch();
}
