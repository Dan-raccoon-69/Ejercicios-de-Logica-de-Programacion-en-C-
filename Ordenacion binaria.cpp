#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

main(){
int a[]={10,8,7,2,1,3,5,4,6,9},i,aux,der,izq,m,j;
for (i=1;i<10;i++){
aux=a[i];
izq=0;
der=i-1;
while(izq<=der){
m=(izq+der)/2;
if (aux<=a[m])
der=m-1;
else
izq=m+1;
}
j=i-1;
while(j>=izq){
a[j+1]=a[j];
j--;
}
a[izq]=aux;
}
for (i=0;i<10;i++)
printf("%d..",a[i]);
putchar('\n');
getchar();
	
}

