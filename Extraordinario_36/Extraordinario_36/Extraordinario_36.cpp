// Esteban Chavez Alvarez


#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int matriz[3][3];
    cout << "Ingrese los datos de la matriz 3x3\n";
    for (int i = 0; i < 3; i++) // Primer for para recorrer en las columnas
    {
        for (int j = 0; j < 3; j++)// El for anidado aqui es para que recorra en las filas
        {
            cout << "Escriba el numero en la posision " << "[" << i << "]" << "[" << j << "]\n";
            cin >> matriz[i][j];
        }
    }
    cout << "matriz original: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matriz[i][j] << "|";
        }
        cout << endl;
    }
    cout << "matriz diagonal: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j )// esto debido a que la diagonal se encuentra en la misma posision tanto en i como j
            {
                cout << "|"<< matriz[i][j]<<"|";
            } 
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0; 
}

