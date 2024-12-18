// Extraordinario_24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    int x, y ;
    double pot = 1;
    cout << "Escriba dos numeros primero la base y luego la potencia\n";
    cin >> x >> y;
    for (int i = 0; i < y ; i++)
    {
        pot = pot * x;
    }
    system("pause");
    cout << x << "^" << y << " = " << pot;
    return 0;
}

