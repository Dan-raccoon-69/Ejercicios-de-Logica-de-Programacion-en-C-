#include <iostream>
#include "Clasehija.h"
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	Clasehija* ob1=new Clasehija(14,30);
	cout<<endl;
	delete ob1;
	//todo constructor tiene un destructor.
	system("pause");
	
	return 0;
}
