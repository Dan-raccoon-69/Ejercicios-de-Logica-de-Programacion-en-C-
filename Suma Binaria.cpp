#include <stdio.h>
#include <string.h>
void sum(char* n1, char* n2);
char* igualCar(char* n1, char* n2);

int main(){
    char n1[20] = "10010";
    char n2[20] = "11111";

    sum(n1, n2);
    
    return 0;
}

void sum(char* n1, char* n2) {
    int max, carry;
    carry=0;
    char res[21];
    bzero(res, 21);
    if(strlen(n1)>=strlen(n2)){
        igualCar(n1,n2);
        max=strlen(n1);
    }else{
        igualCar(n2,n1);
        max=strlen(n2);
    }
    for(int i=1; i<=max; i++){
        if(n1[max-i]=='0' && n2[max-i]=='0'){
            if(carry){
                strcat(res, "1");
                carry=0;
            }else strcat(res, "0");
        }
        else if(n1[max-i]=='1' && n2[max-i]=='1'){
            if(carry){
                strcat(res, "1");
            }else strcat(res, "0");
            if(i==max)strcat(res, "1");
            carry=1;
        }  
        else if(n1[max-i]=='1' || n2[max-i]=='1'){
            if(carry){
                strcat(res, "0");
                carry=1;

            }else{
                strcat(res, "1");
                carry=0;
            }
            
        }
        else strcat(res, "0");
    }
    max=strlen(res);
    char aux[21];
    bzero(aux,21);
    for(int x=0; x<max;x++)aux[x]=res[(max-1)-x];
    //pasarla a la variable original
    for(int x=0; x<max;x++)res[x]=aux[x];
    printf("n1:\t%s\n", n1);
    printf("n2:\t%s\n", n2);
    printf(" \t\b+_______\n");
    printf("suma:\t%s\n", res);
}

char* igualCar(char* n1, char* n2){
    char aux[21];
    int max=strlen(n2);
    int max2=strlen(n1);
    int dif=max2-max;

    bzero(aux,21);
    //invertir cadena y guardandola en otra string
    for(int x=0; x<max;x++)aux[x]=n2[(max-1)-x];
    //pasando a la cadena original
    for(int x=0; x<max;x++)n2[x]=aux[x];
    //añadiendo la diferencia
    for(int y=0; y<dif;y++)strcat(n2,"0");
    //obtener nuevo largo de la cadena
    max=strlen(n2);
    bzero(aux,21);
    //invertir a su estado original guardandola en otra cadena
    for(int x=0; x<max;x++)aux[x]=n2[(max2-1)-x];
    //pasarla a la variable original
    for(int x=0; x<max;x++)n2[x]=aux[x];

    return n2;
}
