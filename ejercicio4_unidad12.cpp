/* rellenar un arreglo con n numeros , posteriormente utilizando punteros determina el menor del arreglo */
#include<iostream>
#include<conio.h>
using namespace std;

main (){
	int numeros[100];
	int *dir_numeros,elementos,i,menor=999999;
	
	cout<<" Ingresa el numero de elementos: "; cin>>elementos;
	cout<<"\n";
	for(i=0;i<elementos;i++){
		cout<<" Ingresar el dato "<<i+1<<" : ";  cin>>numeros[i];
	}
	dir_numeros=&numeros[0];
	//menor
	cout<<"\n";
	for(i=0;i<elementos;i++){
		if(*dir_numeros<menor){
			menor=*dir_numeros;
		}
		//aumenta porque empieza desde 0 cuando lo igualas a &numeros[0], aumenta de 1 en 1 porque en un arreglo toma lugares de 1 a 1 
		*dir_numeros++;
	}
	cout<<" El numero menor es: "<<menor;
	
	getch();
}
