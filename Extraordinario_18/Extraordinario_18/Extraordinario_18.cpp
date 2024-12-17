// Esteban Chavez Alvarez
//

#include <iostream>
using namespace std;


int main()
{
	int numero, opcion;
	double cubo;
	cout << "Introduzca un numero\n";
	cin >> numero;
	cout << "Que desea hacer?\n1) Sacar el cubo de un numero\n2) ver si es par o impar\nnada";
	cin >> opcion;		
	switch (opcion)
	{
	case 1:
		cubo = pow(numero, 3);
		cout << "\nEl resultado es: " << cubo << endl;
		break;
	case 2:
		if (numero %2 ==0)
		{
			cout << "\nEl numero " << numero << " es par";
		}
		else
		{
			cout << "\nEl numero " << numero << " es impar";
		}
		break;
	default:
		break;
	}

	return 0;
}
