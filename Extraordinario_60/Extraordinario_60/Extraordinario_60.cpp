// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct atleta
{
    char nombre[20];
    char pais[20];
    int medallas;
}atletas[100];

int main()
{
    int n, mayor = 0, menor = 1000, posM, posm;

    cout << "Escriba el numero de atletas que se inscribieron: ";
    cin >> n;  
    for (int i = 0; i < n; i++)
    {
        cout << "Para el atleta No." << i + 1 << "\n";
        cin.ignore();  
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 20);
        cout << "Pais: ";
        cin.getline(atletas[i].pais, 20);
        cout << "Medallas ganadas: ";
        cin >> atletas[i].medallas;
        if (atletas[i].medallas > mayor)
        {
            mayor = atletas[i].medallas;
            posM = i; //aqui se guarda la posision para posteriormente usarla al imprimir
        }
        else if (atletas[i].medallas < menor)
        {
            menor = atletas[i].medallas;
            posm = i;
        }
        cout << endl;
    }
    cout << "\n* Atleta ganador con mayor numero de medallas *\n";
    cout << "Nombre: " << atletas[posM].nombre << endl; //Aqui usaremos la variable auxiliar de posision
    cout << "Pais: " << atletas[posM].pais << endl;
    cout << "Cantidad de medallas: " << atletas[posM].medallas << endl;
    return 0;
}