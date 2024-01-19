#include <iostream>
using namespace std;

class Avion{
	private:
		string modelo;
		public:
			Avion(string modelo){
				this->modelo=modelo;
			}
			~Avion(){
				
			}
			void indicarAvion(){
				cout<<"	Recorre por aire."<<endl;
			}
			string getmodeloAvion(){
				return modelo;
			}
};
