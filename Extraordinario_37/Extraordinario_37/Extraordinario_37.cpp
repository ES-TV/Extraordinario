// Extraordinario_37.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h> //Libreria que permite hacer datos random
using namespace std;

int main()
{
	int	matriz[100][100];
	int x, y;
	srand(time(NULL)); //Para generar los datos aleatorios
	cout << "Introduzca el numero de filas:\n";
	cin >> x;
	cout << "Introduzca el numero de columnas:\n";
	cin >> y;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			matriz[i][j] = rand() % 9; //para almacenar el dato aleatorio en la matriz
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "|" << matriz[i][j] << "|";
		}
		cout << endl;
	}
	return 0;
}
