#include<iostream>
#include<stdlib.h>
using namespace std;
/*programaa que te deja ingresar valores siempre y cuando hasta que se 
ingresen valores entre 20-30 o se introduzca el valor 0, al final 
entrega la suma de valores mayores a 0;
*/
main(){
	int num,suma=0;
	
	do{
	cout<<" Escribe el numero: "; cin>>num;			
	if(num>0){
		suma=suma+num;
	}
	
	}while((num<20 || num>30) && num!=0);
	cout<<" Suma de positivos es: "<<suma;			
	}


