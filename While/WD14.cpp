// Conversion de bases.
#include <iostream>
using namespace std;

int main ()
{
    int n, y, f, w;
    cout << "Ingresa tu numero decimal y lo convertiremos a binario\n";
    cout << "Numero: \n";
    cin >> n;

    w = n;

    while(w > 1)
    {
        w = w/2;
    }

    cout << w;

    while (n > 1) 
    {
        f = n % 2;     
        cout << f;      
        n = n / 2;      
    }
    
    return 0;
}