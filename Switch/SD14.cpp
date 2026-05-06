// Clasificacion de peliculas por edad
#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Bienvenido. Vamos a recomendarte una categoria de peliculas para menores de edad."<< endl;
    cout << "Ingresa tu edad porfavor." << endl;
    cout << "Edad: ";
    cin >> edad;

    switch (edad)
    {
        case 1:
            cout << "La categoria recomendada es g. \n";
            break;
         case 2:
            cout << "La categoria recomendada es g. \n";
            break;
         case 3:
            cout << "La categoria recomendada es g. \n";
            break;
         case 4:
            cout << "La categoria recomendada es g. \n";
            break;
         case 5:
            cout << "La categoria recomendada es g. \n";
            break;
         case 6:
            cout << "La categoria recomendada es g. \n";
            break;
         case 7:
            cout << "La categoria recomendada es g. \n";
            break;
         case 8:
            cout << "La categoria recomendada es g. \n";
            break;
         case 9:
            cout << "La categoria recomendada es g. \n";
            break;
         case 10:
            cout << "La categoria recomendada es g y PG-13. \n";
            break;
         case 11:
            cout << "La categoria recomendada es g y PG-13. \n";
            break;
         case 12:
            cout << "La categoria recomendada es g y PG-13. \n";
            break;
         case 13:
            cout << "La categoria recomendada es g y PG-13. \n";
            break;
         case 14:
            cout << "La categoria recomendada es g o PG. \n";
            break;
         case 15:
            cout << "La categoria recomendada es g o PG. \n";
            break;
         case 16:
            cout << "La categoria recomendada es g o PG. \n";
            break;
         case 17:
            cout << "La categoria recomendada es g, PG o R. \n";
            break;
        default:
            cout << "Edad invalida o mayor a 18" << endl;

    }
    return 0;
}