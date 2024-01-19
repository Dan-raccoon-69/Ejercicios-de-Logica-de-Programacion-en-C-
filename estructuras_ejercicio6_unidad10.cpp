/* utilizarar las 2 estrcuturas del ejercicio 5, pero ahora para N estudiantes y calcular cual de todos 
tiene mejor promedio e imprimir sus datos. */
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
	}alumnos[50];
	
main(){
	float mayor=0,promedio_alumno[100];
	int num_alumnos,n,posicion;
	cout<<"\n Ingrese la cantidad de alumnos a registrar: "; cin>>num_alumnos;
	fflush(stdin);
	for(n=1;n<=num_alumnos;n++){
	fflush(stdin);
	cout<<"\n El nombre del alumno "<<n<<" es: "; cin.getline(alumnos[n].nombre,50,'\n');
	fflush(stdin);
	cout<<" El sexo del alumno "<<n<<" es: "; cin.getline(alumnos[n].sexo,50,'\n');
	cout<<" La edad del alumno "<<n<<" es: "; cin>>alumnos[n].edad;
	cout<<" La calificacion 1 del alumno "<<n<< " es: "; cin>>alumnos[n].datos.nota1;
	cout<<" La calificacion 2 del alumno "<<n<< " es: "; cin>>alumnos[n].datos.nota2;
	cout<<" La calificacion 3 del alumno "<<n<< " es: "; cin>>alumnos[n].datos.nota3;
	//calculo
	promedio_alumno[n]=(alumnos[n].datos.nota1+alumnos[n].datos.nota2+alumnos[n].datos.nota3)/3;
	if(promedio_alumno[n]>mayor){
		mayor=promedio_alumno[n];
		posicion=n;
	}
	}
	
	 system("cls");
	 cout<<"\n Datos del alumno con mayor promedio son: ";
	 cout<<"\n El nombre es: "<<alumnos[posicion].nombre<<endl;
	 cout<<" El sexo es: "<<alumnos[posicion].sexo<<endl;
	 cout<<" La edad es: "<<alumnos[posicion].edad<<endl;
	 cout<<" Su promedio es: "<<promedio_alumno[posicion];
	 getch();
}


