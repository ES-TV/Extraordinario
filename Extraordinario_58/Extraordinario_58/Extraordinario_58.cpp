// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct info_dir
{
    char calle[20];
    char ciudad[20];
    char estado[20];
};

struct infro_persona
{
    char nombre[20];
    struct info_dir direccion;
    int numero;
}personas[2]; //Cantidad de estructuras. (este caso 2)

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin); //Vaciar el buffer para poder escribier nuevamente
        cout << "Persona " << i + 1 << ". Introduzca su nombre: ";
        cin.getline(personas[i].nombre, 20); 
        cout << "\nPersona " << i + 1 << ". Introduzca la calle donde vive: ";
        cin.getline(personas[i].direccion.calle, 20);
        cout << "\nPersona " << i + 1 << ". Introduzca su ciudad: ";
        cin.getline(personas[i].direccion.ciudad, 20);
        cout << "\nPersona " << i + 1 << ". Introduzca su Estado: ";
        cin.getline(personas[i].direccion.estado, 20);
        cout << "\nPersona " << i + 1 << ". Introduzca su numero favorito: ";
        cin >> personas[i].numero;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Nombre de la persona" << i + 1 << ": " << personas[i].nombre << endl;
        cout << "Calle de la persona" << i + 1 << ": " << personas[i].direccion.calle << endl;  
        cout << "Ciudad de la persona" << i + 1 << ": " << personas[i].direccion.ciudad << endl;    
        cout << "Esteado de la persona" << i + 1 << ": " << personas[i].direccion.estado << endl;   
        cout << "Numero favorito de la persona" << i + 1 << ": " << personas[i].numero << endl;
    }
    return 0;
}