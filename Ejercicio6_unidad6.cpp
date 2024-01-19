#include<iostream>
#include<conio.h>
using namespace std;
/*programa que suma 2 matrices cuadradas de 3x3 */
main(){
	int f,c,matriz1[3][3],matriz2[3][3],matriz_resul[3][3];
	//creando matriz1
	cout<<" Matriz 1"<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" Ingrese el valor de "<<f<<" "<<c<<": "; cin>>matriz1[f][c];
		}
	}
	//imprimiendo matriz1
	cout<<"\n Tu matriz 1 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" "<<matriz1[f][c];
		}cout<<"\n";
	}
	//creando matriz2
	cout<<"\n Matriz 2"<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" Ingrese el valor de "<<f<<" "<<c<<": "; cin>>matriz2[f][c];
		}
	}
	//imprimiendo matriz1
	cout<<"\n Tu matriz 2 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" "<<matriz2[f][c];
		}cout<<"\n";
	}
	//creando matriz3
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			matriz_resul[f][c]=matriz1[f][c]+matriz2[f][c];
		}
	}
	//imprimiendo matriz3
	cout<<"\n Tu matriz 3 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" "<<matriz_resul[f][c];
		}cout<<"\n";
	}
	getch();
} 
