class Perro{
	//atributos
	private: 
	string nombre,raza;
	
	public:
		/* El this nos ayuda a diferenciar los atributos de los parametros aun asi tenga 
		el mismo nombre, ejemplo:
		*si dejamos el mismo nombre tanto para los atributos como para los parametros
		habra una confusion de c++ y no sabra que hacer(no mostrara los datos)
		justo asi:
		Perro(string nombre, string raza){ //constructor
		nombre=nombre;
		raza=raza;
		}
		
		para ese caso se utiliza el this, para diferenciar, podriamos seguir usando la misma 
		variable, pero indicando si es atributo (colocando this) sin necesidad de crear otra 
		variable como lo era: ( string _nombre,string raza).
		ejemplo:
		(como el que se muestra abajo sin ser comentario)
		*/ 
		Perro(string nombre, string raza){ //constructor
		this->nombre=nombre;
		this->raza=raza;
		}
		//metodo detructor
		~Perro(){
			//sirve para liberar memoria 
		}
		//metodos
		void mostrardatos();
		void jugar();
};
