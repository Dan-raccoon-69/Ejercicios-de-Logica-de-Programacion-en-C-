#include <iostream>
using namespace std;
#include "Perro.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Perro* perro1 = new Perro("Peque","Desconocida");
	Perro* perro2 = new Perro("Pandy","Desconocida");
	
	perro1->mostrardatos();
	perro1->jugar();
	cout<<"\n";
	perro2->mostrardatos();
	perro2->jugar();
	return 0;
}
