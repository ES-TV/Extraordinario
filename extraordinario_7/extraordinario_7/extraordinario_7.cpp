// Esteban Chavez Alvarez


#include <iostream>}
using namespace std;

int main()
{
    float a, b, c, d, resultado = 0;
    cout << "Escriba el valor de las siguientes variables: ";
    cout << "\na = ";
    cin >> a;
    cout << "b =";
    cin >> b;
    cout << "c =";
    cin >> c;
    cout << "d =";
    cin >> d;
    resultado = a + (b / (c - d));
    cout << "El resultado es: \n" << resultado << endl;
    return 0;
}
