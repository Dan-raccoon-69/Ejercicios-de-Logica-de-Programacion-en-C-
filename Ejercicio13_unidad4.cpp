#include<iostream>
#include<stdlib.h>
using namespace std;
/*hacer la serie fibonnacci 1 1 2 3 5 8 13 21*/
main(){
	int n,x=0,y=1,z=1;
	cout<<" Escribe el num de elementos: ";
	cin>>n;
	for(int i=1;i<n;i++){
		z=x+y;
		cout<<z<<" ";
		x=y;
		y=z;
	}
	cout<<"\n";
	system("pause");
}
