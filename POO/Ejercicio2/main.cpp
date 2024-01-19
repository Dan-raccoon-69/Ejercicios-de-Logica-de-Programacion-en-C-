/*CONSTRUIR UN PROGRAMA QUE CALCULE EL AREA Y EL PERIMETRO DE UN CUADRILATERO DADA LA LONGITUD DE SUS LADOS.
LOS VALORES DE LA LONGITUD DEBEN INTRODUCIRSE POR LINEA DE ORDENES. 
SI ES UN CUADRADO, SOLO SE PROPORCIONARA LA LONGITUD DE UNO DE SUS LADOS AL CONSTRUCTOR */
#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include "Cuadrilatero.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int op;
	Cuadrilatero* figura;
	float l1,l2;
	
	do{
	cout<<" 1. Rectangulo"<<endl;
	cout<<" 2. Cuadrado"<<endl;
	cout<<" 3. Salir"<<endl;
	cout<<" Selecciona la opcion deseada: "; cin>>op;
	
	switch(op){
		case 1:
	cout<<"\n";
	cout<<" Ingresa el valor: "; cin>>l1;
	cout<<" Ingresa el valor: "; cin>>l2;
	figura = new Cuadrilatero(l1,l2);
	cout<<endl<<" Area es: "<<figura->getArea1();
	cout<<endl<<" Perimetro es: "<<figura->getPerimetro1()<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
		break;
		case 2:
	cout<<" Ingresa el valor: "; cin>>l1;
	figura = new Cuadrilatero(l1);
	cout<<endl<<" Area es: "<<figura->getArea2();
	cout<<endl<<" Perimetro es: "<<figura->getPerimetro2()<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
		break;
		case 3:
			exit(1);
		break;
	}	
	}while(op>0 && op<4);
	getch();
	return 0;
}
