#include<iostream>
#include<stdlib.h>
using namespace std;
/*programa que lee datos hasta que se introduzca un 0, si es asi, termina
y mostrar en la salida el numero de valores mayores a cero leidos.
*/
main(){
	int num,contador_numeros=0,contador_numero_nega=0;
	do{
		cout<<" Ingresa un numero diferente de 0: "; cin>>num;
		if(num>0){
		contador_numeros++;	
		}
		if(num<0){
		contador_numero_nega++;	
		}
	}while(num!=0);
		cout<<"\n La cantidad de valores mayores a 0 son: "<<contador_numeros;
		cout<<"\n La cantidad de valores menores a 0 son: "<<contador_numero_nega;
		cout<<"\n";
		system("pause");
}
