#include <iostream>
#include "Turismo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Turismo* v1= new Turismo("Honda","Negro","CM34",2);
	
	cout<<"Marca: "<<v1->getmarca()<<endl;
	cout<<"Color: "<<v1->getcolor()<<endl;
	v1->setcolor("azul");
	cout<<"Color: "<<v1->getcolor()<<endl;
	//no podemos mandar a imprimir un metodo protegido
	/*por ejemplo:
	cout<<"modelo: "<<v1->getmodelo();
	ESO NO SE PUEDE, YA QUE ESE METODO ESTA PROTEGIDO
	 */
	 cout<<"Modelo: "<<v1->retornarmodelo();
	return 0;
}
