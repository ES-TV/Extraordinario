// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

void decimal(int x)
{
    int  intx = x ;
    float frac; 
    cout << "Ingrese un numero con punto decimal: ";
    cin >> x;
    frac = x - intx;
    cout.precision(3);  
    cout << "El resultado es: " << frac << endl;
}

double x;

int main()
{
    decimal(x);
    return 0;
}