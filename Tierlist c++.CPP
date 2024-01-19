#include "stdio.h"
#include "iostream.h"
#include "stdlib.h"
#include "windows.h"
#include "string.h"
#include "conio.h"

void Preguntas()
{
	int opc,cont,a,b,c;
	printf("¿Usted tiene su prueba de COVID? \n");
	printf("1-Si\n");
	printf("2-No \n");
	scanf("%d",&opc);
	if(opc==1)
	{
		printf("¿Qu%c prueba de covid tiene usted? \n",130);
		printf("1-COVID-19 PCR\n");
		printf("2-Prueba r%cpida \n",160);
		printf("3-COVID-19 Serologica lgG e lgM \n");
		printf("4-Anticuerpos anti-S \n");
		printf("5-otra \n");
		scanf("%d",&opc);
		system("cls");
		printf("¿Usted cuenta con alguna vacuna con anticuerpos para el COVID-19? \n");
		printf("1-Si\n");
		printf("2-No \n");
		scanf("%d",&opc);
		if(opc==1){
			printf("¿Qu%c vacuna contra el covid tiene usted? \n",130);
			printf("1-Pfizer y BioNtech\n");
			printf("2-Oxford-AstraZenecaSputnki V \n");
			printf("3-Sinovac \n");
			printf("4-CanSinoBIO \n");
			printf("5-Moderna \n");
			printf("6-Curevac\n");
			printf("7-otra \n");
			scanf("%d",&opc);
		}
		else{
			cont=cont+1;
         a=1;
		}
		system("cls");
		printf("¿Usted cuenta con gel antibacterial y cubrebocas? \n");
		printf("1-Si\n");
		printf("2-No \n");
		scanf("%d",&opc);
		if(opc==1){
		}
		else{
			cont=cont+1;
         b=1;
		}
      system("cls");
		printf("¿Usted tiene alguna enfermedad actual? \n");
		printf("1-Si\n");
		printf("2-No \n");
		scanf("%d",&opc);
		if(opc==1){
			system("cls");
			cont=cont+1;
         printf("Elija una opci%cn: \n",162);
			printf("1-Asma\n");
			printf("2-Enfermedad cardiacas \n");
			printf("3-Enfermedad renal\n");
			printf("4-Diabetes \n");
			printf("5-otro\n");
			scanf("%d",&opc);
         c=1;
		}
		else{
		}

		if(cont>=1)
		{
      system("cls");
			printf("Usted no cumple con los requisitos para entrar a la unidad\n");
         printf("Requisitos que no cumplio:\n\n");
         if(a==1){
         printf("-No tiene la vacuna contra el COVID\n");
         }
         else{}
         if(b==1){
          printf("-No tiene gel antibacterial y cubrebocas\n");
          }
         else{}
         if(c==1){
         printf("-Usted tiene alguna enfermedad que puede perjudicarlo\n");
         }
         else{}
         printf("\nProcure para la proxima cumplir completo los requisitos \n");
         printf("El alumno con matricula:");
		}
		else{
			printf("puede ingresar el alumno con matricula:");
		}
	}
	else{
		system("cls");
		printf("Sin ninguna prueba usted no puede ingresar a la unidad ESIME CULHUACAN\n");
		printf("El alumno con matricula:");
	}
}

void Bien()
{
	printf("                  Bienvenido \n");
	printf("A continucaci%cn se le realizara unas preguntas. \n",162);
	printf("Favor de seleccionar solo UNA respuesta. \n \n");
	system("pause");
	system("cls");
}

class alum{
	private:
		int matri;
		int edad;
	public:
	  alum(int,int);
	  void leer();
};

	alum::alum(int _edad,int _matri)
	{
		edad=_edad;
		matri = _matri;
	}

	void alum::leer(){
		cout<<matri<<endl;
		printf("y con edad: ");
		cout<<edad<<endl;
	}
int main()
{
	int e,c;
	Bien();
	do{
		printf("Ingrese su matricula (No.de boleta): ");
		scanf("%d",&c);
      system("cls");
	}while(c<0||c>2022000000);
	do{
		printf("Ingrese su edad: ");
		scanf("%d",&e);
      system("cls");
		if(e<17){
		printf("Ingrese una edad correcta \n");
		}
		}while(e<17);
	alum a = alum(e,c);
	system("cls");
	Preguntas();
	a.leer();
	system("pause");
}
