// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char mensaje[] = "Hola que tal ";
    char nombre[20];
    char completo[40];
    cout << "Vamos a añadir tu nombre en la siguiente frase: \n";
    cout << mensaje << endl;
    cout << "Ahora escribe tu nombre: ";
    cin.getline(nombre, 20);
    strcpy_s(completo, mensaje);
    strcat_s(completo, nombre); //esta funcion sirve para anadir el contenido de una cadena a otra que ya tenia contenido
    cout << completo << endl;
    return 0;
}

