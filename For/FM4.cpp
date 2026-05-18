//Tabla de multiplicar del 1 al 10
#include <iostream>
using namespace std;

int main()
{
    int n=0,y=0;
    cout << "Bienvenido. Ingresa un numero para la tabla de multiplicar.\n";
    cout << "Numero: ";
    cin >> n;

    for (int i=1; i<=10; i++)
    {
        y = n * i;
        cout << n << "x" << i << "= " << y << endl;
    }

    return 0;
}