#include <iostream>
using namespace std;

class Expediente {
	private:
	 int numExpediente;
	public :
	Expediente(int numExpediente){ //constructor
		this->numExpediente=numExpediente;
	}	
	
	~Expediente(){
		
	}
	
	int getnumExpediente(){
		return numExpediente;
	}
};
