// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

void calc_anios(int, int&, int&, int&);

int main() {
	int totaldias, anio = 2000, mes = 1, dias = 1;

	cout << "Ingrese una cantidad de dias: ";
	cin >> totaldias;

	calc_anios(totaldias, anio, mes, dias);

	cout << "Dia: " << dias << endl;
	cout << "Mes: " << mes << endl;
	cout << "Anio: " << anio << endl;
	return 0;
}

void calc_anios(int totaldias, int& anio, int& mes, int& dias) {
	anio = (totaldias / 360) + 2000;
	(totaldias %= 360) + 1;
	mes = (totaldias / 30) + 1;
	dias = (totaldias %= 30) + 1;

}
