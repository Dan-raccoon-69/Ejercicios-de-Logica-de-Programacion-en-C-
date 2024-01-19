#include<iostream>
#include<conio.h>
using namespace std;

main (){
	int vector[]={1,2,3,4,5};
	int *dir_vector;
	dir_vector=&vector[0];
	
	//le ponemos el ++ en el cout porque en un arreglo siempre va de 1 en 1 los elementos 
	cout<<" Elementos del vector: "<<endl;
	for(int i=0;i<5;i++){
		cout<<" El elemento "<<i+1<<" es: "<<*dir_vector++<<endl;
	}
	
	cout<<"\n Direccion de memoria: "<<endl;
	for(int i=0;i<5;i++){
		cout<<" El elemento "<<i+1<<" es: "<<dir_vector++<<endl;
	}
	getch();
}
