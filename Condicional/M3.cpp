// Comparacion de dos numeros

#include <iostream>
using namespace std;

int main ()
{
    float numero1,numero2; //Float para incluir numeros decimales

    cout << "Bienvenido." << endl;
    cout << "Hoy vamos a comparar dos numeros :)" << endl;
    
    cout << "Digita tu primer numero: " << endl;
    cin >> numero1;
    cout << "Digita tu segundo numero: " << endl;
    cin >> numero2;

    if(numero1 > numero2) // Si el numero 1 es mayor al numero 2
    {
        cout << "Parece que " << numero1 << " Es mayor que " << numero2 << endl;
    }
    else if (numero2 > numero1) // Si el numero 2 es mayor al numero 1
    {
        cout << "Parece que " << numero2 << " Es mayor que " << numero1 << endl;
    }
    else //Si ambos numeros son iguales :)
    {
        cout << "Son iguales! :D" << endl;
    }

    return 0;
}   