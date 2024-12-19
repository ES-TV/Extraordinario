// Esteban Chavez Alvarez


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    float conteo = 0, conteo2 = 0, conteo3 = 0, cali1, cali2, cali3;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Escriba la primera calificacion del alumno " << i << endl;
        cin >> cali1;
        cout << "Escriba la segunda calificacion del alumno " << i << endl;
        cin >> cali2;
        cout << "Escriba la tercera calificacion del alumno " << i << endl;
        cin >> cali3;
        if (cali1 >= 6 && cali2>= 6 && cali3 >= 6)
        {
            conteo += 1; // += es para ahorrar el escribir conteo = conteo + 1
        }
        else if (cali1 >= 6 || cali2 >= 6 || cali3 >= 6)
        {
            conteo2 += 1;
            if (cali3 >= 6)
            {
                conteo3 += 1;
            }
        }

    }
    system("pause");
    cout << "Total de alumnos que aprobaron los 3 examenes: " << conteo << endl;                  
    cout << "Total de alumnos que aprobaron almenos uno examenes: " << conteo2 << endl;     
    cout << "Total de alumnos que aprobaron el ultimo examen: " << conteo3 << endl;
    return 0;
}

