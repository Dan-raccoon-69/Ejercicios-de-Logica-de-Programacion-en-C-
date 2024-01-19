#include <iostream>
#include"Alumnos.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Alumnos alumno[3];//creacion de arreglo de objeto de tipo dinamico
	Alumnos* alumno = new Alumnos[3]; //creacion de arreglo de objeto de tipo dinamico
	for(int i=0;i<3;i++){
		cout<<" Datos del alumno "<<i+1<<" : "<<endl;
		(alumno+i)->pedirdatos();
	}
	
	for(int i=0;i<3;i++){
		cout<<" Mostrando Datos del Alumno : "<<i+1<<endl;
		(alumno+i)->mostrar();
		cout<<"\n";
	}
	return 0;
}
