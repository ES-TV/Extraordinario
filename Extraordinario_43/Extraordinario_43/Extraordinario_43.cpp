// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra1[20];
    char palabra2[20];
    cout << "Introduzca una palabra despues presionar enter y escriba otra palabra:\n";
    cin.getline(palabra1, 20);
    cin.getline(palabra2, 20);
    if (strcmp(palabra1, palabra2) == 0) //strcmp funciona para que compare las cadenas y, en este caso ==0 es que son iguales
    {
        cout << "Las dos palabras son iguales\n" << palabra1 << endl << palabra2 << endl;
    }
    else if (strcmp(palabra1, palabra2) < 0 ) // en este < 0 es comparar si la primera va primero que la segunda
    {
        cout << "la palabra " << palabra1 << " va primero alfabeticamete que la " << palabra2 << endl;
    }
    else if (strcmp(palabra2, palabra1) < 0) //en este caso al revez, si la segunda es mas grande que la primera
    {
        cout << "la palabra " << palabra2 << " va primero alfabeticamete que la " << palabra1 << endl;  
    }
    return 0;
}
