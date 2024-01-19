#include<iostream>
#include"Estudiante.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Estudiante* alumno=new Estudiante("CUBD021014HDFRTNA6",9.5,2021350285,"Calle Ramon Lopez Velarde Mza de Lote 7, Colonia Benito Juarez 3era sección.");
		
	alumno->mostrar();


	return 0;
}
