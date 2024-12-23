// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPO>   //Esto sirve para englobar el tipo de dato que no se sabe todavia que va a terornar la funcion
void mostrarValAbs(TIPO numero)
{
	if (numero < 0)
	{
		numero = numero * -1;
	}
	cout << "El valor absoluto del numero es: " << numero << endl;
}

int main()
{
	int numi = -6;
	float numf = -56.40;
	double numd = -3452552.4657884;
	cout << "Numeros originales \n" << numi << "\n" << numf << "\n" << numd << "\n";

	mostrarValAbs(numi);	//Aqui es donde se manda el dato, se hace la operacion y se imprime WOW!
	mostrarValAbs(numf);	
	mostrarValAbs(numd);	
    return 0;
}