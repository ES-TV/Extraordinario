// Esteban Chavez Alvarez


#include <iostream>
#include <stdlib.h>
#include <conio.h>
# include <windows.h> //incluir funciones de la interfaz de aplicaciones de windows
using namespace std;

int main()
{
	int dia, temperatura1, temperatura2, temperatura3, temperatura4, temperatura5, temperatura6;
	cout << "cada 4 horas (minutos) se solicitara la temperatura ambiente\n";
	do
	{
			cout << "Ingrese la primera temperatura\n";
			cin >> temperatura1;	
			Sleep(4 * 1000); // Esta linea crea un temporizador
			cout << "Ingrese la segunda temperatura\n";
			cin >> temperatura2;	
			Sleep(4 * 1000);
			cout << "Ingrese la tercera temperatura\n";
			cin >> temperatura3;	
			Sleep(4 * 1000);
			cout << "Ingrese la cuarta temperatura\n";
			cin >> temperatura4;	
			Sleep(4 * 1000);
			cout << "Ingrese la quinta temperatura\n";
			cin >> temperatura5;	
			Sleep(4 * 1000);	
			cout << "Ingrese la sexta temperatura\n";
			cin >> temperatura6;	
			Sleep(4 * 1000)

		if (temperatura1 > temperatura2 && temperatura1 > temperatura3 && temperatura1 > temperatura4 && temperatura1 > temperatura5 && temperatura1 > temperatura6)
		{
			cout << "la primera temperatura " << temperatura1 << " fue la mas alta";
			dia = 6; //declara que despues de esto la variable del do while sea la que termine
		}
		else if (temperatura2 > temperatura1 && temperatura2 > temperatura3 && temperatura2 > temperatura4 && temperatura2 > temperatura5 && temperatura2 > temperatura6)
		{
			cout << "la segunda temperatura " << temperatura2 << " fue la mas alta";
			dia = 6;
		}
		else if (temperatura3 > temperatura1 && temperatura3 > temperatura2 && temperatura3 > temperatura4 && temperatura3 > temperatura5 && temperatura3 > temperatura6)
		{
			cout << "la tercera temperatura " << temperatura3 << " fue la mas alta";
			dia = 6;
		}
		else if (temperatura4 > temperatura1 && temperatura4 > temperatura2 && temperatura4 > temperatura3 && temperatura4 > temperatura5 && temperatura4 > temperatura6)
		{
			cout << "la cuarta temperatura " << temperatura4 << " fue la mas alta";
			dia = 6;
		}
		else if (temperatura5 > temperatura1 && temperatura5 > temperatura2 && temperatura5 > temperatura3 && temperatura5 > temperatura4 && temperatura5 > temperatura6)
		{
			cout << "la quinta temperatura " << temperatura5 << " fue la mas alta";
			dia = 6;
		}
		else if (temperatura6 > temperatura1 && temperatura6 > temperatura2 && temperatura6 > temperatura3 && temperatura6 > temperatura4 && temperatura6 > temperatura5)
		{
			cout << "la sexta temperatura " << temperatura6 << " fue la mas alta";
			dia = 6;
		}
		
	} while (dia < 6);
    return 0;
}

