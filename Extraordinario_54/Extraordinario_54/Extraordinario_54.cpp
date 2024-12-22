// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[] = { 1,2,3,4,5 }; //Tiene que estar ordenado el arreglo
    int inf = 0, sup = 5, mid, dato;
    bool band = 0;
    cout << "\nIntroduzca un numero del 1 al 5: ";
    cin >> dato;
    do //busqueda binaria
    {
        mid = (inf + sup) / 2;
        if (numeros[mid] == dato)
        {
            band++;
            break; //Si ya encontro el dato, esto hace el do while pare
        }
        else if (numeros[mid] > dato)
        {
            sup = mid;
            mid = (inf + sup) / 2;
        }
        else if (numeros[mid] < dato)
        {
            inf = mid;
            mid = (inf + sup) / 2;
        }
    } while (inf <= sup);
    if (band == 1)
    {
        cout << "\nEl numero se ha encontrado en la posicion " << mid << endl;
    }
    else if (band == 0)
    {
        cout << "\nEl numero no se ha encontrado\n";
    }

    return 0;
}