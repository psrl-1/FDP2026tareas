// Verificacion de usuario y contrasena
#include <iostream>
using namespace std;

int main()
{
    string usu, contra, usu1, contra1;
    
    cout << "Bienvenido!" << endl;
    cout << "Crea tu cuenta!" << endl;
    cout << "Digita tu usuario y contrasena a continuacion" << endl;
    cout << "Usuario: ";
    cin >> usu;
    cout << "Contrasena: ";
    cin >> contra;

    cout << "Bienvenido otra vez! Digita tus datos para iniciar sesion" << endl;
     cout << "Usuario: ";
    cin >> usu1;
    cout << "Contrasena: ";
    cin >> contra1;

    if (usu1 == usu && contra == contra1)
    {
        cout << "Bienvenido! Has accedido exitosamente a tu cuenta" << endl;
    }
    else if (usu1 == usu && contra != contra1)
    {
        cout << "Su contrasena es incorrecta!" << endl;
    }
    else if (usu1 != usu && contra == contra1)
    {
        cout << "Su usuario es incorrecto! " << endl;
    }
    else 
    {
        cout << "Credenciales incorrectas! " << endl;
    }

    return 0;
}