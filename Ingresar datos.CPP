#include "stdio.h"
#include "iostream.h"
#include "stdlib.h"
#include "windows.h"
#include "string.h"
#include "conio.h"

//Declarar clase principal
class Datos
{
private://atributos
  int edad;
  float estatura;
public://metodos
  Datos(int,float);//Constructor
  void imprimir();
};
//Declaramos el constructor, inicicalizan variables
Datos::Datos(int _edad, float _estatura)
{
 edad=_edad;
 estatura=_estatura;
}
//Procedimiento imprimir
void Datos::imprimir()
{
printf("Su edad es: %i a%cos\n",edad,164);
printf("Su estatura es: %.2f m\n",estatura);
}

int main()
{
//Variables iniciales
char n[50];
int e;
float es;

printf("Favor de ingresar su nombre: ");
scanf("%s",&n);
printf("Favor de ingresar su edad: ");
scanf("%i",&e);
printf("Favor de ingresar su estatura: ");
scanf("%f",&es);
system("cls");
printf("Su nombre es: %s\n",n);
Datos a = Datos(e,es);
//Ejecutar el objeto
  a.imprimir();

getch();
}


