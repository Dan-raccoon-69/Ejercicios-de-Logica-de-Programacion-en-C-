#include<iostream>
#include<conio.h>
using namespace std;
/*programa que rellena una matriz pidiendo al usuario el num de filas,columnas, luego mostrar la matriz*/
main(){
	int c,f,fil,col;
	int matriz[10][10];
	cout<< " Ingresa el valor de filas: "; cin>>fil;
	cout<< " Ingresa el valor de columnas: "; cin>>col;
	cout<<"\n";
	for(int f=0;f<fil;f++){
		for(int c=0;c<col;c++){
		cout<<" Escribe el valor del dato "<<c<<" "<<f<<" :";
		cin>>matriz[f][c];
		}
	}
	cout<<"\n";
	for(int c=0;c<col;c++){
		for(int f=0;f<fil;f++){
		cout<<" "<<matriz[f][c]<<" ";
		}cout<<"\n";
	}
	getch();
}
