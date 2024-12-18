// Extraordinario_25.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, suc = 0,i;   
    cout << "Escriba un numero para ver la sucesion\n";
    cin >> n;
    cout << endl;
    for ( i = 1; i <= n; i++)
    {            
        suc = (i * 2) - 1;  
        cout << suc << ", ";
    }
    return 0;
}

