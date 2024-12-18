// Esteban chavez Alvarez

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n, resta = 0, suma = 0, aux=0;
    cout << "ingrese la cantidad de veces que se va a repetir la susecion\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        resta = i + (i + 1);
        suma = suma + resta;
        cout << suma << endl;
        n + 1;
    }
    return 0;
}

