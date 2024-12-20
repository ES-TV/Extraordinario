// Extraordinario_39.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int Pmatriz[3][3];
    cout << "Vamos a calcular el´producto de dos matricez: \n";
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese el valor en [" << i << "][" << j << "] de la matriz 1\n";
            cin >> matriz1[i][j];
            cout << "Ingrese el valor en [" << i << "][" << j << "] de la matriz 2\n";
            cin >> matriz2[i][j];
            Pmatriz[i][j] = matriz1[i][j] * matriz1[i][j];
        }
    }
    cout << "Matriz 1:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matriz1[i][j] << "|";
        }
        cout << endl;
    }
    cout << "Matriz 2:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matriz1[i][j] << "|";
        }
        cout << endl;
    }
    cout << "Producto de las dos:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << Pmatriz[i][j] << "|";
        }
        cout << endl;
    }
    return 0;
}
