// Cuenta regresiva

#include <iostream>
using namespace std;

int main()
{
   float n,y=0;
   cout << "Ingresa tu numero y llegaremos hasta 0" << endl;
   cin >> n;

   while (n > 0)
    {
        cout << n << endl;
        n = n-1;
    }
    return 0;
}