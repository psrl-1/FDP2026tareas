// Comparacion de dos numeros

#include <iostream>
using namespace std;

int main ()
{
    float numero1,numero2;

    cout << "Bienvenido." << endl;
    cout << "Hoy vamos a comparar dos numeros :)" << endl;
    
    cout << "Digita tu primer numero: " << endl;
    cin >> numero1;
    cout << "Digita tu segundo numero: " << endl;
    cin >> numero2;

    if(numero1 > numero2)
    {
        cout << "Parece que " << numero1 << " Es mayor que " << numero2 << endl;
    }
    else if (numero2 > numero1)
    {
        cout << "Parece que " << numero2 << " Es mayor que " << numero1 << endl;
    }
    else 
    {
        cout << "Son iguales! :D" << endl;
    }

    return 0;
}   