// Suma de Números
//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.
#include <iostream>
using namespace std;

int main ()
{
    int n,y=0, f;
    cout << "Bienvenido. Ingresa los numeros que deseas sumar.\n";
    cout << "Ingresa el numero 0 para terminar.\n";

    do 
    {
        cout << "Ingresa los numeros a continuacion y presiona enter por cada numero: ";
        cin >> n;
        
        y = y+n;

    } while (n != 0);

    cout << y;

    return 0;
}