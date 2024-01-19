/*hacer un arreglo de estructura llamada atleta para N atletas que contenga los sig campos:
nombre, pais, numero_medallas. y devuelva los datos (nombre, pais) del atleta que ha ganado el mayor numero 
de medallas. */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct atleta{
	char nombre[50];
	char pais[50];
	int numero_medallas;
}atletas[50];

main (){
int n,mayor=0,num_atletas,posicion;
cout<<"\n Ingresa el numero de atletas a registrar: "; cin>>num_atletas;

for(n=1;n<=num_atletas;n++)	{
	fflush(stdin);
	cout<<"\n El nombre del atleta es: "; cin.getline(atletas[n].nombre,50,'\n');
	cout<<" El pais del atleta es: "; cin.getline(atletas[n].pais,50,'\n');
	cout<<" Numero de medallas es: "; cin>>atletas[n].numero_medallas;
	cout<<"\n";
	if(atletas[n].numero_medallas>mayor){
		mayor=atletas[n].numero_medallas;
		posicion=n;
	}
}
system("cls");
cout<<"\n Los datos de mayor medallas son: ";
cout<<"\n El nombre es: "<<atletas[posicion].nombre<<endl;
cout<<" El pais es: "<<atletas[posicion].pais<<endl;
cout<<" Numero de medallas es: "<<atletas[posicion].numero_medallas<<endl;

	getch();
}
