//Calificacion de conduccion
#include <iostream>
using namespace std;

int main()
{
    int edad, nif, exp;
    string edad1, nif1, exp1;

    cout << "Vamos a calificar tu conduccion. " << endl;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu numero de infracciones (por ano): ";
    cin >> nif;
    cout << "Ingresa tus anos de experiencia: ";
    cin >> exp;

    cout << "-----------------------------------------------------" << endl;

    if (edad >= 18 && edad < 25)
    {
        edad1 = "Joven";
        cout << edad1 << endl;
    }
    else if (edad >= 25 && edad < 57)
    {
        edad1 = "Adulto";
        cout << edad1 << endl;
    }
    else if (edad >= 57)
    {
        edad1 = "Adulto mayor";
        cout << edad1 << endl;
    }
    else 
    {
        cout << "No aplica" << endl;
    }


    if (nif == 0)
    {
        nif1 = "Excelente";
        cout << nif1 << endl;
    }
    else if (nif > 0 && nif <= 2)
    {
        nif1 = "Descuidado/a";
        cout << nif1 << endl;
    }
    else if (nif > 3)
    {
        nif1 = "Violador";
        cout << nif1 << endl;
    }
    else 
    {
        cout << "No aplica" << endl;
    }


    if (exp >= 0 && exp <=5)
    {
        exp1 = "Novato";
        cout << exp1 << endl;
    }
    else if (exp > 5 && exp <= 15)
    {
        exp1 = "Experimentado";
        cout << exp1 << endl;
    }
    else if (exp > 15)
    {
        exp1 = "Veterano";
        cout << exp1 << endl;
    }
    else 
    {
        cout << "No aplica" << endl;
    }

    return 0;
}