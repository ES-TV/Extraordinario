// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

void calcular(int num1, int num2, int& suma, int&mult) //Primero llama a los valores como siempre lo hemos visto
{                                                      //Luego llama a la posision en la memoria que guarda el dato para que en la funcion se cambie el valor
    suma = num1 + num2;
    mult = num1 * num2;
}

int main()
{
    int num1, num2, suma = 0, mult = 0;
    cout << "Digite dos numeros: \n";
    cin >> num1 >> num2;
    calcular(num1, num2, suma, mult);   //Llamar a la funcion
    cout << "\nLa suma = " << suma << endl;  // valor del dato en la memoria
    cout << "La multiplicacion = " << mult;
    return 0;
}

