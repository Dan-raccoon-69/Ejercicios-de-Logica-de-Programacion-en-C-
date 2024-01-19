#include <iostream>
#include "Claseheredada.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Claseheredada* num=new Claseheredada(5,10,15);
	cout<<" Numero: "<<num->getx();
	 
	
	return 0;
}
