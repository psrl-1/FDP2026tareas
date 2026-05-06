//Transporte publico
#include <iostream>
using namespace std;

int main()
{
    int trans;
    cout << "Bienvenido. Ingresa el numero correspondiente de su medio de transporte para saber el costo aproximado.\n";
    cout << "Bus: 1 " << endl;
    cout << "Metro: 2" << endl;
    cout << "Taxi: 3" << endl;
    cin >> trans;

    switch(trans)
    {
        case 1:
            cout << "El costo de su viaje por bus es de $0.90. \n";
            break;
        case 2:
            cout << "El costo de su viaje por metro es de $3. \n";
            break;
        case 3: 
            cout << "El costo de su viaje por taxi es de $5.\n";
            break;
        default:
            cout << "Numero invalido.\n";
    }
     
    return 0;
}