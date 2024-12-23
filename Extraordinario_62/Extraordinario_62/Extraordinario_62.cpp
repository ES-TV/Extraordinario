// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Persona
{
    char nombre[20];
    bool discapacidad;
}personas[20];

int main()
{
    int numero;
    int disno = 0, dissi = 0, poss, posn;   
    cout << "\nLe damos la bienvenida!\nIncerte la cantidad de personas inscritas: ";
    cin >> numero;
    for (int i = 0; i < numero; i++) //Llenar los datos y al mismo tiempo sumar la categoria
    {
        cout << "\nPara el competidor No." << i + 1 << "\nIncerte: \n";
        cin.ignore();            //Se pone aqui el ignore por que en el ejecutable el buffer se llena
        cout << "Numbre: ";
        cin.getline(personas[i].nombre, 20);
        cout << "Cuenta con alguna discapacidad?\n0) No.\n1) Si.\n";
        cin >> personas[i].discapacidad;
        if (personas[i].discapacidad == 0) //Si es falso entonces
        {
            disno ++; //Agregar uno al vector que no
            poss = i;   //Guardar la posision para luego mostrarla
        }
        else if (personas[i].discapacidad == 1) //Y esto si es verdadero
        {
            dissi ++;  
            posn = i;
        }
    }
    cout << "\n - Personas por categoria -\n";  
    cout << "Categoria Olimpica: " << disno <<endl;     
    cout << "Categoria Paralimpica: " << dissi << endl; 
    cout << "\nMiembros de la primera categoria - \n";
    for (int i = 0; i < disno; i++) //Aqui la condicion depende de la cantidad suma de personas que no
    {
        cout << " - " << personas[poss].nombre << endl; //La posicion que si 
    }
    cout << "\n - Personas en la segunda categoria - \n";
    for (int i = 0; i < dissi; i++) //Suma de personas que si
    {
        cout << " - " << personas[posn].nombre << endl; //la posicion que no
    }
    return 0;
}
