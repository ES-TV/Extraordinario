// Esteban Chavez Alvarez
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int vector[] = { 1,2,3,4,5,6,7 };
	cout << "vector: ";
	for (int i = 0; i <= 6; i++)
	{
		cout << vector[i] << ",";
	}
	cout << endl;
	cout << "vector invrtido: ";
	for (int i = 6; i >= 0 ; i--)
	{
		cout << vector[i] << ",";
	}
	cout << endl;
    return 0;
}

