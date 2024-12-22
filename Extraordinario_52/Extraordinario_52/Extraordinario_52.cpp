// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    int numeros[] = { 4,2,3,5,1 };
    int i, j, aux, min;
    cout << "Orden ahora: ";
    for ( i = 0; i < 5; i++)   //imprimir arreglo como esta 
    {
        cout << numeros[i];
    }
    cout << endl;
    for (i = 0; i < 5; i++) //primer for para empezar a recorrer el arreglo
    {
        min = i;
        for (j = i + 1; j < 5; j++) //para recorrer el arreglo pero en otra posicion
        {
            if (numeros[j] < numeros[min]) //comparar la posicion
            {
                min = j;
            }
            aux = numeros[i];
            numeros[i] = numeros[min];
            numeros[min] = aux;
        }
    }
    cout << "\nOrden despues: ";
    for ( i = 0; i < 5; i++) //Orden
    {
        cout << numeros[i] << " ";
    }
    cout << "\nOrden decendente: ";
    for ( i = 4; i >= 0; i--) //Orden desendente
    {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}