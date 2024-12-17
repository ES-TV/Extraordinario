// Esteban Chavez Alvarez


#include <iostream>
using namespace std;

int main()
{
    int mes;
    cout << "estamos en un calendario.\nelija el mes del 1-12\n";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Enero 31 dias\n";
        break;
    case 2:
        cout << "febrero 28 dias\n";
        break;
    case 3:
        cout << "marzo 31 dias\n";
        break;
    case 4:
        cout << "Abril 30 dias\n";
        break;
    case 5:
        cout << "Mayo 31 dias\n";
        break;
    case 6:
        cout << "junio 30 dias\n";
        break;
    case 7:
        cout << "julio 31 dias\n";
        break;
    case 8:
        cout << "Agosto 31 dias\n";
        break;
    case 9:
        cout << "Septiembre 31 dias\n";
        break;
    case 10:
        cout << "Octubre 31 dias\n";
        break;
    case 11:
        cout << "Noviembre 30 dias\n";
        break;
    case 12:
        cout << "Diciembre 31 dias\n";
        break;
    default:
        cout << "Elija una opcion correcta\n";
        break;
    }
    return 0;
}
