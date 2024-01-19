#include <iostream>
using namespace std;

void encontrarMayorMedianoMenor(int a, int b, int c);

void encontrarMayorMedianoMenor(int a, int b, int c) {
    int mayor, mediano, menor;

    if (a >= b && a >= c) {
        mayor = a;
        if (b >= c) {
            mediano = b;
            menor = c;
        } else {
            mediano = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        mayor = b;
        if (a >= c) {
            mediano = a;
            menor = c;
        } else {
            mediano = c;
            menor = a;
        }
    } else {
        mayor = c;
        if (a >= b) {
            mediano = a;
            menor = b;
        } else {
            mediano = b;
            menor = a;
        }
    }

    cout<< "El número mayor es: " << mayor << endl;
    cout<< "El número mediano es: " << mediano <<endl;
    cout<< "El número menor es: " << menor <<endl;
}

int main() {
    int num1, num2, num3;
    encontrarMayorMedianoMenor(7, 2, 6);
    return 0;
}

