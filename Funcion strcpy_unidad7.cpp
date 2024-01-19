#include<iostream>
#include<conio.h>
#include<string.h>
/*funcion strcpy */
using namespace std;
main(){
	 char nombre[] = "Daniel Gustavo";
	 char nombre2[20];
	 strcpy(nombre2,nombre);
	 cout<<" La cadena 1 es: "<<nombre<<endl;
	 cout<<" La cadena 2 es: "<<nombre2;
	 getch();

}
