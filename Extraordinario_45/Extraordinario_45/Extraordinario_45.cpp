// Esteban Chavez Alvarez   


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra[20];
    char reves[20]; 
    cout << "escriba una palabra: \n";
    cin.getline(palabra, 20);   
    strcpy_s(reves, palabra);//Primero guardar la informacion en otra cadena
    _strrev(reves);//voltear la cadena que se copio
    if (strcmp(reves, palabra) == 0)//comparar si son iguales
    {
        cout << "La palabrabra " << palabra << " es palindroma\n";
    }
    else
    {
        cout << "La palabra " << palabra << " al reves seria " << reves << " por lo que no es palindroma";
    }
    return 0;
}
