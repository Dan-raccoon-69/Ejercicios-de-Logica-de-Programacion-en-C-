#include<iostream>
using namespace std;
#include "Atleta.h"


float Atleta::gettiempo(){
 	return tiempo;			
}

void Atleta::mostrar(){
	cout<<"\n\t Ganador"<<endl;
	cout<<" Numero de Atleta: "<<numeroatle<<endl;
	cout<<" Nombre del Atleta: "<<nombre<<endl; 
	cout<<" Tiempo: "<<tiempo<<endl;
					
}
 		
