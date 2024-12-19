// Extraordinario_29.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero;
    cout << "Escriba un numero para descomponerlo con los numeros primos: \n";
    cin >> numero;
    for (int i = 2; numero < 1; i++)
    {
        do
        { 
            numero = numero / i;
            if (numero>1)
            {
                cout << i << " x ";
            }
            else
            {
                cout << i;
            }

        } while (numero%i ==0);
    }
    cout << "wtf?";
    return 0;
}

