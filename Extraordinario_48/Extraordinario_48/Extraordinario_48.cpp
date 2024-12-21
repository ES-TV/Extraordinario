// Esteban Chavez Alvarez   


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char cadena1[20], cadena2[20];
    int numero1;
    float numero2, resultado = 0;
    cout << "Digite unos cuantos numeros (sin punto decimal): ";
    cin.getline(cadena1, 20);
    cout << "Digite unos cuantos numeros (y con un punto decimal): ";
    cin.getline(cadena2, 20);
    numero1 = atoi(cadena1);
    numero2 = atof(cadena2);
    resultado = numero1 + numero2;
    cout << "\nLa suma de " << numero1 << " + " << numero2 << " = " << resultado << endl;
    return 0;
}