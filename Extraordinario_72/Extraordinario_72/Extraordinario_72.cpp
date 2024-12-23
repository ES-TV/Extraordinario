// Extraordinario_72.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;

void pedirdatos(int vec[],  int tam)
{

    cout << "Ingrese el tamaño del vector: "; 
    cin >> tam;
    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". Ingrese un numero: "; cin >> vec[i];
    }
}

void verify(int vec[], int tam) 
{
    int verif = 0;
    cout << endl;
    for (int i = 0; i < tam; i++) {
        if (vec[i] < vec[i + 1]) {
            if (vec[i + 1] > 0) {
                cout << vec[i] << " es menor a" << vec[i + 1] << endl;
                verif++;
            }
            else {
                cout << vec[i] << " no es menor a" << vec[i + 1] << endl;
            }
        }
    }
    verif++;
    if (verif == tam) {
        cout << endl << "Todo el vector esta ordenado :D" << endl;
    }
}

int vec[100];
int tam = 0;    

int main() {

    pedirdatos(vec, tam);
    verify(vec, tam);

    return 0;
}



