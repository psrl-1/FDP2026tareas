// Calculo de potencia
#include <iostream>
using namespace std;

int main()
{
    int base=0,exponente=0,n=0,f;

    cout << "Ingersa el numero que quieres elevar.\n";
    cout << "Base: ";
    cin >> base;

    f = base;

    cout << "Ingresa el numero al que lo quieres elevar. \n";
    cout << "Exponente: ";
    cin >> exponente;

    for (int i = 1; i < exponente; i++)
    {
        n = base * f;
        f = n;
    }

    cout << endl << n;

    return 0;

}