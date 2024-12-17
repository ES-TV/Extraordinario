// Esteban Chavez Alvarez   


#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "escriba un numero a ver su signo\n";
    cin >> a;
    if (a == 0)
    {
        cout << "el numero es cer\n";
    }
    else if (a <= 0)
    {
        cout << "el numero es negativo\n";
    }
    else
    {
        cout << "el numero es positivo\n";
    }
    return 0;
}

