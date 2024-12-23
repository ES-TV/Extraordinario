// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

void maximo(int x, int y, int z)
{
    cout << "Ingrese 3 numeros a ver cual es el mayor: \n";
    cin >> x >> y >> z;
    if ((x > y) && (x>z))   
    {
        cout << "El numero " << x << " es mayor\n";
    }
    else if ((y > x) && (y > z))
    {
        cout << "El numero " << y << " es mayor\n";
    }
    else if ((z > x) && (z > y))
    {
        cout << "El numero " << y << " es mayor\n";
    }
}

int x, y, z;

int main()
{
    cout << "Bienvenidos!\n";
    maximo(x,y,z);  
    return 0;
}
