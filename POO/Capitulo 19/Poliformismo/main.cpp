#include <iostream>
using namespace std;
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Poligono.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//creacion de un objeto
	// Poligono* poligonos[2];
	//instanciacion(no se puede en el poliformismo)
	//Poligono* pol=new Poligono();
	Poligono* poligonos[4];
	
	poligonos[0]=new Rectangulo(7,4);
	poligonos[1]=new Triangulo(3,4,4);
	poligonos[2]=new Triangulo(3,4,5);
	poligonos[3]=new Rectangulo(3,4);
	
	for(int i=0;i<4;i++){
		cout<<endl<<" Poligono "<<i+1<<endl;
		cout<<" Area: "<<poligonos[i]->Area()<<endl;
		cout<<" Perimetro: "<<poligonos[i]->Perimetro()<<endl;
		
	}
	//EL MISMO MENSAJE PARA DIFERENTES OBJETOS LO TOMAN DE DIFERENTE MANERA
	
	return 0;
}
