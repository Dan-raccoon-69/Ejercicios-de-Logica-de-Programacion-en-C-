#include<iostream>
#include<conio.h>
using namespace std;
/*programa que determina si es matriz simetrica
es simetrica si es cuadrada y su traspuesta es la misma 
1 2 3		1 4 7
4 5 6		2 5 8
7 8 9		3 6 9
*/
main(){
	int filas, columnas,c,f,matriz[10][10],contador=0;
	char band='F';
	cout<< " Ingresa el numero de filas: "; cin>>filas;
	cout<< " Ingresa el numero de columnas: "; cin>>columnas;
	
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		cout<<" Ingresa el valor "<<f<<c<<": ";
		cin>>matriz[f][c];
		}	
	}
	
	cout<<"\n La matriz es: "<<endl;
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		cout<<" "<<matriz[f][c];
		}cout<<"\n";	
	}
	
	if(filas==columnas){
	cout<<"\n La matriz traspuesta es: "<<endl;
	for(f=0;f<filas;f++){
		for(c=0;c<columnas;c++){
		cout<<" "<<matriz[c][f];
		}cout<<"\n";	
	}	
	}
	
	if(filas==columnas){		
		for(f=0;f<filas;f++){
			for(c=0;c<columnas;c++){
				if(matriz[f][c] == matriz[c][f]){
				contador++;	
				}
			}
		}	
	}
	
	/*if(band =='V'){
		cout<<"\n La matriz es simetrica";
	}else cout<<"\n La matriz NO es simetrica";
	*/
	 if(contador==(filas*columnas)){
  cout<<"\n La matriz digitada ES simetrica."<<endl;
     }else{
      cout<<"\n La matriz digitada NO es simetrica.";
  }
	}
	
