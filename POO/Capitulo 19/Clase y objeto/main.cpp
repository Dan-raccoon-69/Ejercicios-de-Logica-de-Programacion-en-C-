#include <iostream>
#include<conio.h>
//siempre agregar el nombre de la clase en libreria
#include "punto.h"
//la creacion de objetos normalmente es en main
using namespace std;

int main (int argc,char** argv){
	/* para crear el objeto:
	se coloca el nombre de la clase(punto), se coloca el nombre del objeto que deses (p1)
	se coloca la inicializacion(checa tu contructor y ve que valores son los que le pasas)
	(en este caso son 2 valores enteros (x,y)) */
	
	punto p1(20,30); //crecion objeto estatico
	//el punto solo se usa cuando son objetos estaticos
	cout<<"El numero X es: "<<p1.getX()<<endl;
	cout<<"El numero Y es: "<<p1.getY()<<endl;
	
	punto* p2 = new punto(); //creacion objeto dinamico
	
	p2->setX(15);
	p2->setY(14);
	
	cout<<" El valor de X es: "<<p2->getX()<<endl;
	cout<<" El valor de Y es: "<<p2->getY()<<endl;
	
	getch();
	return 0;
}
