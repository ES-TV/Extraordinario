// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct alumno
{
    char nombre[20];
    int edad;
    int promedio;
}alumnos[3];

int main()
{
    cout << "bienvenidos al portal de maestros para las calificaciones.\n igrese los siguientes datos du sus 3 alumnos:\n";
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);  
        cout << "Alumno No." << i+1<< endl; 
        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 20);
        cin.ignore(); // ni con ignore ni con fflush
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Promedio: ";
        cin >> alumnos[i].promedio;
    }
    system("cls");
    cout << "\nAlumno con mejor promedio:\n";
    system("pause");
    if ((alumnos[0].promedio > alumnos[1].promedio) && (alumnos[0].promedio > alumnos[2].promedio))
    {
        cout << "\nEl mejor promedio fue: \n";
        cout << alumnos[0].nombre;
        cout << alumnos[0].edad;
        cout << alumnos[0].promedio;
    }
    if ((alumnos[1].promedio > alumnos[0].promedio) && (alumnos[1].promedio > alumnos[2].promedio))
    {
        cout << "\nEl mejor promedio fue: \n";
        cout << alumnos[1].nombre;
        cout << alumnos[1].edad;
        cout << alumnos[1].promedio;
    }
    if ((alumnos[2].promedio > alumnos[0].promedio) && (alumnos[2].promedio > alumnos[1].promedio))
    {
        cout << "\nEl mejor promedio fue: \n";
        cout << alumnos[2].nombre;
        cout << alumnos[2].edad;
        cout << alumnos[2].promedio;
    }
    return 0;
}