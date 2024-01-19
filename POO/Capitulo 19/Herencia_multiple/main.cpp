#include <iostream>
using namespace std;
#include"Hidroavion.h"

int main(int argc, char** argv) {
	Hidroavion* ob1=new Hidroavion("HA45","3CM34","CUBD021014HDFRTNA6");
	ob1->mostrardatos();
	ob1->indicarbarco();
	ob1->indicarAvion();
	delete ob1;	
	return 0;
}
