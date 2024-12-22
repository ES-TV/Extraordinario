// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arreglo[] = { 2,3,5,1,8 };
    int i=0, dato;
    bool band = 0; //Se va a encargar de decir si esta o no esta
    cout << "Veamos si encuentras el numero en la secuencia\nIntroduce un numero: ";
    cin >> dato;
    do // asi se codifica la busqueda secuencial
    {
        if (arreglo[i] == dato)
        {
            band++;
        }
        i++;
    } while ((band == 0) && (i<5));
    if (band == 0)
    {
        cout << "El numeroro " << dato << " no existe en el arreglo\n";
    }
    else if (band == 1)
    {
        cout << "El numero " << dato << " si esta. GOOD!";
    }
    return 0;
}