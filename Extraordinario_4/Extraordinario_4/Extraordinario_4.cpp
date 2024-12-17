//Esteban Chavez Alvarez


#include <iostream>
using namespace std;

int main()
{
    int n1, n2,suma=0; //se puede asignar varia variables en una liea si son del mismo tipo
    float resta = 0, division = 0, precio, masiva =0;
    double multiplicacion = 0;
    cout << "Escriba el primer numero\n";
    cin >> n1;
    cout << "escriba otro numero\n";
    cin >> n2;
    suma = n1 + n2; //Hacer los operadores matematicos
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    cout << "La resultado de la suma: " << suma << endl; //Mostrarlas 
    cout << "La resultado de la resta: " << resta << endl;  
    cout << "La resultado de la multiplicacion: " << multiplicacion << endl;    
    cout << "La resultado de la division: " << division << endl;

    cout << "\nEscriba el presio del producto para agragarle el iva\n";
    cin >> precio;
    masiva = precio * 1.16;
    cout << "Total = " << masiva;
    return 0;    
}

