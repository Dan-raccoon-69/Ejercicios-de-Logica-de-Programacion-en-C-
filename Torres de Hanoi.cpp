#include <iostream>
#include <stdlib.h>

using namespace std;
int c=0;
void Torrehanoi(int dnum,char O,char D,char A)
{
	c++;
	
	if(dnum==1)
    {
            cout<<"Mover D"<<dnum<<" desde T"<< O <<" a T"<< D <<endl;
    }
    else
    {
        Torrehanoi(dnum-1, O, A, D);
        cout<<"Mover D"<<dnum<<" desde T"<< O <<" a T"<< D <<endl;
        Torrehanoi(dnum-1, A, D, O);
        
    }
}


 
main()
{       system("color 0c" );
        int n,mov,x;
        char O, A, D;
 
        cout<<"Las Torres son  O <Origen>  A <Auxiliar>  D <Destino>\n";
        cout<<endl;
        cout<<"Ingrese el numero de discos: ";
        cin>>n;
        cout<<endl;
         cout<<"     Movimientos    "<<endl;
        Torrehanoi(n,'O','D','A');
        cout<<"La cantidad de movimientos son: "<<c;        
}
