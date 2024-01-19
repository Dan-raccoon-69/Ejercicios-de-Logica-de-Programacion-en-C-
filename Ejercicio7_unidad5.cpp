#include<iostream>
#include<conio.h>
using namespace std;
//almacenar valores de 2 vectores en 1, y mostarlo en pantalla
main(){
	char letra1[]={'a','e','i','o','u'};	
	char letra2[]={'b','c','d','f','g'};
	char letra3[10];
	//almacenar los elementos de letra1 a letra3
	for(int c=0;c<5;c++){
	letra3[c]=letra1[c];
	}
	//almacenar los elementos de letra2 a letra3
	for(int c=5;c<10;c++){
	letra3[c]=letra2[c-5];	
	}
	//imprimir
	for(int c=0;c<10;c++){
		cout<<" "<<letra3[c];
	}
	getch();
}
