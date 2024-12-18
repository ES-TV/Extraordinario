// Esteban Chavez Alvarez


#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numero,conteo=0;
	do
	{
		cout << "escriba un numero\n";
		cin >> numero;
		if (numero == 0)
		{
			cout << "se escribieron " << conteo << " numeros antes del 0";
		}
		else
		{
			conteo = conteo++;
		}

	} while (numero != 0);
	
    return 0;
}

