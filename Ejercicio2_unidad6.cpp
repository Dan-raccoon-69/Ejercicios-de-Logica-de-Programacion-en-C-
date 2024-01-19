#include<iostream>
#include<conio.h>
using namespace std;
/* programa que define una matriz de 3x3 y muestre la diagonal principal de la matriz*/
main(){
	int c,f;
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	/*1,5,9 es la diagonal
	1 2 3
	4 5 6
	7 8 9
	*/
	cout<<" La matriz es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
		cout<<" "<<matriz[f][c];	
		}cout<<"\n";
	}
	cout<<" La diagonal de la matriz es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			if(f==c){
			cout<<" "<<matriz[f][c];			
			}
		}cout<<"\n";
	}
	cout<<"\n La diagonal principal es: "<<matriz[0][0]<<" "<<matriz[1][1]<<" "<<matriz[2][2];
	getch();
}
