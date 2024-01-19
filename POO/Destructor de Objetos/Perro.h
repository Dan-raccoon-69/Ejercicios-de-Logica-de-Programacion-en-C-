class Perro{
	//atributos
	private: 
	string nombre,raza;
	
	public:
		Perro(string _nombre, string _raza){ //constructor
		nombre=_nombre;
		raza=_raza;
		}
		//metodo detructor
		~Perro(){
			//sirve para liberar memoria 
		}
		//metodos
		void mostrardatos();
		void jugar();
};
