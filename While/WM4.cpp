// Menu interactivo
#include <iostream>
using namespace std;

int main()
{
    int opt;
    cout << "Bienvenido. Seleccione su opcion. \n";
    cout << "Hamburgesa = 1\n";
    cout << "Pizza = 2\n";
    cout << "Sopa de iguana = 3\n";
    cout << "Salir = 0\n";
    cin >> opt;

    while (opt != 0)
    {
        switch(opt)
        {
            case 1:
                cout << "Hamburgesa.\n";
                cin >> opt;
                break;
            case 2:
                cout << "Pizza\n";
                cin >> opt;
                break;
            case 3:
                cout << "Sopa de iguana.\n";
                cin >> opt;
                break;
            default: 
                cout << "Numero invalido.\n";
                cin >> opt;
                break;
        }
    }

    cout << "Adios!" << endl;

    return 0;
}