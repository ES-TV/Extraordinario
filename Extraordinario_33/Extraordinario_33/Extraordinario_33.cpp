// Esteban Chavez Alvarez


#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	int vector[100], n, suma = 0;
	cout << "Escriba el numero de elementos en el vector: \n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Escriba el numero de la posicion " << i + 1  << endl;
		cin >> vector[i];
		for (int j = 0; j < n; j++) //este for es para ir sumando el elemento del arreglo en la suma y comparar entre los demas
		{
			if (i  != j )
			{
				suma += vector[j];
			}
		}
		if (vector[i] == suma)
		{
			cout << "el nuemro " << vector[i] << " es igual a la suma de todos los demas\n";
		}
	}


	return 0;
}
