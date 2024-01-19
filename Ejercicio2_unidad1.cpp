#include <iostream>
using namespace std;
/*
Programa que lea de la entrada el precio de un producto
y muestre en la salida estandar el precio del producto con
IVA
*/
main(){
	float p_producto,p_producto_iva,iva,importe,cambio;
	cout<<" Ingresa el precio del producto: "; cin>>p_producto;
	iva=p_producto*0.16;
	p_producto_iva=p_producto*1.16;
	cout<<"\n El IVA es: "<<iva; 
	cout<<"\n Tu precio total es: "<< "$" << p_producto_iva; 
	
	cout<<"\n Ingrese el importe: "; cin>>importe;
	cambio=importe-p_producto_iva;
	
	cout<<"\n El cambio es: "<< "$"<<cambio;
	
	
}
