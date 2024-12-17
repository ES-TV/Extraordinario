// Esteban Chavez Alvarez
//

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, promedio = 0;
    cout << "Introduzca la calificacion de: \n";
    cout << "Alumno 1: ";
    cin >> a;
    cout << "Alumno 2: ";
    cin >> b;
    cout << "Alumno 3: ";
    cin >> c;
    cout << "Alumno 4: ";
    cin >> d;
    promedio = (a + b + c + d) / 4;
    cout << "El promedio es de: " << promedio << endl;

    return 0;
}

