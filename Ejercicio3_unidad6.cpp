#include<iostream>
#include<conio.h>
using namespace std;
/* matriz de 2x2, llenarla y copiarla a otra matriz*/
main(){
	int matriz1[10][10];
	int matriz2[10][10];
	int f,c;
	//creando matriz1 2x2
	for(int f=0;f<2;f++){
		for(int c=0;c<2;c++){
			cout<<" Ingresa el dato "<<f<<c<<" : ";
			cin>>matriz1[f][c];
		}
	}
	//mostrando matriz1
	cout<<"\n";
	cout<<" La matriz 1 es: "<<endl;
	for(f=0;f<2;f++){
		for(c=0;c<2;c++){
			cout<<" "<<matriz1[f][c];
		}cout<<"\n";
	}
	//creando matriz2, copiando
	cout<<"\n";
	for(f=0;f<2;f++){
		for(c=0;c<2;c++){
			matriz2[f][c]=matriz1[f][c];
		}
	}
	//mostrando matriz2
	cout<<"\n";
	cout<<" La matriz 2 es: "<<endl;
	for(f=0;f<2;f++){
		for(c=0;c<2;c++){
			cout<<" "<<matriz2[f][c];
		}cout<<"\n";
	}
	getch();
}
