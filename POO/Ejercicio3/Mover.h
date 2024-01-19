#include <iostream>
#include <stdlib.h>
using namespace std;

class Mover{
	private:
		int x,y;
		
		public:
			Mover(int x,int y){
				this->x=x;
				this->y=y;
			}
			
			void mover_derecha(int n){
				x=x+n;
			}
			void mover_izquierda(int n){
				x=x-n;
			}
			void mover_arriba(int n){
				y=y+n;
			}
			void mover_abajo(int n){
				y=y-n;
			}
			int getx(){
				return x;
			}
			int gety(){
				return y;
			}
};
