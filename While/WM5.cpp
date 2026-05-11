// Suma de numeros pares
#include <iostream>
using namespace std;

int main()
{
    int n, y=1, f=0;
    cout << "Vamos a calcular la suma de los numeros pares hasta n numero.\n";
    cout << "Ingresa n: ";
    cin >> n;

    while (y<=n)
    {
        if ( y % 2 == 0)
        {
            f = f + y;
            y = y+1;
            
        }
        else
        {
            y = y+1;
        }
    
    }

    cout << f << endl;

    return 0;
}