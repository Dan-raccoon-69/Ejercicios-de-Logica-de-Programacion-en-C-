#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
/*lee una cadena de caracteres y cuantas vocales hay */
main (){
	char cadena[50];
	int longitud=0,contador_a=0,contador_e=0,contador_i=0,contador_o=0,contador_u=0;
	cout<<"\n Escribe la cadena: "; cin.getline(cadena,50,'\n');
	//daniel
	longitud=strlen(cadena);
	for(int c=0;c<50;c++){
		switch(cadena[c]){
			case 'a':
				contador_a++;
			break;
			case 'e':
				contador_e++;
			break;
			case 'i':
				contador_i++;
			break;
			case 'o':
				contador_o++;
			break;
			case 'u':
				contador_u++;
			break;
		}
		
	}
	cout<<" El total de letras es: "<<longitud<<endl;
	cout<<" El total de letras a es: "<<contador_a<<endl;
	cout<<" El total de letras e es: "<<contador_e<<endl;
	cout<<" El total de letras i es: "<<contador_i<<endl;
	cout<<" El total de letras o es: "<<contador_o<<endl;
	cout<<" El total de letras u es: "<<contador_u<<endl;
	getch();
}
