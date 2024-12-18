// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
#include <stdlib.h> // Libreria que permite hacer cosas de la consola como pausar y borrar el contenido
using namespace std;


int main()
{
    int i=1;
	do  //Un ciclo el cual dice que actue siempre y cuando se cumpla la condicion
	{
		cout << i << endl;
		i++;
	} while (i<=10); // en esta parte se escribe la condicion 
	system("pause"); // pide que para continuar se presione una tecla
    return 0;
}
