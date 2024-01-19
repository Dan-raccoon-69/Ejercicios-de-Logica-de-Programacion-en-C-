#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/*programa que muestra la suma de los cuadrados 
de los 1eros 10 numero mayores a 0
*/
main(){
	int suma=0,cuadrado=0;
	for(int num=1;num<11;num++){
		cuadrado=pow(num,2);
		suma+=cuadrado; //o suma=suma+cuadrado;
	}
	cout<<"\n La suma cuadrada de los 1eros 10 es: "<<suma;
	getch();
}
