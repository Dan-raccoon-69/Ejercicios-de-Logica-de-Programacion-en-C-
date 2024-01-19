#include <iostream>
#include "Turismo.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Vehiculo* v1= new Vehiculo("Honda","Negro","CM34");
	
	cout<<"Marca: "<<v1->getmarca();
	
	return 0;
}
