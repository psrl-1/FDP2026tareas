//Horario de clases.
#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout << "Bienvenido. Vamos a checar tu horario. \n";
    cout << "Lunes: 1\n";
    cout << "Martes: 2\n";
    cout << "Miercoles: 3\n";
    cout << "Jueves: 4\n";
    cout << "Viernes: 5\n";
    cout << "Sabado: 6\n";
    cout << "Domingo: 7\n";
    cout << "Dia de la semana: ";
    cin >> dia;

    switch (dia)
    {
        case 1:
            cout << "9:00 - 10:40: Elementos para el estudio de la ciencia.\n";
            cout << "11:00 - 12:40: Fundamentos de Programacion.\n";
            break;
        case 2:
            cout << "9:00 - 10:40: Algebra vectorial y matices.\n";
            cout << "11:00 - 12:40: Matematica discreta.\n";
            break;
        case 3:
            cout << "9:00 - 10:40: Elementos para el estudio de la ciencia.\n";
            cout << "11:00 - 12:40: Fundamentos de Programacion.\n";
            break;
        case 4:
            cout << "9:00 - 10:40: Algebra vectorial y matices.\n";
            cout << "11:00 - 12:40: Matematica discreta.\n";
            break;
        case 5:
            cout << "8:00 - 9:40: Matematica discreta.\n";
            cout << "11:00 - 11:40: Algebra Vectorial\n";
            break;
        case 6: 
            cout << "Nada.\n";
            break;
        case 7:
            cout << "Nada. \n";
            break;
        default:
            cout << "Numero invalido\n";
    }

    return 0;
}