// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct notas
{
    float p1;
    float p2;
    float p3;
};

struct alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct notas calificaciones;
}alumnos[100];

int main()
{
    int cantidad, pos;
    float prom[100], mayor = 0;
    cout << "Ingrese la cantidad de alumnos a verificar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Para el alumno No." << i + 1 << endl;
        cin.ignore();
        cout << "Nombre: ";
        cin.getline(alumnos[i].nombre, 20);
        cout << "Sexo: ";
        cin.getline(alumnos[i].sexo, 10);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Calificacion parcial 1: ";
        cin >> alumnos[i].calificaciones.p1;
        cout << "Calificacion parcial 1: ";
        cin >> alumnos[i].calificaciones.p2;
        cout << "Calificacion parcial 1: ";
        cin >> alumnos[i].calificaciones.p3;
        prom[i] = (alumnos[i].calificaciones.p1 + alumnos[i].calificaciones.p2 + alumnos[i].calificaciones.p3)/3;
    }
    for (int i = 0; i < cantidad; i++) //Este ciclo es para comparar 
    {
        if (prom[i] > mayor)    //Si promedio es mayor que la variable indicada al principio
        {
            mayor = prom[i];    //Dicha variable sera ahora igual al promedio que comparo
            pos = i; //Guardar la posicion en una nueva variable para que se guarde y poder usarla mas adelante
        }
    }
    cout << "\n - Alumno con mejor promedio - \n";
    cout << endl << "Nombre: " << alumnos[pos].nombre << endl; //Aqui es la posicion que se guardo anteriormente
    cout << "Sexo: " << alumnos[pos].sexo << endl;
    cout << "Edad: " << alumnos[pos].edad << endl;
    cout << "Sexo: " << prom[pos] << endl;  
    return 0;
}

