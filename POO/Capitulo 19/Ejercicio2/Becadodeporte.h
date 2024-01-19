#include <iostream>
using namespace std;
#include"Alumno.h"
#include"Deportista.h"


class Becadodeporte : public Alumno, public Deportista{
	private:
		float montobeca;
		public:
			Becadodeporte(string nombrecarrera,string nombreentrenador,float montobeca) : Alumno(nombrecarrera), Deportista(nombreentrenador){
			this->montobeca=montobeca;	
			}
	void mostrardatos(){
		Alumno::mostrardatos();
		Deportista::mostrardatos();
		cout<<" Monto beca: "<<montobeca<<endl;
	}		
	
	void setmontobeca(float nuevomonto){
		float incremento=(montobeca*nuevomonto)/100;	
		this->montobeca+=incremento;
	}
	~Becadodeporte(){
		
	}
	float getmontobeca(){
		return montobeca;
	}
};

