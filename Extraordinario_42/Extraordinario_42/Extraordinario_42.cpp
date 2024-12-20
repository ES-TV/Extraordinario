// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char arreglo1[20];
    char arreglo2[20];
    cout << "Escriba una palabra:\n";
    cin.getline(arreglo1, 20);
    strcpy_s(arreglo2, arreglo1); //En el video dice strcpy pero dice que no es seguro y recomendo poner un _s y sirve para copiar de un arreglo a otro
    cout << arreglo2 << endl;
    return 0;
}
