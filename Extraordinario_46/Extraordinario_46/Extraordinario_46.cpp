// Esteban Chavez Alvarez   


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra1[20];
    char palabra2[20];
    cout << "Este programa compara 2 palabras y las transforma a mayusculas.\nIntroduzca una palabra:  ";
    cin.getline(palabra1, 20);
    cout << "Introduzca otra palabra:  ";
    cin.getline(palabra2, 20);
    _strupr_s(palabra1); //_strupr_ sirve para que pasen los caracteres de un arreglo de minusculas a mayusculas. (string uppercase)quiero creer xddddd
    _strupr_s(palabra2);
    if (strcmp(palabra1, palabra2) == 0) //strcmp sirve para comparar entre arreglos si es ==0 quiere decir que son iguales
    {
        cout << "\nLas palabras son iguales.\nCambio:\n" << palabra1 << endl;
    }
    else
    {
        cout << "\nlas palabras eran distintas.\nSe modificaron: \n" << palabra1 << "\n" << palabra2 << "\n";   
    }
    return 0;
}