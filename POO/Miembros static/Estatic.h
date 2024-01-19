#include <iostream>
using namespace std;
class Estatic{
	private:
		static int contador;
		/* para inicializar a los atributos de tipo static NO SE PUEDEN INICIALIZAR DENTRO DE LA CLASE
		INICIALIZALO AFUERA, O EN OTRO ARCHIVO */
		public:
		Estatic(){
			contador++;
		}
		int getcontador(){
			return contador;
		}
		
		//metodo STATIC
		/* Como es un metodo static YA NO LE PERTENECE A LOS OBJETOS, SI NO A LA CLASE 
		  POR LO CUAL YA NO ES NECESARIO INSTANCIAR A UN OBJETO PARA PODER UTILIZAR ESTE METODO(SUMAR)
		*/ 
		static int sumar(int num1, int num2){
			int suma=num1+num2;
			return suma;
		}
};
