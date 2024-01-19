#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Triangulo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Triangulo* t1= new Triangulo(3,3,3,3);
	cout<<" Num de lados: "<<t1->getnlados()<<endl;
	
	cout<<" Area: "<<t1 -> Areatriangulo();
	
	
	
	return 0;
}

