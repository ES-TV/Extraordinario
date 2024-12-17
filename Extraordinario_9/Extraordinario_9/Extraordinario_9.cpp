// Esteban Chavez Alvarez


#include <iostream>
#include <math.h> //Para poder usar la libreria de exponentes
using namespace std;

int main()
{
    float a, b;
    double  h = 0;
    cout << "para sacar la hipotenusa primero escriba los catetos: \n";
    cout << "Cateto a = ";
    cin >> a;
    cout << "Cateto b = ";
    cin >> b;
    h =  sqrt((pow(a, 2)) + (pow(b, 2))); //ppow para elevar el numero a la potencia y sqrt para sacar la raiz cuadrada
    cout << endl;
    cout << "El resultado es = " << h << endl;
    return 0;
}
 
