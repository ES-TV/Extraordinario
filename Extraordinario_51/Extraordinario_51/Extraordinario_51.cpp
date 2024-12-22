// Esteban Chavez Alvarez
//Ya no se que mas moverle, lo copie igual y no salio


#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    double numeros[] = {4,2,5,3,1};
    int i, pos, aux; //pos = posicion
    for ( i = 0; i <= 4; i++)
    {
        pos = i; //Se encarga de checar la posicion
        aux = numeros[i]; //Se encarga de dar el numero para ser revisado en el while
        do //Se encarga de hacer otro ercorrido ahora usando la variable pos donde va a revisar el numero
        {
            numeros[pos] = numeros[pos --]; //Para que ese sea el numero de la posicion de atras
            pos--;
            numeros[pos] = aux;
        } while ((pos > 0) && (numeros[pos--] > aux)); //condicion que revisara el numero en esa posicion
         //ahora el auxiliar cambia para volver a comparar en la siguiente
    }
    cout << "De > a <: ";
    for ( i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << "\nDe < a >: ";
    for ( i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";  
    }
    return 0;
}

