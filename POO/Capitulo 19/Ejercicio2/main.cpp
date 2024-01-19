#include <iostream>
#include"Alumno.h"
#include"Deportista.h"
#include"Becadodeporte.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Alumno* alumnojuan = new Alumno("Informatica");
	Alumno* alumnopedro = new Alumno("Programacion");
	Deportista* deporluis = new Deportista("S.r Martinez");
	Becadodeporte* bdAna= new Becadodeporte("Veterinaria","S.ra Mendez",1500);
	Becadodeporte* bdcarmen= new Becadodeporte("Administracion","S.ra Valle",1350);
	
	cout<<" Datos: "<<endl;
	cout<<" Alumno Juan: "<<endl;
	alumnojuan->mostrardatos();
	
	cout<<"\n Alumno Pedro: "<<endl;
	alumnopedro->mostrardatos();
	
	cout<<"\n Deportista Luis: "<<endl;
	deporluis->mostrardatos();
	
	cout<<"\n Becada Deportista Ana: "<<endl;
	bdAna->mostrardatos();
	
	cout<<"\n Becada Deportista Carmen: "<<endl;
	bdcarmen->mostrardatos();
	
	string nuevacarre;
	
	cout<<"\n Digite la nueva carrera del alumno Juan : "; getline(cin,nuevacarre);
	alumnojuan->setnombrecarrera(nuevacarre);
	cout<<"\n Digite la nueva carrera del alumno Ana : "; getline(cin,nuevacarre);
	bdAna->setnombrecarrera(nuevacarre);
	
	cout<<"\n La nueva carrera de alumno Juan: ";
	cout<<alumnojuan->getnombrecarrera();
	cout<<"\n La nueva carrera de la alumna Ana: ";
	cout<<bdAna->getnombrecarrera();
	
	string nuevoentre;
	
	cout<<"\n Digite el nuevo entrenador de Deportista Luis: "; getline(cin,nuevoentre);
	deporluis->setnombrenetrenador(nuevoentre);
	cout<<"\n Digite el nuevo entrenador de Deportista Carmen : "; getline(cin,nuevoentre);
	bdcarmen->setnombrenetrenador(nuevoentre);
	
	cout<<"\n El nuevo entrenador de deportista Luis: ";
	cout<<deporluis->getnombrentrenador();
	cout<<"\n El nuevo entrenador de deportista Carmen:  ";
	cout<<bdcarmen->getnombrentrenador();
	
	
	float newmonto;
	cout<<"\n Digite el incremento de la beca de Ana : "; cin>>newmonto;
	bdAna->setmontobeca(newmonto);
	cout<<"\n Digite el incremento de la beca de Carmen : "; cin>>newmonto;
	bdcarmen->setmontobeca(newmonto);
	
	cout<<"\n El nuevo monto beca de Ana: ";
	cout<<bdAna->getmontobeca();
	cout<<"\n El nuevo monto de beca de Carmen:  ";
	cout<<bdcarmen->getmontobeca();
	
	delete alumnojuan;
	delete alumnopedro; 
	delete deporluis;	
	delete bdAna;
	delete bdcarmen;
	return 0;
}
