

class DiaAnio_ejercicio1{
	//atributos 
	private:
		int dia,mes;
	
	public:
	//metodos
	DiaAnio_ejercicio1(int _dia,int _mes){ //constructor
		dia=_dia;
		mes=_mes;
	}
	
	bool igual (DiaAnio_ejercicio1& d);
	void visualizar ();
};
