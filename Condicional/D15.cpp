// Velocidad y Multa
#include <iostream>
using namespace std;

int main()
{
    float velo;

    cout << "Bienvenido. Vamos a calcular la multa a colocar" << endl;
    cout << "Ingrese la velocidad: ";
    cin >> velo;

    if (velo > 60 && velo < 80)
    {
        cout << "Sobrepasaste el limite de velocidad. Se te cobrara $150" << endl;
    }
    else if (velo > 80)
    {
        cout << "Sobrepasaste el limite de velocidad. Se te cobrara $500" << endl;
    }
    else 
    {
        cout << "No sobrepasaste el limite de velocidad :)" << endl;
    }

    return 0;

}