#include<iostream>
#include<conio.h>
using namespace std;

int elementos;
template <class dato>
void pedir_datos(dato vect[],int);

int main(){
	
	pedir_datos(vect,TAM);
	
	getch();
	return 0;
}

void pedir_datos(dato vect[],int elementos){
	cout<<" Escribe el num de datos: ";
	cin>>elementos;
	for(int i=0;i<elementos;i++){
		cout<<" Escribe el dato "<<i+1<<": ";
		cin>>vect[i];
	
	}
	
}

