#include <iostream>
#include <stdlib.h>
using namespace std;

class Figura{
	private:
		int nlados;
		
		public:
			Figura(int nlados){
				this->nlados=nlados;
			}
			
			int getnlados(){
				return nlados;
			}
};
