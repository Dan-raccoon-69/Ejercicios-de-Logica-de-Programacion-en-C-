/*CONSTRUIR UN PROGRAMA QUE PERMITA DIRIGIR EL MOVIMIENTO DE UN OBJETO DENTRO DE UN TABLERO Y ACTUE SU POSICION 
DENTRO DEL MISMO LOS MOVIMIENTOS POSIBLES SON ARRIBA, ABAJO,DERECHA,IZQUIERDA. 
TRAS CADA MOVIMIENTO EL PROGRAMA MOSTRARA LA NUEVO CORDENADA SITUADA DEL OBJETO DENTRO DEL TABLERO.  */
#include <iostream>
#include <stdlib.h>
#include "Mover.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,op,n;
	Mover* posicion;
	
	cout<<" Ingresa la posicion en X: "; cin>>x;
	cout<<" Ingresa la posicion en Y: "; cin>>y;
	posicion = new Mover(x,y);
	
	do {
		system("cls");
		cout<<"\t MENU"<<endl;
		cout<<" 1. Mover hacia la Derecha"<<endl;
		cout<<" 2. Mover hacia la Izquierda"<<endl;
		cout<<" 3. Mover hacia Arriba"<<endl;
		cout<<" 4. Mover hacia Abajo"<<endl;
		cout<<" 5. Salir"<<endl;
		cout<<endl<<" Selecciona la opcion deceada: "; cin>>op;
		
		switch (op){
			case 1: 
			cout<<" Numero de lugares: "; cin>>n;
			posicion->mover_derecha(n);
			break;
			case 2: 
			cout<<" Numero de lugares: "; cin>>n;
			posicion->mover_izquierda(n);
			break;
			case 3: 
			cout<<" Numero de lugares: "; cin>>n;
			posicion->mover_arriba(n);
			break;
			case 4: 
			cout<<" Numero de lugares: "; cin>>n;
			posicion->mover_abajo(n);
			break;
			case 5:
				exit(1);
			break;
		}
		cout<<" La posicion actual (X,Y) es: ("<<posicion->getx()<<","<<posicion->gety()<<")"<<endl;
		system("pause");
	}while(op!=5);
	return 0;
}
