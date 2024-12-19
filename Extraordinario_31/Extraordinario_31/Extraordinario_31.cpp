// Extraordinario_31.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h> 
using namespace std;

int main()
{
    int vector[] = { 3,5,7,9,11 }; // cuando se ponen las llaves se indica el tamaño del vector, y las llaves para darle un contenido predeterminado
	double multiplicasion = 1;
	cout << "El vector es: \n";
	for (int i = 0; i < 5; i++) //se usa el ciclo for para poder mostrar y hacer operaciones en cada uno de los componentes del vector
	{
		cout << vector[i] << " x ";
	}
	cout << "La multiplicacion de sus elementos es: \n";
	for (int i = 0; i < 5; i++)
	{
		multiplicasion *= vector[i];

	}
	cout << "El resultado es: " << multiplicasion;
    return 0;
}

