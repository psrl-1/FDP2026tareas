// Suma de numeros pares
#include <iostream>
using namespace std;

int main()
{
    int n, y=1;
    cout << "Vamos a calcular cuantos numeros pares hay hasta n numero.\n";
    cout << "Ingresa n: ";
    cin >> n;

    while (y<=n)
    {
        if ( y % 2 == 0)
        {
            cout << y << endl;
            y = y+1;
            
        }
        else
        {
            y = y+1;
        }
    
    }

    return 0;
}