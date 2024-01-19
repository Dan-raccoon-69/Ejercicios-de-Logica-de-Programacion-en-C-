#include <iostream>
#include"Planta.h"
#include"Animalcarnivoro.h"
#include"Animalhervivoro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Planta* Hongo=new Planta();
	Hongo->alimentarse();
	
	Animalcarnivoro* Animal1=new Animalcarnivoro();
	Animal1->alimentarse();
	
	Animalhervivoro* Animal2=new Animalhervivoro();
	Animal2->alimentarse();
	
	return 0;
}
