// Esteban Chavez Alvarez
// Este programa es copia del ejersicio del video

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
//IMPORTANTE el tipo que se haga la funcion va a ser el retorno del valor: int = entero float..., char, void = solo hace la operacion
int encontrarMax(int x, int y) //definir la funcion
{
	int numMax; //Valor que retornara la funcion
	if (x > y)
	{
		numMax = x;
	}
	else if (x < y)
	{
		numMax = y;
	}
	return numMax;	//Siempre retornar el valor de la funcion
}	//proceso de la funcion	

int main()
{
	int x, y;
	cout << "Digite 2 numeros: \n"; 
	cin >> x >> y;
	cout << "El numero mayor es: " << encontrarMax(x, y);
    return 0; //Ahora si tiene mas sentido el retun 0 que es cuando acaba el main
}
