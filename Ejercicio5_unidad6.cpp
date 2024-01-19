#include<iostream>
#include<conio.h>
using namespace std;
/*la traspuesta de una matriz de 3x3*/
main(){
	int f,c;
	int matriz1[3][3];
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" Ingrese el valor "<<f<<c<<": "; cin>>matriz1[f][c];
		}
	}
	//imprimiendo matriz 1
	cout<<"\n Tu matriz es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<" "<<matriz1[f][c];
		}cout<<"\n";
	}
	//traspuesta de matriz 1
	cout<<"\n La traspuesta es: "<<endl;
	for(c=0;c<3;c++){
		for(f=0;f<3;f++){
			cout<<" "<<matriz1[f][c];
		}cout<<"\n";
	}
	getch();
}
