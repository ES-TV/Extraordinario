// Esteban Chavez Alvarez

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Escriba tres numeros y veremos cual es mayor\n";
    cin >> a >> b >> c;
    if (a>b && a >c )
    {
        cout << a << " Es el numero mayor\n";
    }
    else if (b> a && b>c)
    {
        cout << b << " es el numero mayor\n";
    }
    else
    {
        cout << c << " es el numero mayor\n";
    }
}


