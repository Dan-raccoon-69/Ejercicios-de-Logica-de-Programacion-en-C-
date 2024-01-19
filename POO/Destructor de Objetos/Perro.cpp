#include <iostream>
using namespace std;
#include "Perro.h"
void Perro::mostrardatos(){
	cout<<" Nombre: "<<nombre<<endl;
	cout<<" Raza: "<<raza<<endl;
}
void Perro::jugar(){
cout<<" El perro llamado "<<nombre<<" pertenece a la raza "<<raza<<" y se encuentra jugando."<<endl;
}
