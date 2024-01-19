/*hacer 2 estructuras una llamada promedio que tendra los sig campos: 
nota1,nota2,nota3; y otra llamada alumno que tendra los sig campos:
nombre,sexo,edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos 
para un alumno, luego calcular su promedio y por ultimo imprimir todos los datos incluido el promedio  */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct promedio{
	float nota1,nota2,nota3;
	};

struct alumno{
	char nombre[50];
	char sexo[50];
	int edad;
	struct promedio datos;
	}alumnos;
	
main(){
	float promedio_alumno;
	fflush(stdin);
	cout<<"\n El nombre del alumno es: "; cin.getline(alumnos.nombre,50,'\n');
	cout<<" El sexo del alumno es: "; cin.getline(alumnos.sexo,50,'\n');
	cout<<" La edad es: "; cin>>alumnos.edad;
	cout<<" La calificacion 1 es: "; cin>>alumnos.datos.nota1;
	cout<<" La calificacion 2 es: "; cin>>alumnos.datos.nota2;
	cout<<" La calificacion 3 es: "; cin>>alumnos.datos.nota3;
	//calculo
	promedio_alumno=(alumnos.datos.nota1+alumnos.datos.nota2+alumnos.datos.nota3)/3;
	 system("cls");
	 cout<<"\n Tus datos son: ";
	 cout<<"\n El nombre es: "<<alumnos.nombre<<endl;
	 cout<<" El sexo es: "<<alumnos.sexo<<endl;
	 cout<<" La edad es: "<<alumnos.edad<<endl;
	 cout<<" Su promedio es: "<<promedio_alumno<<endl;
	getch();
}


