// Esteban Chavez Alvarez   


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra[20], palabraA[]="az", palabraM[20]; //La cadena "az" es que el si empieza en 'A' y la segunda letra hasta la 'z'
    cout << "Introduzca su nombre en MAYUSCULAS porfi: "; cin.getline(palabra, 20);
    strcpy_s(palabraM, palabra); //Esta funcion es para que las letras de arreglo se vuelvan minuscula (string lowercase)
    _strlwr_s(palabra);    
    if (strcmp(palabra, palabraA) < 0) //Y si la comparacion de la palabra esta en el rango de "az" entoncces pasa el if
    {
        cout << "Su nombre empieza con la letra 'Aa'.\nPor lo que se cambio su nombre a minuscula: " << palabra << endl;
    }
    else
    {
        cout << "Su nombre no empieza coN 'Aa'.\nPor eso quedo igual: " << palabraM << endl;
    }
    return 0;
}
