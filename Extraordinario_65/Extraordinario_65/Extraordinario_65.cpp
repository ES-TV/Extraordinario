// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void al_cuadrado(float x)
{
    double cuadrado = 0;
    cout << "ingrese el numero a calcular puede ser con punto decimal: ";
    cin >> x;
    cuadrado = pow(x, 2);
    cout << "resultado: " << cuadrado << endl;
}

float x; //Esta variable aqui indica que es universal tanto para las funciones como para el main

int main()
{
    al_cuadrado(x); //llamar a la funcion    
    return 0;
}
