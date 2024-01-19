#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main(){
    int i, k, Der, Izq, Aux, N, A[30];
    cout<<"METODO DE ORDENAMIENTO - SHAKER SORT"<<endl;
        
            cout<<"Ingrese el tamanio del arreglo : "<<endl; 
        cin>>N;
        k=N;
        Izq=1;
        Der=N-1;
        for(i=0;i<N;i++){
            cout<<"\tA["<<i<<"] : ";        
            cin>>A[i];
        }
        do{//inicio del ordenamiento
            for(i=Der;i>=0;i--){//derecha a izquierda
                if(A[i-1]>A[i]){
                    Aux=A[i-1];
                    A[i-1]=A[i];
                    A[i]=Aux;
                    k=i;
                }
                
        }
            Izq=k+1;
            for(i=Izq;i<=Der;i++){ //izquierda a derecha
			
			if(A[i-1]>A[i]){
                    Aux=A[i-1];
                    A[i-1]=A[i];
                    A[i]=Aux;
                    k=i;
                }
			}
            Der=k-1;
        }while(Izq<Der);//Fin del ordenamiento
        
        cout<<"\n\tArreglo Ordenado\n\t==================\n";
        for(i=0;i<N;i++)
            cout<<"\t"<<A[i];
        cout<<endl<<"\t";
        
        system("pause");
        return 0;
        getch();
}
