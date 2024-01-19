//declaracion de una clase

class punto{
	//atributos
	private : //modificadores de acceso
	//estos datos(private) estan encapsulados a esta clase, por lo tanto se pueden usar en esta clase 
	int x,y;
	//metodos
	public :
		//aquel que tiene el mismo nombre de clase y sirve para inicializar los atributos que tenga
		punto (int _x,int _y){ //metodo contructor (inizializa los atributos de la clase)
			x=_x;
			y=_y;
		}
		punto (){ //un metodo contructor es aque que tiene el mismo nombre de la clase
			x=y=0;
		}
		
		//declarando funciones
		//estableciendo valores
		void setX(int valorx);
		void setY(int valory);
		//obteniendo valores
		int getX();
		int getY();
		
};
