// Precio de Entrada a un parque
#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Bienvenido a nuestro parque de diversiones :)" << endl;
    cout << "Ingrese la edad de los visitantes para conocer su tarifa " << endl;
    cout << "Edad: ";
    cin >> edad;

    if (edad < 5)
    {
        cout << "Entrada gratis. Disfrute" << endl;
    }
    else if (edad >= 5 && edad <= 12)
    {
        cout << "Su tarifa seria de $5" << endl;
    }
    else 
    {
        cout << "Su tarifa seria de $10" << endl;
    }

    return 0;
}