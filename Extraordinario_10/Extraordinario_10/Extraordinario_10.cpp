// Esteban Chavez Alvarez


#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float x = 0; //Siempre las variables que tengan el resultado de una operacion = 0 para evitar datos basura 
    cout << "Vamos a resolver una ecuacion por formula general por favor introduzca los siguientes valores:\n";
    cout << "Valor de a: ";
    cin >> a;
    cout << "valor de b:  ";
    cin >> b;
    cout << "valor de c: ";
    cin >> c;   
    x = ((-b) + (sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a));
    cout << "el resultado es = " << x << endl;
    return 0;
}

