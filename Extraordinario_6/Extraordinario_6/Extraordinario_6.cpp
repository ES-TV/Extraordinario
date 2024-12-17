//Esteban Chavez Alvarez 

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, resultado;	
	cout << "escriba los valores de las siguientes variables";
	cout << "\na = "; cin >> a; //despues de ';' puede ir otro codigo para evitar tener mas renglones
	cout << "\nb = "; cin >> b;	
	cout << "\nc = "; cin >> c;
	cout << "\nd = "; cin >> d;	
	resultado = (a + b) / (c + d); //Operacion del ejersicio
	cout << "\nel resultado es: " << resultado << endl;

	return 0;
}


