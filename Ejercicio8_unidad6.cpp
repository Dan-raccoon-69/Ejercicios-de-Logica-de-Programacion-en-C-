#include<iostream>
#include<conio.h>
using namespace std;
/*multiplicacion de matriz 3*3 */
main(){
	int c,f;
	int matriz1[3][3]={{1,2,3}, {4,5,6} ,{7,8,9}},matriz2[3][3]={{4,5,6} ,{3,2,1}, {1,2,3}};
	int matriz3[3][3];
	cout<<"\n La matriz 1 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
		cout<<" "<<matriz1[f][c];
		}cout<<"\n";	
	}
	cout<<"\n La matriz 2 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
		cout<<" "<<matriz2[f][c];
		}cout<<"\n";	
	}
	
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
		matriz3[f][c]=0;
		for(int k=0;k<3;k++){
			matriz3[f][c]=matriz3[f][c]+matriz1[f][k]*matriz2[k][c];
		}
		}
	}
	cout<<"\n La matriz 3 es: "<<endl;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
		cout<<" "<<matriz3[f][c];
		}cout<<"\n";	
	}
	
	
	
	
}
