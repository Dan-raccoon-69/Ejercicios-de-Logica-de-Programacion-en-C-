#include <string>
#include <iostream>
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

//librerías
using namespace std;

int ccd(int mes, int a),resta,x;
bool b(int a);
int zeller(int ano,int mes, int dia);

void pro()
{
int a;
string m[12] = {"Enero","Febrero","Marzo","Abril","Mayo",
"Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

printf("Ingrese un a%co: ",164);
scanf("%d",&a);
if(a>1582)
{

for(int mes=1 ; mes<=12 ; mes++)
 {
 printf("\n        %s",m[mes-1]);
 printf("\nDom Lun Mar Mie Jue Vie Sab \n");

int x = zeller(a,mes,1);

for(int i = 0 ; i<x ; i++)
  {
  printf("    ");
  }


 int dma = ccd(mes,a);

 for(int dia=1 ; dia<= dma ; dia++)
 {
  if(a>=2002 && dia==17 && mes==12)
  {
     printf("*17 ");
     dia++;
     x++;
     if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
 if(a>=2002 && dia==14 && mes==12)
  {
     printf("*14 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
 if(a>=2002 && dia==25 && mes==10)
  {
     printf("*25 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
 if(a>=2002 && dia==14 && mes==10)
  {
     printf("*14 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
if(dia==25 && mes==12)
  {
     printf("[25]");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
if(dia==1 && mes==1)
  {
     printf("[1] ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }
if(dia==2 && mes==11)
  {
     printf("[2]  ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }

  if(dia==28 && mes==3)
  {
     printf("+28 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }

 if(dia==29 && mes==3)
  {
     printf("+29 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }

 if(dia==30 && mes==3)
  {
     printf("+30 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
   }



 if(dia==1 && mes==4)
  {
     printf("+1 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }


 if(dia==2 && mes==4)
  {
     printf(" +2  ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }

 if(dia==1 && mes==2)
  {
     printf(" (1) ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }

  if(dia==1 && mes==5)
  {
     printf("-1");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }


 if(dia==16 && mes==9)
  {
     printf("/16 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }


 if(dia==15 && mes==11)
  {
     printf("&15 ");
     dia++;
      x++;
      if(x % 7 ==0)
 		{
  			printf("\n");
 		}
 }


 printf("%d",dia);
 if(dia<10)
 {
 printf("   ");
 }

 else
 {
 printf("  ");
 }

  x++;
 if(x % 7 ==0)
 {
  printf("\n");
 }

 }
 printf("\n");

}
printf("\n\n\n");
printf("     SIMBOLOG%cA\n\n",214);
printf("([]) Dia festivo\n",164);
printf("-Navidad\n");
printf("-A%co Nuevo\n",164);
printf("-Dia de Muertos\n");
printf("-Semana santa(+)\n");
printf("-Constituci%cn mexicana(())\n",162);
printf("-Dia del trabajo(-)\n");
printf("-Dia de independencia(/)\n");
printf("-Dia de la revoluci%cn(&)\n",162);
printf("( * ) cumplea%cos de un integrante del equipo\n",164);
if(a<2002)
{
	printf("       -Luis Angel a%cn no ha nacido\n",163);
   printf("       -Juan a%cn no ha nacido\n",163);
   printf("       -Daniel a%cn no ha nacido\n",163);
   printf("       -Osvaldo a%cn no ha nacido\n",163);
   system("pause");
}
else
{
resta=a-2002;
printf("       -Luis Angel cumplir%c %i a%cos\n",160,resta,164);
printf("       -Juan cumplir%c %i a%cos\n",160,resta,164);
printf("       -Daniel cumplir%c %i a%cos\n",160,resta,164);
printf("       -Osvaldo cumplir%c %i a%cos\n\n\n",160,resta,164);
system("pause");
}
}
else
{
	printf("\nERROR: A%cn no se inventaba este calendario\n\n",163);
   system("pause");
}
}
int ccd(int mes, int a){

if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes==12)
return 31;

if(mes == 2)
{

if(b(a)== true)
{
return 29;
}

else return 28;

}

return 30;

}


bool b(int a)
{
    if(a%4 != 0) return false;
    else if(a%100 != 0) return true;
    else if(a%400 != 0) return false;
    return true;
}


int zeller(int ano,int mes, int dia)
{
         //Dom 0,  Lun 1, Mart 2, Mier 3, Juev 4, Vier 5, Sab 6

    int a = (14-mes)/12;
    int y = ano - a;
    int m = mes + 12*a - 2;
    int d = (dia + y+ y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}

int main()
{
     pro();
}
