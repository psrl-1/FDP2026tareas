//Cantidad de terminos de la serie Fibronacci
#include <iostream>
using namespace std;

int main()
{
    int n=0,y=1,t=0, d=0;
    cout << "Ingresa la cantidad de terminos Fibonacci.\n";
    cout << "Cantidad:";
    cin >> n;

    for (int i=1; i <= n; i++ )
    {
        d = y + t;
        t = d;
        cout << t;
    }

    return 0;
}