// Esteban Chavez Alvarez


#include <iostream>
#include <conio.h>
using namespace std;

void cambio(int& dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
    int aux;
    aux = dolares;
    do
    {    
        if (dolares > 100)
        {
            cien++;
            aux = dolares - 100;
            dolares -= 100;
        }
        else if (dolares > 50)
        {
            cincuenta++;
            aux = dolares - 50;
            dolares -= 50;
        }
        else if (dolares > 20)
        {
            veinte++;
            aux = dolares - 20;
            dolares -= 20;
        }
        else if (dolares > 10)
        {
            diez++;
            aux = dolares - 10;
            dolares -= 10;
        }
        else if (dolares > 5)
        {
            cinco++;
            aux = dolares - 5;
            dolares -= 5;
        }
        else if (dolares > 1)
        {
            cincuenta++;
            aux = dolares - 1;
            dolares -= 1;
        }
    } while (aux > 0);           
}

int main()
{
    int dolares, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
    cout << "Introduzca la el monto a retirar: ";
    cin >> dolares;
    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    cout << "\nCantidad de cambio: \n";
    cout << cien << " Billetes de cien\n";
    cout << cincuenta << " Billetes de cincuenta\n";    
    cout << veinte << " Billetes de veinte\n";
    cout << diez << " Billetes de diez\n";  
    cout << cinco << " Billetes de cinco\n";    
    cout << uno << " Billetes de uno\n";    
    return 0;
}
