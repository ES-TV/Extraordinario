// Extraordinario_26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n ;
    double factn = 1, factorsum = 0 ;
    cout << "escriba un numero para ver la suma de los factoriales\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        factn *= i;
    }
    for (int i = 0; i < n; i++)
    {
        factorsum = factorsum + factn;

    }
    // dos for para que primero haga el factorial y luego la suma
    cout << factorsum << endl;
    system("pause");
    return 0;
}
