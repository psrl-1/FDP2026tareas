// Cuenta regresiva

#include <iostream>
using namespace std;

int main()
{
   float n,y=0,t;
   cout << "Ingresa tu numero y llegaremos hasta 0" << endl;
   cin >> n;


   while (n > 0)
    {
        t = n*1;
        n = n-1;
        cout << t;

    }

    return 0;
}