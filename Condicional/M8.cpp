// Verificacion de usuario y contrasena
#include <iostream>
using namespace std;

int main()
{
    string usu, contra, usu1, contra1; //string de datos inicialmente digitados y de datos posteriormente dados
    
    cout << "Bienvenido!" << endl;
    cout << "Crea tu cuenta!" << endl;
    cout << "Digita tu usuario y contrasena a continuacion" << endl;
    cout << "Usuario: "; //Sin endl para que se vea mas ordenado
    cin >> usu;
    cout << "Contrasena: "; //Sin endl
    cin >> contra;

    cout << "Bienvenido otra vez! Digita tus datos para iniciar sesion" << endl; //Volver a digitar los datos para iniciar sesion
     cout << "Usuario: ";
    cin >> usu1;
    cout << "Contrasena: ";
    cin >> contra1;

    if (usu1 == usu && contra == contra1) // Si las credenciales coinciden
    {
        cout << "Bienvenido! Has accedido exitosamente a tu cuenta" << endl;
    }
    else if (usu1 == usu && contra != contra1) //Si solo el usuario coincide
    {
        cout << "Su contrasena es incorrecta!" << endl;
    }
    else if (usu1 != usu && contra == contra1) //Si solo la contrasena coincide
    {
        cout << "Su usuario es incorrecto! " << endl;
    }
    else //Si ninguno coincide :)
    {
        cout << "Credenciales incorrectas! " << endl;
    }

    return 0;
}