#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "string.h"
#include "conio.h"

class COVID
{
private:
 int po;
public:
 COVID(int);
 void calcular();
};

COVID::COVID(int _po)
{
po=_po;
}

void COVID::calcular()
{
  if(po>=7)
  {
  printf("\n           -------- Riesgo alto de padecer COVID-19 --------");
  printf("\n\n Si presentas s%cntomas graves, busca atenci%cn m%cdica inmediata.\n Sin embargo, siempre debes llamar a tu doctor o centro de atenci%cn sanitaria \nantes de presentarte en el lugar en cuesti%cn.\n\n",161,162,130,162,162,162);
  }
  else
  {

  if(po>=4&&po<=6)
  {
  printf("\n           -------- Riesgo medio de padecer COVID-19 --------");
  printf("\n\n Quedate en casa y lavate las manos frecuentemente con agua y jab%cn,\n por lo menos, 20 segundos sin olvidar la mu%ceca y tallando en%crgicamente las palmas,\n el dorso y entre los dedos. Al finalizar, hay que secar las manos con papel desechable.\n\n",162,164,130);
  }
  else
  {
  printf("\n           -------- Sin riesgo a padecer COVID-19 --------");
  printf("\n\nPortar cubrebocas cuando salgas, l%cvate las manos constantemente, \ntoma distancia de 1.5m no acudas a lugares concurridos y \nsigue las recomendaciones de las autoridades sanitarias.\n\n",160);
  }

  }
  printf("\n");
  system("pause");
}

int main()
{
int a,b,c,d,e,f,g,h,i,j,po;
printf("%cTienes fiebre? (mayor o igual a 38 grados) \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&a);
   	if(a==1)
   	{
        a=1;
      }
      else{
      a=0;}
system("cls");
printf("%cTienes dolor en el pecho? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&b);
   	if(b==1)
   	{
      	b=1;}
      else{
      b=0;  }
system("cls");
printf("%cTienes dolor de cabeza? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&c);
   	if(c==1)
   	{
        c=1;}
         else{c=0;}
system("cls");
printf("%cTienes dolor de garganta? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&d);
   	if(d==1)
   	{
        d=1;}
        else{d=0;}
system("cls");
printf("%cTienes dificultad para respirar? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&e);
   	if(e==1)
   	{
        e=1;}
        else{e=0;}
system("cls");
printf("%cTienes escurrimiento nasal? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&f);
   	if(f==1)
   	{
        f=1;} else{f=0;}
system("cls");
printf("%cTienes conjuntivitis? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&g);
   	if(g==1)
   	{
        g=1;}else{g=0;}
system("cls");
printf("%cTienes algunas de las siguientes condiciones? (diabetes, hipertenci%cn, obesidad, problemas cardiacos, asma, epoc, VIH, cancer) \n 1-si \n 2-no \n Ingrese su respuesta: ",168,162);
   	scanf("%d",&h);
   	if(h==1)
   	{
        h=1;}else{h=0;}
system("cls");
printf("%cSientes dolor al respirar? \n 1-si \n 2-no \n Ingrese su respuesta: ",168);
   	scanf("%d",&i);
   	if(i==1)
   	{
        i=1;}else{i=0;}
system("cls");
printf("%cTienes coloraci%cn azul o morada en labios, dedos o u%cas? \n 1-si \n 2-no \n Ingrese su respuesta: ",168,162,164);
   	scanf("%d",&j);
   	if(j==1)
   	{
        j=1;} else{j=0;}

po=a+b+c+d+e+f+g+h+i+j;
system("cls");
COVID z(po);
z.calcular();
getch();
}
