// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <string.h> //Esta libreria nos permite guardar cadenas de caracteres
using namespace std;

int main()
{
    int longitud = 0;
    char palabra[30];
    cout << "Escriba una palabra\n";
    cin.getline(palabra, 20); 
    longitud = strlen(palabra); //strlen debuelve un entero, en este caso la cantidad de caracteres
    if (longitud >= 10)
    {
        cout << palabra << endl;
    }
    else
    {
        cout << "La palabra tiene menos de 10 caracteres\n";
    }
    return 0;
}
