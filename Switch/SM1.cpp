#include <iostream>
using namespace std;

int main ()
{
    int dia;
    cout << "Digita un numero del 1 al 7 para ver el dia de la semana correspondiente\n";
    cin >> dia;

    switch (dia)
    {
        case 1:
            cout << "El dia 1 es Lunes\n";
            break;
         case 2:
            cout << "El dia 2 es Martes\n";
            break;
         case 3:
            cout << "El dia 3 es Miercoles\n";
            break;
         case 4:
            cout << "El dia 4 es Jueves\n";
            break;
         case 5:
            cout << "El dia 5 es Viernes\n";
            break;
         case 6:
            cout << "El dia 6 es Sabado\n";
            break;
         case 7:
            cout << "El dia 7 es Domingo\n";
            break;

        default:
            cout << "Numero incorrecto"<< endl;
            break;
    }
    
    return 0;
    
} 
