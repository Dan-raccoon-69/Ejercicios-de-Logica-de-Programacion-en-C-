//TRANSMICION DE ARREGLOS

//hallar el maximo num de un arreglo
#include<iostream>
#include<conio.h>
using namespace std;

int maximo(int *,int);

main (){
	const int elementos=5;
	int numeros[elementos]={15,2,3,4,5};
	
	cout<<" El mayor es: "<<maximo(numeros,elementos);
	//numeros=&numeros[0];
	getch();
}

int maximo(int *dire_numeros,int elementos){
	int mayor=0;
	for(int i=0;i<elementos;i++){
		/*(dire_numeros+i) eso se puso porque recuerda que empieza en 0, pero debe recorrer a todo el arreglo
		por el i va aumentando, lo cual va verificando cada elemento, si no pones la i no cambiaria, quedaria en 0 */
		if(*(dire_numeros+i)>mayor){
			mayor=*(dire_numeros+i);
		}
	}
	return mayor;	
}
