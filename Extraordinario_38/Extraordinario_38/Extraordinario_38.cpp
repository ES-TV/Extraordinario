// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int matrizS[3][3];
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;   j < 3; j++)  
        {
            matriz1[i][j] = rand() % 9;  
            matriz2[i][j] = rand() & 9;
            matrizS[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    cout << "Matriz 1: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matriz1[i][j] << "|";
        }
        cout << endl;
    }
    cout << "\nMatriz 2: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matriz2[i][j] << "|";
        }
        cout << endl;
    }
    cout << "Suma de las matricez: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "|" << matrizS[i][j] << "|";
        }
        cout << endl;
    }
    return 0;
}

