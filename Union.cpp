#include<iostream>
 #include<conio.h>
 #include<stdlib.h>
using namespace std;
 
int menup();
int menuejer1();
int menuejer2();
int menuejer3();
int devolver();
 
int main(){
    char contrasenia[20]; 
    int i,j, aux,opc;
    int d=0,wr=0,as=0,b;
    d=menup();
while(d>1 | d<3){
    
 
    switch(d) {
        case 1:// primer submenu
        wr=menuejer1();
        while (wr>1 | wr<=4){
            switch(wr) {
                case 1:
                    system("cls"); 
                    cout<<"usted esta en el 1er Parcial "<<endl;
                    cout<<"ejercicio 1 "<<endl;
                    cout<<"  "<<endl;
                       printf("\nLa contrase%ca debe cumplir por lo menos con 9 caracteres y 4 valores num%cricos\n",164,130);

   printf("Ingresa caracteres para tu contrase%ca\n",164);
   scanf(" %s",contrasenia);
   printf("Ingresa valores num%cricos para tu contrase%ca\n",130,164);
   scanf(" %d",&b);

   if(contrasenia>=0 && b>=1000)
   {
   printf("\tContrase%ca correcta\n",164);
   printf("\tTu contrase%ca es: %s%d",164,contrasenia,b);
   }
   else
   {
    printf("\tContrase%ca no apta\n",164);
     }
                    devolver();
                break;
                case 2: 
                    system("cls"); 
                    cout<<"usted esta en el 1er Parcial "<<endl;
                    cout<<"ejercicio 2 "<<endl;
                    cout<<"  "<<endl;
           int arreglo[7];
       printf("Programa que ordena 7 n%cmeros e imprime\n",163);
       for(i=0;i<=6;i++)
       {
           do{
         	printf("Ingrese el n%cmero que desea ordenar\n------>",163);
         	scanf( "%d",&arreglo[i]);
            system("cls");
      		}
      		while(arreglo[i]>1000000);

       }

       for(i=0;i<=6;i++)
       {
           for(j=i+1;j<=6;j++)
           {
               if(arreglo[i]>arreglo[j])
               {
                   aux = arreglo[i];
                   arreglo[i] = arreglo[j];
                   arreglo[j] = aux;
               }
           }
       }
		system("cls");
   	printf("Desea acomodar de %cmayor a menor o de menor a mayor?",168);
   	printf("\n1------> Menor a mayor");
   	printf("\n2------> Mayor a menor");
   	printf("\nIngrese la opci%cn: ",162);
   	scanf( "%d",&opc );

   	if(opc==1)
      {


       	for(i=0;i<=6;i++)
       	{
           printf("El orden es: %d\n",arreglo[i]);
       	}
      }

      else{

      	for(i=6;i>=0;i--)
       	{
           printf("El orden es: %d\n",arreglo[i]);

       	}


      }
      system("PAUSE");
                    devolver();
                break;
                case 3: 
                system("cls"); 
                    cout<<"usted esta en el 1er Parcial "<<endl;
                    cout<<"ejercicio 3 "<<endl;
                    cout<<"  "<<endl;
				    devolver(); 
				    break;
                    case 4: 
                    system("cls"); 
                    cout<<"usted esta en el 1er Parcial "<<endl;
                    cout<<"ejercicio 4 "<<endl;
                    cout<<"  "<<endl;
				    devolver();
				    break;
				    case 5:
                    cout<<"Saliendo "<<endl;
                    cout<<"Gracias"<<endl;
                    break;  
            }
        }
        
        break;
        
        case 2: // segundo submenu
            as=menuejer2();
            
            while(as>1 | as<=4){
                
                switch(as) {
                    case 1:
                        system("cls"); 
                        cout<<"usted esta en el 2do Parcial "<<endl;
                        cout<<"ejercicio 1 "<<endl;
                        cout<<"  "<<endl;
                        devolver();
                        break;
                    case 2:
                        system("cls"); 
                        cout<<"usted esta en el 2do Parcial "<<endl;
                        cout<<"ejercicio 2 "<<endl;
                        cout<<"  "<<endl;
                        devolver();
                        break;
                }
            }
            
            case 3: // segundo submenu
            as=menuejer3();
            
            while(as>1 | as<=4){
                
                switch(as) {
                    case 1:
                        system("cls"); 
                        cout<<"usted esta en el 3er Parcial "<<endl;
                        cout<<"ejercicio 1 "<<endl;
                        cout<<"  "<<endl;
                        devolver();
                        break;
                    case 2:
                        system("cls"); 
                        cout<<"usted esta en el 3er Parcial "<<endl;
                        cout<<"ejercicio 2 "<<endl;
                        cout<<"  "<<endl;
                        devolver();
                        break;
                }
            }
            
            break;
        case 4:
            cout<<"Saliendo "<<endl;
            cout<<"Gracias"<<endl;
            break;  
    }
 
}   
    
    cin.get();
    return 0;
}
int menup(){// menu principal 
    int op=0;
    while(op<1 | op>4){
        op=0;
        system("cls");
        cout<<"****  Bienvenido al menu principal ****"<<endl;
        cout<<"*                                                 *"<<endl;
        cout<<"*   Digite el numero de ejercicios que desea ver: *"<<endl;
        cout<<"*                                                 *"<<endl;
        cout<<"*"<<" -> 1. 1er Parcial                               *"<<endl;
        cout<<"*"<<" -> 2. 2do Parcial                               *"<<endl;
        cout<<"*"<<" -> 3. 3er Parcial                               *"<<endl;
        cout<<"*"<<" -> 4. Salir                                     *"<<endl;
        cout<<"*                                                 *"<<endl;
        cout<<"*******************"<<endl;
        cout<<"  "<<endl;
        cout<<" Su opcion es: ";cin>>op;
    
    }
    
    return op;  
}
int menuejer1(){// segundo menu
    int op1=0;
        while(op1<1 | op1>5){
        system("cls");  
        cout<<"**** Programas 1er Parcial ***"<<endl;
        cout<<"*                                    *"<<endl;
        cout<<"*  Programa 1      ";cout<<"    Programa 2    *"<<endl;  
        cout<<"*  Programa 3      ";cout<<"    Programa 4    *"<<endl;//funcionando
        cout<<"*                                    *"<<endl;
        cout<<"**************"<<endl;
        cout<<" "<<endl;
        cout<<"Digite el numero del ejercicio que desea ver: "; cin>>op1;   
        }
    
    return op1;
}
 int menuejer2(){
    int op2=0;
        while(op2<1 | op2>4){
        system("cls");  
        cout<<"**** Programas 2do Parcial ***"<<endl;
        cout<<"*                                    *"<<endl;
        cout<<"*  Programa 1      ";cout<<"    Programa 2    *"<<endl;  
        cout<<"*  Programa 3      ";cout<<"    Programa 4    *"<<endl;
        cout<<"*                                    *"<<endl;
        cout<<"**************"<<endl;
        cout<<" "<<endl;
        cout<<"Digite el numero del ejercicio que desea ver: "; cin>>op2;   
        }
    
    return op2;
}
int menuejer3(){
    int op3=0;
    while(op3<1 | op3>4){
        system("cls");  
        cout<<"**** Programas 3er Parcial ***"<<endl;
        cout<<"*                                    *"<<endl;
        cout<<"*  Programa 1      ";cout<<"    Programa 2    *"<<endl;  
        cout<<"*  Programa 3      ";cout<<"    Programa 4    *"<<endl;
        cout<<"*                                    *"<<endl;
        cout<<"**************"<<endl;
        cout<<" "<<endl;
        cout<<"Digite el numero del ejercicio que desea ver: "; cin>>op3;
    }
    return op3;
}
 
int devolver(){
    
    int abcx=0;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"1. Desea volver al menu inicial"<<endl;
    cout<<"2. Desea ver el menu de los ejercicios 2do Parcial"<<endl;
    cout<<"3. Desea ver el menu de los ejercicios 3er Parcial"<<endl;
    cout<<"4. Desea Salir del sistema"<<endl;
    cin>>abcx;
    system("cls");
    switch(abcx){
        case 1:
            system("cls");
            menup();
            break;
        case 2:
            system("cls");
            menuejer2();
            break;
        case 3:
            system("cls");
            menuejer3();
            break;
        case 4:
            system("cls");
            cout<<"Gracias.."<<endl;
            break;
    }
    
}
