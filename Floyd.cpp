#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main(){
	setlocale(LC_ALL, "spanish");
	int aa=0,ab=3,ac=1,ad=3,ae=7,af=5,ag=8,ah=8;
	int bb=0,bc=3,bd=1,be=5,bf=3,bg=5,bh=6;
	int cc=0,cd=2,ce=6,cf=4,cg=8,ch=7;
	int dd=0,de=4,df=2,dg=6,dh=5;
	int ee=0,ef=4,eg=6,eh=1;
	int ff=0,fg=6,fh=3;
	int gg=0,gh=3;
	int hh=0;
	char opco,opcd;
	int opcrespuesta;
		
	//matriz de pesos
	char colnombres[9]={' ','A','B','C','D','F','G','H','I'};
	int col1[8]={0,3,1,3,7,5,8,8};
	int col2[8]={3,0,3,1,5,3,5,6};
	int col3[8]={1,3,0,2,6,4,8,7};
	int col4[8]={3,1,2,0,4,2,6,5};
	int col5[8]={7,5,6,4,0,4,2,1};
	int col6[8]={5,3,4,2,4,0,6,3};
	int col7[8]={8,5,8,6,2,6,0,3};
	int col8[8]={8,6,7,5,1,3,3,0};
	//La otra matriz XD
	char colnombresotra[9]={' ','A','B','C','D','F','G','H','I'};
	char col1A[8]={'*','B','C','C','D','D','B','E'};
	char col2B[8]={'A','*','D','D','D','D','G','E'};
	char col3C[8]={'A','D','*','D','D','D','D','E'};
	char col4D[8]={'C','B','C','*','E','F','B','E'};
	char col5E[8]={'D','D','D','D','*','H','G','H'};
	char col6F[8]={'D','D','D','D','H','*','H','H'};
	char col7G[8]={'B','B','D','B','E','H','*','E'};
	char col8H[8]={'E','E','E','E','E','F','E','*'};
	int i;
	
	
	cout<<"      Matriz de pesos \n\n";
	for(i=0;i<=8;i++){
		cout<<" "<<colnombres[i]<<" ";
	}
	cout<<"\n";
	cout<<" -------------------------\n";
	cout<<" A "; for(i=0;i<=7;i++){
		cout<<" "<<col1[i]<<" ";
	}cout<<"\n";
	cout<<" B "; for(i=0;i<=7;i++){
		cout<<" "<<col2[i]<<" ";
	}cout<<"\n";
	cout<<" C "; for(i=0;i<=7;i++){
		cout<<" "<<col3[i]<<" ";
	}cout<<"\n";
	cout<<" D "; for(i=0;i<=7;i++){
		cout<<" "<<col4[i]<<" ";
	}cout<<"\n";
	cout<<" E "; for(i=0;i<=7;i++){
		cout<<" "<<col5[i]<<" ";
	}cout<<"\n";
	cout<<" F "; for(i=0;i<=7;i++){
		cout<<" "<<col6[i]<<" ";
	}cout<<"\n";
	cout<<" G "; for(i=0;i<=7;i++){
		cout<<" "<<col7[i]<<" ";
	}cout<<"\n";
	cout<<" H "; for(i=0;i<=7;i++){
		cout<<" "<<col8[i]<<" ";
	}cout<<"\n";
	
	//La otra Matriz
	cout<<" \n     Matriz de pesos \n\n";
	for(i=0;i<=8;i++){
		cout<<" "<<colnombresotra[i]<<" ";
	}
	cout<<"\n";
	cout<<" -------------------------\n";
	cout<<" A "; for(i=0;i<=7;i++){
		cout<<" "<<col1A[i]<<" ";
	}cout<<"\n";
	cout<<" B "; for(i=0;i<=7;i++){
		cout<<" "<<col2B[i]<<" ";
	}cout<<"\n";
	cout<<" C "; for(i=0;i<=7;i++){
		cout<<" "<<col3C[i]<<" ";
	}cout<<"\n";
	cout<<" D "; for(i=0;i<=7;i++){
		cout<<" "<<col4D[i]<<" ";
	}cout<<"\n";
	cout<<" E "; for(i=0;i<=7;i++){
		cout<<" "<<col5E[i]<<" ";
	}cout<<"\n";
	cout<<" F "; for(i=0;i<=7;i++){
		cout<<" "<<col6F[i]<<" ";
	}cout<<"\n";
	cout<<" G "; for(i=0;i<=7;i++){
		cout<<" "<<col7G[i]<<" ";
	}cout<<"\n";
	cout<<" H "; for(i=0;i<=7;i++){
		cout<<" "<<col8H[i]<<" ";
	}cout<<"\n";
	
	do{
	cout<<"\n Ingresa el origen: ";
	cin>>opco;
	cout<<" Ingresa el destino: ";
	cin>>opcd;
	
	/*
	opco=opco-32;
	opcd=opcd-32;
    cout<<opco<<endl; cout<<opcd;*/
	
	//A
	if((opco=='A' && opcd=='A')|| (opco=='a' && opcd=='a')){
		cout<<" La distancia es: "<<aa;
		cout<<"\n";
	}
	if((opco=='A' && opcd=='B') || (opco=='a' && opcd=='b') || (opco=='b' && opcd=='a')||(opco=='B' && opcd=='A')){
	cout<<" La distancia es: "<<ab;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='C') || (opco=='a' && opcd=='c') || (opco=='c' && opcd=='a')||(opco=='C' && opcd=='A')){
	cout<<" La distancia es: "<<ac;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='D') || (opco=='a' && opcd=='d') || (opco=='d' && opcd=='a')||(opco=='D' && opcd=='A')){
	cout<<" La distancia es: "<<ad;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='E') || (opco=='a' && opcd=='e') || (opco=='e' && opcd=='a')||(opco=='E' && opcd=='A')){
	cout<<" La distancia es: "<<ae;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='F') || (opco=='a' && opcd=='f') || (opco=='f' && opcd=='a')||(opco=='F' && opcd=='A')){
	cout<<" La distancia es: "<<af;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='G') || (opco=='a' && opcd=='g') || (opco=='g' && opcd=='a')||(opco=='G' && opcd=='A')){
	cout<<" La distancia es: "<<ag;	
	cout<<"\n";
	}
	if((opco=='A' && opcd=='H') || (opco=='a' && opcd=='h') || (opco=='h' && opcd=='a')||(opco=='H' && opcd=='A')){
	cout<<" La distancia es: "<<ah;	
	cout<<"\n";
	}
	//B
	if((opco=='B' && opcd=='B')|| (opco=='b' && opcd=='b')){
		cout<<" La distancia es: "<<bb;
		cout<<"\n";
	}
	if((opco=='B' && opcd=='C') || (opco=='b' && opcd=='c') || (opco=='c' && opcd=='b')||(opco=='C' && opcd=='B')){
	cout<<" La distancia es: "<<bc;	
	cout<<"\n";
	}
	if((opco=='B' && opcd=='D') || (opco=='b' && opcd=='d') || (opco=='d' && opcd=='b')||(opco=='D' && opcd=='B')){
	cout<<" La distancia es: "<<bd;	
	cout<<"\n";
	}
	if((opco=='B' && opcd=='E') || (opco=='b' && opcd=='e') || (opco=='e' && opcd=='b')||(opco=='E' && opcd=='B')){
	cout<<" La distancia es: "<<be;	
	cout<<"\n";
	}
	if((opco=='B' && opcd=='F') || (opco=='b' && opcd=='f') || (opco=='f' && opcd=='b')||(opco=='F' && opcd=='B')){
	cout<<" La distancia es: "<<bf;	
	cout<<"\n";
	}
	if((opco=='B' && opcd=='G') || (opco=='b' && opcd=='g') || (opco=='g' && opcd=='b')||(opco=='G' && opcd=='B')){
	cout<<" La distancia es: "<<bg;	
	cout<<"\n";
	}
	if((opco=='B' && opcd=='H') || (opco=='b' && opcd=='h') || (opco=='h' && opcd=='b')||(opco=='H' && opcd=='B')){
	cout<<" La distancia es: "<<bh;	
	cout<<"\n";
	}
	//C
	if((opco=='C' && opcd=='C')|| (opco=='c' && opcd=='c')){
		cout<<" La distancia es: "<<cc;
		cout<<"\n";
	}
	if((opco=='C' && opcd=='D') || (opco=='c' && opcd=='d') || (opco=='d' && opcd=='c')||(opco=='D' && opcd=='C')){
	cout<<" La distancia es: "<<cd;	
	cout<<"\n";
	}
	if((opco=='C' && opcd=='E') || (opco=='c' && opcd=='e') || (opco=='e' && opcd=='c')||(opco=='E' && opcd=='C')){
	cout<<" La distancia es: "<<ce;	
	cout<<"\n";
	}
	if((opco=='C' && opcd=='F') || (opco=='c' && opcd=='f') || (opco=='f' && opcd=='c')||(opco=='F' && opcd=='C')){
	cout<<" La distancia es: "<<cf;	
	cout<<"\n";
	}
	if((opco=='C' && opcd=='G') || (opco=='c' && opcd=='g') || (opco=='g' && opcd=='c')||(opco=='G' && opcd=='C')){
	cout<<" La distancia es: "<<cg;	
	cout<<"\n";
	}
	if((opco=='C' && opcd=='H') || (opco=='c' && opcd=='h') || (opco=='h' && opcd=='c')||(opco=='H' && opcd=='C')){
	cout<<" La distancia es: "<<ch;	
	cout<<"\n";
	}
	//D
	if((opco=='D' && opcd=='D')|| (opco=='d' && opcd=='d')){
		cout<<" La distancia es: "<<dd;
		cout<<"\n";
	}
	if((opco=='D' && opcd=='E') || (opco=='d' && opcd=='e') || (opco=='e' && opcd=='d')||(opco=='E' && opcd=='D')){
	cout<<" La distancia es: "<<de;	
	cout<<"\n";
	}
	if((opco=='D' && opcd=='F') || (opco=='d' && opcd=='f') || (opco=='f' && opcd=='d')||(opco=='F' && opcd=='D')){
	cout<<" La distancia es: "<<df;	
	cout<<"\n";
	}
	if((opco=='D' && opcd=='G') || (opco=='d' && opcd=='g') || (opco=='g' && opcd=='d')||(opco=='G' && opcd=='D')){
	cout<<" La distancia es: "<<dg;	
	cout<<"\n";
	}
	if((opco=='D' && opcd=='H') || (opco=='d' && opcd=='h') || (opco=='h' && opcd=='d')||(opco=='H' && opcd=='D')){
	cout<<" La distancia es: "<<dh;	
	cout<<"\n";
	}
	//E
	if((opco=='E' && opcd=='E')|| (opco=='e' && opcd=='e')){
		cout<<" La distancia es: "<<ee;
		cout<<"\n";
	}
	if((opco=='E' && opcd=='F') || (opco=='e' && opcd=='f') || (opco=='f' && opcd=='e')||(opco=='F' && opcd=='E')){
	cout<<" La distancia es: "<<ef;	
	cout<<"\n";
	}
	if((opco=='E' && opcd=='G') || (opco=='e' && opcd=='g') || (opco=='g' && opcd=='e')||(opco=='G' && opcd=='E')){
	cout<<" La distancia es: "<<eg;	
	cout<<"\n";
	}
	if((opco=='E' && opcd=='H') || (opco=='e' && opcd=='h') || (opco=='h' && opcd=='e')||(opco=='H' && opcd=='E')){
	cout<<" La distancia es: "<<eh;	
	cout<<"\n";
	}
	//F
	if((opco=='F' && opcd=='F')|| (opco=='f' && opcd=='f')){
		cout<<" La distancia es: "<<ff;
		cout<<"\n";
	}
	if((opco=='F' && opcd=='G') || (opco=='f' && opcd=='g') || (opco=='g' && opcd=='f')||(opco=='G' && opcd=='F')){
	cout<<" La distancia es: "<<fg;	
	cout<<"\n";
	}
	if((opco=='F' && opcd=='H') || (opco=='f' && opcd=='h') || (opco=='h' && opcd=='f')||(opco=='H' && opcd=='F')){
	cout<<" La distancia es: "<<fh;	
	cout<<"\n";
	}
	//G
	if((opco=='G' && opcd=='G')|| (opco=='g' && opcd=='g')){
		cout<<" La distancia es: "<<gg;
		cout<<"\n";
	}
	if((opco=='G' && opcd=='H') || (opco=='g' && opcd=='h') || (opco=='h' && opcd=='g')||(opco=='H' && opcd=='G')){
	cout<<" La distancia es: "<<gh;	
	cout<<"\n";
	}
	//H
	if((opco=='H' && opcd=='H')|| (opco=='h' && opcd=='h')){
		cout<<" La distancia es: "<<hh;
		cout<<"\n";
	}
	//pregunta xD
	cout<<"\n ¿Deseas volver a encontrar la distancia de un dato? 1/0: ";
	cin>>opcrespuesta;
	}while(opcrespuesta!=0);
	
	getch();
}
