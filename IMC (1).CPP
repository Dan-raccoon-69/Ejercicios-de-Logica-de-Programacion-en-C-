#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "string.h"
#include "conio.h"

class IMC
{
 private:
    int edad;
    float estatura,peso,imc;
 public:
 	 IMC(int,float,float);
    void imprimir();
    IMC(float);
    void calcular();
};


IMC::IMC(float _imc)
{
imc=_imc;
}

void IMC::calcular()
{
	if(imc<16)
		{
   	printf("\nTu IMC es: %f \nSeg%cn la OMS tienes: Delgadez severa",imc,163);
		}
   if(imc>16 && imc<18.5)
   	{
      printf("\nTu IMC es: %f \nSeg%cn la OMS tienes: Delgadez leve",imc,163);
		}
    if(imc>18.5 && imc<24.9)
		{
       printf("\nTu IMC es: %f \nSeg%cn la OMS tienes: Peso Normal",imc,163);
		}
    if(imc>25 && imc<29.9)
		{
       printf("\nTu IMC es: %f \nSeg%cn la OMS tienes: Pre-Obesidad",imc,163);
		}
      if(imc>30 && imc<40)
      {
       printf("\nTu IMC es: %f \nSeg%cn la OMS tienes: Obesidad",imc,163);
      }

}

IMC::IMC(int _edad,float _estatura, float _peso)
{
 edad=_edad;
 estatura=_estatura;
 peso=_peso;
}
void IMC::imprimir()
{
printf("Su edad es: %i a%cos\n",edad,164);
printf("Su estatura es: %.2f m\n",estatura);
printf("Su peso es: %.2f kg\n", peso);
}

int main()
{
char n[50],g[6];
int e;
float es,p,imc1;

printf("Favor de ingresar su nombre: ");
scanf("%s",&n);
printf("Favor de ingresar su g%cnero(hombre o mujer): ",130);
scanf("%s",&g);
printf("Favor de ingresar su edad: ");
scanf("%i",&e);
printf("Favor de ingresar su estatura: ");
scanf("%f",&es);
printf("Favor de ingresar su peso: ");
scanf("%f",&p);
imc1 = p/(es*es);
system("cls");
printf("Su nombre es: %s\n",n);
printf("Su genero es: %s\n",g);
IMC a(e,es,p);
IMC b(imc1);
//Ejecutar el objeto
  a.imprimir();
  b.calcular();
getch();
}