#include <iostream>
using namespace std;
/*
Primo O no primo en c++;
*/
void Esprimo(int num);
int main(){
	Esprimo(8);
	return 0;
}

void Esprimo(int num) {
    int contador = 0;
	bool isPrimo = true;
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			isPrimo = false;
			break;
		}
	}
	
	if(isPrimo){
		cout<<"\nEl numero "<<num << " SI es primo";
	}
	else{
		cout<<"\nEl numero "<<num << " NO es primo";
	}
}
