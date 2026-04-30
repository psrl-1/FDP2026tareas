// Ejercicio 1 : Edad y mayoria de Edad

#include <iostream>
using namespace std;

int main()
{
    int edad; // Declaramos el valor de edad y el tipo de valor.

    cout << "Bienvenido."<< endl;
    cout << "Vamos a analizar si eres mayor o menor de edad"<< endl;
    cout << "Digita tu edad a continuacion: " << endl;
    cin >> edad;

    if (edad > 18)
    {
        cout << "Eres mayor de edad!" << endl;
    }
    else if (edad<18 && edad >= 1)
    {
        cout << "Eres menor de edad!" << endl;
    }
    else if (edad <= 0)
    {
        cout << "Tienes " << edad << " anos? o.o" << endl;
    }
    else 
    {
        cout << "Error!" << endl; 
    }

    return 0;
}