/*CONSTRUIR UN PROGRAMA QUE DADA UNA SERIE DE VEHICULOS CARACTERIZADOS POR SU MARCA, MODELO, PRECIO, , IMPRIMA LAS 
PROPIEDADES DEL VEHICULO MAS BARATO. PARA ELLO , SE DEBERAN LEER POR TECLADO LAS CARACTERISITCAS DE CADA VEHICULO 
Y CREAR UNA CLASE QUE REPRESENTE A CADA UNO DE ELLOS. */


#include <iostream>
using namespace std;
#include"Vehiculo.h"

int main(int argc, char** argv) {
	//no inicializas tu objeto cohe porque se pone aparte;
	Vehiculo* coche;
	int num,posicion;
	string marca,modelo;
	float precio,menor=9999999;
	
	cout<<" Ingresa el numero de coches a registrar: ";
	cin>>num;
	//aqui le indicas de que tamaño quieres el arreglo de objeto
	coche = new Vehiculo[num];
	//pidiendo datos
	for(int i=0;i<num;i++){
		fflush(stdin);
		cout<<"\n Datos del coche numero: "<<i+1<<endl;
		cout<<" Ingresa la marca: "; getline(cin,marca);
		cout<<" Ingresa el modelo: "; getline(cin,modelo);
		cout<<" Ingresa el precio: "; cin>>precio;
		//inicializas tu metodo Vehiculo para inicializar datos
		coche[i] = Vehiculo(marca,modelo,precio);
		//¿quien es el menor?
		if(coche[i].getprecio()<menor){
			menor=coche[i].getprecio();
			//guardas posicion para usarlas para mostrar datos
			posicion=i;
		}
	}
	cout<<"\n Datos del auto mas barato: ";
	//como es un objeto de tipo dinamico lo escribes asi:	(coche+posicion)->mostrar();
	//si fuera de tipo estatico asi: coche[posicion].mostrar();
	coche[posicion].mostrar();
	//(coche+posicion)->mostrar();
	
	return 0;
}
