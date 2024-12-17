// Extraordinario_16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Escriba 3 numeros a continuacion:\n";
    cin >> a >> b >> c;
    cout << "ahora igresa un numero mas y veamos si es coincide\n";
    cin >> d;
    if (d == a || d == b || d == c)
    {
        cout << "el " << d << " Se repitio\n";
    }
    else
    {
        cout << "ninguno se repitio\n";
    }

    return 0;
}

