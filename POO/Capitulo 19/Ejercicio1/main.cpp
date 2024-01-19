#include <iostream>
#include "Felino.h"
#include "Gatodomestico.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Felino* estrellacirco = new Felino();
	Gatodomestico* minino = new Gatodomestico(); 
	
	cout<<endl<<" Felino"<<endl;
	estrellacirco->dieta();
	estrellacirco->anio_lugarnacimiento();
	estrellacirco->raza();
	estrellacirco->setcirco("Circo de Berlin");
	cout<<" Circo: "<<estrellacirco->getcirco()<<"\n";
	cout<<endl<<" Minino"<<endl;
	minino->dieta();
	minino->anio_lugarnacimiento();
	minino->raza();
	minino->setnombre("Daniel Gustavo");
	cout<<" Duenio: "<<minino->getnombre();
	
	return 0;
	
	
}
