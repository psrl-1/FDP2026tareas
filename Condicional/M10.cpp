//Calculadora de tarifa de envios
// Calculadora de tarifa de envio

#include <iostream>
using namespace std;

int main() 
{
    float peso;
    int billetera=500;

    cout << "Cual es el peso de su paquete?: " << endl;
    cin >> peso;

    if(peso>0 && peso <=5)
    {
        int cobro = billetera - 5;
        cout << "Su cobro se realizo correctamente. Su saldo actual es de: " << cobro << endl;
    } 
    else if (peso>=6 && peso<=10) 
    {
        int cobro = billetera - 10;
        cout << "Su cobro se realizo correctamente. Su saldo actual es de: " << cobro << endl;
    }
    else if (peso >10 )
    {   
        int cobro = billetera - 15;
        cout << "Su cobro se realizo correctamente. Su saldo actual es de: " << cobro << endl;
    }
    else
    {
         cout << "Cobro erroneo";
    }
   

    return 0;
}