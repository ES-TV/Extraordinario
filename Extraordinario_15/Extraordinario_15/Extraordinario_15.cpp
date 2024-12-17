// Extraordinario_15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    char letra;
    cout << "Escriba una letra a ver si es vocal minuscula o mayuscula\n";
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        cout << "es una vocal minuscula\n";
    }
    else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        cout << "es una vocal MAYUSCULA\n";
    }
    else
    {
        cout << "no es una vocal\n";
    }
    return 0;
}

