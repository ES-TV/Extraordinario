// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
using namespace std;

struct persona //Asi se define una structure con el nombre que se desee
{
    char nombre[20]; //Variables de la estructura
    int edad;  
}persona1; //cantidad de estructuras que habran. (este caso solo es una)

int main()
{
    cout << "Cual es su nombre?\n";
    cin.getline(persona1.nombre, 20); //asi se llama la estructura y la variable dentro de ella
    cout << "Cual es su edad?\n";
    cin >> persona1.edad; //Estea es para la segunda variable
    cout << "Imprimiendo datos...\n";
    system("pause");
    cout << "Su nombre: " << persona1.nombre << endl;
    cout << "Su edad: " << persona1.edad << endl;
    return 0;
}
