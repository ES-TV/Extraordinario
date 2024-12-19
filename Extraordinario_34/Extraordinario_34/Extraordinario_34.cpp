// Extraordinario_34.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int arreglo[5];
    int arregloM[5];
    cout << "escriba 5 numeros para un arreglo, el programa multipicara por 2 cada valor\n";
    for (int i = 0; i < 5; i++) //se puede gresar el dato y multiplicarlo con el mismo for
    {
        cin >> arreglo[i];
        arregloM[i] = arreglo[i] * 2;
    }
    cout << "arreglo 1: \n";
    for (int i = 0; i < 5; i++) //Mostrar arreglo 1
    {
        cout << arreglo[i] << " ";
    }
    cout << "\narreglo multiplicado\n ";
    for (int i = 0; i < 5; i++)//Mostrar arreglo 2
    {
        cout << arregloM[i] << " ";
    }
    return 0;
}
