#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
longitud1(char numero[6],char valor[100],int x){ //funcion para valores de longitud 1

		if (numero[x]=='0'){
		strcpy(valor, "CERO");
	}
		if (numero[x]=='1'){
		strcpy(valor, "UNO");
	}
		if (numero[x]=='2'){
		strcpy(valor, "DOS");
	}
		if (numero[x]=='3'){
		strcpy(valor, "TRES");
	}
		if (numero[x]=='4'){
		strcpy(valor, "CUATRO");
	}
		if (numero[x]=='5'){
		strcpy(valor, "CINCO");
	}
		if (numero[x]=='6'){

		strcpy(valor, "SEIS");
	}
		if (numero[x]=='7'){

		strcpy(valor, "SIETE");
	}
		if (numero[x]=='8'){

		strcpy(valor, "OCHO");
	}
		if (numero[x]=='9'){

		strcpy(valor, "NUEVE");

	}
return valor[100];
}
/********************************/
/********************************/
longitud2(char numero[6],char valor[100],char valor1[100],int x,int y,int z){

	if (numero[z]=='1'){ //convertir numeros 10-19
		if (numero[y]=='0'){ //VALORES DIEZ ONCE DOCE TRECE CATORCE QUINCE

		strcpy(valor1, "DIEZ");
	}
		if (numero[y]=='1'){

		strcpy(valor1, "ONCE");
	}
		if (numero[y]=='2'){

		strcpy(valor1, "DOCE");
	}
		if (numero[y]=='3'){

		strcpy(valor1, "TRECE");
	}
		if (numero[y]=='4'){

		strcpy(valor1, "CATORCE");
	}
		if (numero[y]=='5'){

		strcpy(valor1, "QUINCE");
	}


		if(numero[x]== '0' || numero[x]== '1' || numero[x]== '2' || numero[x]== '3' || numero[x]== '4' || numero[x]== '5'){
		}
		else{
		strcpy(valor1, "DIECI");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='2'){ //convertir numeros 20-29
		if (numero[y]=='0'){

		strcpy(valor1, "VEINTE");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "VEINTI");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='3'){ //convertir numeros 30-39
		if (numero[y]=='0'){

		strcpy(valor1, "TREINTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "TREINTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='4'){ //convertir numeros 40-49
		if (numero[y]=='0'){

		strcpy(valor1, "CUARENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "CUARENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='5'){ //convertir numeros 50-59
		if (numero[y]=='0'){

		strcpy(valor1, "CINCUENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "CINCUENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='6'){ //convertir numeros 60-69
		if (numero[y]=='0'){

		strcpy(valor1, "SESENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "SESENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='7'){ //convertir numeros 70-79
		if (numero[y]=='0'){

		strcpy(valor1, "SETENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "SETENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='8'){ //convertir numeros 80-89
		if (numero[y]=='0'){

		strcpy(valor1, "OCHENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "OCHENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (numero[z]=='9'){ //convertir numeros 90-99
		if (numero[y]=='0'){

		strcpy(valor1, "NOVENTA");
	}
		if(numero[x]== '0'){
		}
		else{
		strcpy(valor1, "NOVENTA Y ");
		longitud1(numero, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}

	return valor[100];
		}


/********************************/
/********************************/

longitud3(char numero[6],char valor[100],char valor1[100],char valor2[100],int x,int y,int z,int w){

	if (numero[w]=='1'){//convertir numeros 100-199
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "CIEN");
			}
		else{
			strcpy(valor2, "CIENTO ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}

		if (numero[w]=='2'){//convertir numeros 200-299
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "DOSCIENTOS");
			}
		else{
			strcpy(valor2, "DOSCIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='3'){//convertir numeros 300-399
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "TRESCIENTOS");
			}
		else{
			strcpy(valor2, "TRESCIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='4'){//convertir numeros 400-499
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "CUATROCIENTOS");
			}
		else{
			strcpy(valor2, "CUATROCIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='5'){//convertir numeros 500-599
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "QUINIENTOS");
			}
		else{
			strcpy(valor2, "QUINIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='6'){//convertir numeros 600-699
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "SEISCIENTOS");
			}
		else{
			strcpy(valor2, "SEISCIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='7'){//convertir numeros 700-799
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "SETECIENTOS");
			}
		else{
			strcpy(valor2, "SETECIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='8'){//convertir numeros 800-899
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "OCHOCIENTOS");
			}
		else{
			strcpy(valor2, "OCHOCIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (numero[w]=='9'){//convertir numeros 900-999
		if ((numero[z]=='0') &&  (numero[x]=='0')){
			strcpy(valor2, "NOVECIENTOS");
			}
		else{
			strcpy(valor2, "NOVECIENTOS ");
			if (numero[z]=='0'){
				longitud1(numero, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	return valor[100];
}
/********************************/
/********************************/
longitud4(char numero[6],char valor[100],char valor1[100],char valor2[100],char valor3[100],int x,int y,int z,int w,int v){
int c=1;
	if (numero[v]=='1'){//convertir numeros 1000-1999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "MIL");
			}
		else{
			strcpy(valor3, "MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
		if (numero[v]=='2'){//convertir numeros 2000-2999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "DOS MIL");
			}
		else{
			strcpy(valor3, "DOS MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (numero[v]=='3'){//convertir numeros 3000-3999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "TRES MIL");
			}
		else{
			strcpy(valor3, "TRES MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
				if (numero[v]=='4'){//convertir numeros 4000-4999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "CUATRO MIL");
			}
		else{
			strcpy(valor3, "CUATRO MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (numero[v]=='5'){//convertir numeros 5000-5999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "CINCO MIL");
			}
		else{
			strcpy(valor3, "CINCO MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (numero[v]=='6'){//convertir numeros 6000-6999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "SEIS MIL");
			}
		else{
			strcpy(valor3, "SEIS MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (numero[v]=='7'){//convertir numeros 7000-8999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "SIETE MIL");
			}
		else{
			strcpy(valor3, "SIETE MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
				if (numero[v]=='8'){//convertir numeros 8000-8999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "OCHO MIL");
			}
		else{
			strcpy(valor3, "OCHO MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
					if (numero[v]=='9'){//convertir numeros 9000-9999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor3, "NUEVE MIL");
			}
		else{
			strcpy(valor3, "NUEVE MIL ");
			if (numero[z]=='0'&& numero[w]=='0'){
			longitud1(numero, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(numero[w]=='0')){
				longitud2(numero, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
return valor[100];
}
/********************************/
/********************************/
longitud5(char numero[6],char valor[100],char valor1[100],char valor2[100],char valor3[100],char valor4[100],int x,int y,int z,int w,int v,int u){
int c=1;

if(numero[u]=='1'){
	if ((numero[v]=='0') && (numero[u]='1')){//convertir numeros 10000-10999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "DIEZ MIL");
			c=2;}
		else{
			strcpy(valor4, "DIEZ MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));}}

		if ((numero[v]=='1') && (numero[u]='1')){//convertir numeros 11000-11999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "ONCE MIL");
			c=2;}
		else{
			strcpy(valor4, "ONCE MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
		c=2;}}

	if ((numero[v]=='2') && (numero[u]='1')){//convertir numeros 12000-12999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "DOCE MIL");
			c=2;}
		else{
			strcpy(valor4, "DOCE MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((numero[v]=='3') && (numero[u]='1')){//convertir numeros 13000-13999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "TRECE MIL");
			c=2;}
		else{
			strcpy(valor4, "TRECE MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((numero[v]=='4') && (numero[u]='1')){//convertir numeros 14000-14999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "CATORCE MIL");
			c=2;}
		else{
			strcpy(valor4, "CATORCE MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((numero[v]=='5') && (numero[u]='1')){//convertir numeros 15000-15999
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "QUINCE MIL");
			c=2;}
		else{
			strcpy(valor4, "QUINCE MIL ");}
		if ((numero[w]=='0') &&  (numero[z]=='0')&&(c==1)){
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[w]=='0')){
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}
	if ( c== 1){
	if (numero[u]='1')//convertir numeros 16000-19999
			strcpy(valor4, "DIECI");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}

	if ( c== 1){
	if (numero[u]=='2'){//convertir numeros 20000-29999
	if ( c== 1){
		if ((numero[u]=='2')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "VEINTI");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}
	if ( c== 1){
	if (numero[u]=='3'){//convertir numeros 30000-39999
	if ( c== 1){
		if ((numero[u]=='3')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "TREINTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

	if ( c== 1){
	if (numero[u]=='4'){//convertir numeros 40000-49999
	if ( c== 1){
		if ((numero[u]=='5')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "CUARENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

	if ( c== 1){
	if (numero[u]=='5'){//convertir numeros 50000-59999
	if ( c== 1){
		if ((numero[u]=='5')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "CINCUENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (numero[u]=='6'){//convertir numeros 60000-69999
	if ( c== 1){
		if ((numero[u]=='6')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "SESENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (numero[u]=='7'){//convertir numeros 70000-79999
	if ( c== 1){
		if ((numero[u]=='7')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "SETENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (numero[u]=='8'){//convertir numeros 80000-89999
	if ( c== 1){
		if ((numero[u]=='8')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "OCHENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (numero[u]=='9'){//convertir numeros 90000-99999
	if ( c== 1){
		if ((numero[u]=='9')&& (c==1) && (numero[v]=='0') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='0') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='0') && (numero[w]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (numero[v]=='1') &&  (numero[w]=='0') &&  (numero[z]=='0')&&(numero[x]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (numero[v]=='1') && (numero[w]=='0') &&  (numero[z]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud1(numero, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (numero[v]=='1') && (numero[w]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud2(numero, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (numero[v]=='1')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud3(numero,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "NOVENTA Y ");
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}
return valor[100];
}
//----------------------------------------------

longitud1iva(char iva2[6],char valor[100],int x){ //funcion para valores de longitud 1

		if (iva2[x]=='0'){
		strcpy(valor, "CERO");
	}
		if (iva2[x]=='1'){
		strcpy(valor, "UNO");
	}
		if (iva2[x]=='2'){
		strcpy(valor, "DOS");
	}
		if (iva2[x]=='3'){
		strcpy(valor, "TRES");
	}
		if (iva2[x]=='4'){
		strcpy(valor, "CUATRO");
	}
		if (iva2[x]=='5'){
		strcpy(valor, "CINCO");
	}
		if (iva2[x]=='6'){

		strcpy(valor, "SEIS");
	}
		if (iva2[x]=='7'){

		strcpy(valor, "SIETE");
	}
		if (iva2[x]=='8'){

		strcpy(valor, "OCHO");
	}
		if (iva2[x]=='9'){

		strcpy(valor, "NUEVE");

	}
return valor[100];
}
/********************************/
/********************************/
longitud2iva(char iva2[6],char valor[100],char valor1[100],int x,int y,int z){

	if (iva2[z]=='1'){ //convertir numeros 10-19
		if (iva2[y]=='0'){ //VALORES DIEZ ONCE DOCE TRECE CATORCE QUINCE

		strcpy(valor1, "DIEZ");
	}
		if (iva2[y]=='1'){

		strcpy(valor1, "ONCE");
	}
		if (iva2[y]=='2'){

		strcpy(valor1, "DOCE");
	}
		if (iva2[y]=='3'){

		strcpy(valor1, "TRECE");
	}
		if (iva2[y]=='4'){

		strcpy(valor1, "CATORCE");
	}
		if (iva2[y]=='5'){

		strcpy(valor1, "QUINCE");
	}


if(iva2[x]== '0' || iva2[x]== '1' || iva2[x]== '2' || iva2[x]== '3' || iva2[x]== '4' || iva2[x]== '5'){
}
		else{
		strcpy(valor1, "DIECI");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='2'){ //convertir numeros 20-29
		if (iva2[y]=='0'){

		strcpy(valor1, "VEINTE");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "VEINTI");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='3'){ //convertir numeros 30-39
		if (iva2[y]=='0'){

		strcpy(valor1, "TREINTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "TREINTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='4'){ //convertir numeros 40-49
		if (iva2[y]=='0'){

		strcpy(valor1, "CUARENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "CUARENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='5'){ //convertir numeros 50-59
		if (iva2[y]=='0'){

		strcpy(valor1, "CINCUENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "CINCUENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='6'){ //convertir numeros 60-69
		if (iva2[y]=='0'){

		strcpy(valor1, "SESENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "SESENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='7'){ //convertir numeros 70-79
		if (iva2[y]=='0'){

		strcpy(valor1, "SETENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "SETENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='8'){ //convertir numeros 80-89
		if (iva2[y]=='0'){

		strcpy(valor1, "OCHENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "OCHENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}
	if (iva2[z]=='9'){ //convertir numeros 90-99
		if (iva2[y]=='0'){

		strcpy(valor1, "NOVENTA");
	}
		if(iva2[x]== '0'){
		}
		else{
		strcpy(valor1, "NOVENTA Y ");
		longitud1iva(iva2, valor,x);
		strcpy(valor1, strcat(valor1,valor));

		}
		}

	return valor[100];
		}

/********************************/
/********************************/

longitud3iva(char iva2[6],char valor[100],char valor1[100],char valor2[100],int x,int y,int z,int w){

	if (iva2[w]=='1'){//convertir numeros 100-199
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "CIEN");
			}
		else{
			strcpy(valor2, "CIENTO ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}

		if (iva2[w]=='2'){//convertir numeros 200-299
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "DOSCIENTOS");
			}
		else{
			strcpy(valor2, "DOSCIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='3'){//convertir numeros 300-399
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "TRESCIENTOS");
			}
		else{
			strcpy(valor2, "TRESCIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='4'){//convertir numeros 400-499
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "CUATROCIENTOS");
			}
		else{
			strcpy(valor2, "CUATROCIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='5'){//convertir numeros 500-599
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "QUINIENTOS");
			}
		else{
			strcpy(valor2, "QUINIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='6'){//convertir numeros 600-699
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "SEISCIENTOS");
			}
		else{
			strcpy(valor2, "SEISCIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='7'){//convertir numeros 700-799
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "SETECIENTOS");
			}
		else{
			strcpy(valor2, "SETECIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='8'){//convertir numeros 800-899
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "OCHOCIENTOS");
			}
		else{
			strcpy(valor2, "OCHOCIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	if (iva2[w]=='9'){//convertir numeros 900-999
		if ((iva2[z]=='0') &&  (iva2[x]=='0')){
			strcpy(valor2, "NOVECIENTOS");
			}
		else{
			strcpy(valor2, "NOVECIENTOS ");
			if (iva2[z]=='0'){
				longitud1iva(iva2, valor,x);
				strcpy(valor2,strcat(valor2, valor));
			}
			else{
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor2,strcat(valor2, valor1));
		}
		}
	}
	return valor[100];
}
/********************************/
/********************************/
longitud4iva(char iva2[6],char valor[100],char valor1[100],char valor2[100],char valor3[100],int x,int y,int z,int w,int v){
int c=1;
	if (iva2[v]=='1'){//convertir numeros 1000-1999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "MIL");
			}
		else{
			strcpy(valor3, "MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
		if (iva2[v]=='2'){//convertir numeros 2000-2999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "DOS MIL");
			}
		else{
			strcpy(valor3, "DOS MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (iva2[v]=='3'){//convertir numeros 3000-3999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "TRES MIL");
			}
		else{
			strcpy(valor3, "TRES MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
				if (iva2[v]=='4'){//convertir numeros 4000-4999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "CUATRO MIL");
			}
		else{
			strcpy(valor3, "CUATRO MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (iva2[v]=='5'){//convertir numeros 5000-5999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "CINCO MIL");
			}
		else{
			strcpy(valor3, "CINCO MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (iva2[v]=='6'){//convertir numeros 6000-6999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "SEIS MIL");
			}
		else{
			strcpy(valor3, "SEIS MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
			if (iva2[v]=='7'){//convertir numeros 7000-8999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "SIETE MIL");
			}
		else{
			strcpy(valor3, "SIETE MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
				if (iva2[v]=='8'){//convertir numeros 8000-8999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "OCHO MIL");
			}
		else{
			strcpy(valor3, "OCHO MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
					if (iva2[v]=='9'){//convertir numeros 9000-9999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor3, "NUEVE MIL");
			}
		else{
			strcpy(valor3, "NUEVE MIL ");
			if (iva2[z]=='0'&& iva2[w]=='0'){
			longitud1iva(iva2, valor,x);
			strcpy(valor3,strcat(valor3, valor));
			c=3;
			}
			if ((c==1)&&(iva2[w]=='0')){
				longitud2iva(iva2, valor,valor1, x,y,z);
				strcpy(valor3,strcat(valor3, valor1));
				c=2;
			}
				if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor3,strcat(valor3, valor2));
	}}}
return valor[100];
}
/********************************/
/********************************/
longitud5iva(char iva2[6],char valor[100],char valor1[100],char valor2[100],char valor3[100],char valor4[100],int x,int y,int z,int w,int v,int u){
int c=1;

if(iva2[u]=='1'){
	if ((iva2[v]=='0') && (iva2[u]='1')){//convertir numeros 10000-10999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "DIEZ MIL");
			c=2;}
		else{
			strcpy(valor4, "DIEZ MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));}}

		if ((iva2[v]=='1') && (iva2[u]='1')){//convertir numeros 11000-11999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "ONCE MIL");
			c=2;}
		else{
			strcpy(valor4, "ONCE MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
		c=2;}}

	if ((iva2[v]=='2') && (iva2[u]='1')){//convertir numeros 12000-12999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "DOCE MIL");
			c=2;}
		else{
			strcpy(valor4, "DOCE MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((iva2[v]=='3') && (iva2[u]='1')){//convertir numeros 13000-13999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "TRECE MIL");
			c=2;}
		else{
			strcpy(valor4, "TRECE MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((iva2[v]=='4') && (iva2[u]='1')){//convertir numeros 14000-14999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "CATORCE MIL");
			c=2;}
		else{
			strcpy(valor4, "CATORCE MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}

	if ((iva2[v]=='5') && (iva2[u]='1')){//convertir numeros 15000-15999
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "QUINCE MIL");
			c=2;}
		else{
			strcpy(valor4, "QUINCE MIL ");}
		if ((iva2[w]=='0') &&  (iva2[z]=='0')&&(c==1)){
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[w]=='0')){
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if (c==1){
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
	c=2;}}
	if ( c== 1){
	if (iva2[u]='1')//convertir numeros 16000-19999
			strcpy(valor4, "DIECI");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}

	if ( c== 1){
	if (iva2[u]=='2'){//convertir numeros 20000-29999
	if ( c== 1){
		if ((iva2[u]=='2')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "VEINTE MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "VEINTIUN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "VEINTI");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}
	if ( c== 1){
	if (iva2[u]=='3'){//convertir numeros 30000-39999
	if ( c== 1){
		if ((iva2[u]=='3')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "TREINTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "TREINTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "TREINTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

	if ( c== 1){
	if (iva2[u]=='4'){//convertir numeros 40000-49999
	if ( c== 1){
		if ((iva2[u]=='5')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "CUARENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "CUARENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "CUARENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

	if ( c== 1){
	if (iva2[u]=='5'){//convertir numeros 50000-59999
	if ( c== 1){
		if ((iva2[u]=='5')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "CINCUENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "CINCUENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "CINCUENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (iva2[u]=='6'){//convertir numeros 60000-69999
	if ( c== 1){
		if ((iva2[u]=='6')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "SESENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}

		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "SESENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "SESENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (iva2[u]=='7'){//convertir numeros 70000-79999
	if ( c== 1){
		if ((iva2[u]=='7')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "SETENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "SETENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "SETENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (iva2[u]=='8'){//convertir numeros 80000-89999
	if ( c== 1){
		if ((iva2[u]=='8')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "OCHENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "OCHENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "OCHENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}

if ( c== 1){
	if (iva2[u]=='9'){//convertir numeros 90000-99999
	if ( c== 1){
		if ((iva2[u]=='9')&& (c==1) && (iva2[v]=='0') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='0') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='0') && (iva2[w]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='0')){
			strcpy(valor4, "NOVENTA MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
		if ((c==1) && (iva2[v]=='1') &&  (iva2[w]=='0') &&  (iva2[z]=='0')&&(iva2[x]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			c=2;}
		if ((c==1)&& (iva2[v]=='1') && (iva2[w]=='0') &&  (iva2[z]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud1iva(iva2, valor,x);
			strcpy(valor4,strcat(valor4, valor));
			c=2;}
		if ((c==1) && (iva2[v]=='1') && (iva2[w]=='0')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud2iva(iva2, valor,valor1, x,y,z);
			strcpy(valor4,strcat(valor4, valor1));
			c=2;}
		if ((c==1)&& (iva2[v]=='1')){
			strcpy(valor4, "NOVENTA Y UN MIL ");
			longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
			strcpy(valor4,strcat(valor4, valor2));
			c=2;}
	if (c==1){
		strcpy(valor4, "NOVENTA Y ");
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
	strcpy(valor4,strcat(valor4, valor3));
	c=2;}}}}
return valor[100];
}


//----------------------------------------------

 main(void){ //funcion principal
int iva,num,longitud,x,y,z,w,v,u,importe,total;
char numero[6],iva2[6],valor[100], valor1[100], valor2[100],valor3[100],valor4[100];
printf("\nEscribe tu importe: ");
gets(numero);
longitud = strlen(numero); //longitud de la cadena
num=atoi(numero);
iva=num*.16;
total=iva+num;
printf("El iva es: %d",iva);
printf("\n");
printf("\nEscribe tu IVA otravez: ");
gets(iva2);

longitud = strlen(iva2); //longitud de la cadena
printf("\n");


if (longitud ==1){ //convertir numero de longitud 1
	x=0;
	longitud1(numero, valor,x);
		printf("\nImporte sin IVA es: %s ( %s PESOS M.N. )",numero,valor);

       }


if (longitud ==2){//convertir numero de longitud 2
	x=1,y=1,z=0;
	longitud2(numero, valor,valor1, x,y,z);
		printf("\nImportes sin IVA es: %s ( %s PESOS M.N. )", numero, valor1);


}
if (longitud ==3){//convertir numero de longitud 3
	x=2,y=2,z=1,w=0;
	longitud3(numero,valor,valor1,valor2,x,y,z,w);
		printf("\nImporte sin IVA es: %s ( %s PESOS M.N. )", numero, valor2);


}

if (longitud ==4){//convertir numero de longitud 4
	x=3,y=3,z=2,w=1,v=0;
	longitud4(numero,valor,valor1,valor2,valor3,x,y,z,w,v);
   printf("\nImporte sin IVA es: %s ( %s PESOS M.N. )", numero, valor3);



}
if (longitud ==5){//convertir numero de longitud 5
	x=4,y=4,z=3,w=2,v=1,u=0;
	longitud5(numero,valor,valor1,valor2,valor3,valor4,x,y,z,w,v,u);
   printf("\nImporte sin IVA es: %s ( %s PESOS M.N. )", numero, valor4);


}
//-----------------------------------
if (longitud ==1){ //convertir numero de longitud 1
	x=0;
	longitud1iva(iva2, valor,x);
		printf("\nEl IVA es: %s ( %s PESOS M.N. )", iva2, valor);
      printf("\nEl total es: %d",total);
}


if (longitud ==2){//convertir numero de longitud 2
	x=1,y=1,z=0;
	longitud2iva(iva2, valor,valor1, x,y,z);
		printf("\nEl IVA es: %s ( %s PESOS M.N. )",iva2, valor1);
printf("\nEl total es: %d",total);

}
if (longitud ==3){//convertir numero de longitud 3
	x=2,y=2,z=1,w=0;
	longitud3iva(iva2,valor,valor1,valor2,x,y,z,w);
		printf("\nEl IVA es: %s ( %s PESOS M.N. )", iva2, valor2);
       printf("\nEl total es: %d",total);
}

if (longitud ==4){//convertir numero de longitud 4
	x=3,y=3,z=2,w=1,v=0;
	longitud4iva(iva2,valor,valor1,valor2,valor3,x,y,z,w,v);
   printf("\nEl IVA es: %s ( %s PESOS M.N. )", iva2, valor3);
	printf("\nEl total es: %d",total);

}
if (longitud ==5){//convertir numero de longitud 5
	x=4,y=4,z=3,w=2,v=1,u=0;
	longitud5iva(iva2,valor,valor1,valor2,valor3,valor4,x,y,z,w,v,u);
   printf("\nEl IVA es: %s ( %s PESOS M.N. )", iva2, valor4);
   printf("\nEl total es: %d",total);
}

//-----------------------------------
if (longitud >=6){//verificar no mayor a5
		printf("\n\nEl numero no debe ser mayor a 5 digitos\n\n", numero);
		}
getch();
}