// Conversion de monedas
#include <iostream>
using namespace std;

int main()
{
    float usd=0, resultado=0;
    int option;
    

    cout << "Bienvenido a la calculadora de conversion de dolares americanos. " << endl;
    cout << "Las opciones son:" << endl;
    cout << "1 = USD a EUR\n";
    cout << "2 = USD a JPY\n";
    cout << "3 = USD a GBP\n";
    cout << "Elija su opcion: ";
    cin >> option;
    cout << "Ingrese la cantidad de USD: ";
    cin >> usd;

    switch(option)
    {
        case 1:
            if (usd > 0)
            {
                resultado = usd * 0.92;
                cout << usd << " a EUR es igual a " << resultado << endl;
                break;
            }
            else 
            {
                cout << "Error" << endl;
                break;
            }
            
        case 2:
            if (usd > 0)
            {
                resultado = usd * 157.25;
                cout << usd << " a  JPY es igual a " << resultado << endl;
                break;
            }
            else 
            {
                cout << "Numero invalido" << endl;
                break;
            }

        case 3:
            if (usd > 0)
            {
            resultado = usd * 0.74;
            cout << usd << " a GBP es igual a " << resultado << endl;
            break;
            }
            else 
            {
                cout << "Error" << endl;
                break;
            }

        default: 
            cout << "Opcion invalida";
            break;
            
    }

    return 0;
}