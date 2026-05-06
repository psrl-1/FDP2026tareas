// Zodiaco segun el mes
#include <iostream>
using namespace std;

int main()
{   
    int mes;
    cout << "Bienvenido. Vamos a ver tu signo zodiacal.\n";
    cout << "Ingresa el  numero del mes de tu nacimiento: ";
    cin >> mes;

    switch(mes)
    {
        case 1:
            cout << "Tu signo zodiacal es Acuario. \n";
            break;
        case 2: 
            cout << "Tu signo zodiacal es Piscis. \n";
            break;
        case 3:
            cout << "Tu signo zodiacal es Aries. \n";
            break;
        case 4:
            cout << "Tu signo zodiacal es Tauro. \n";
            break;
        case 5:
            cout << "Tu signo zodiacal es Geminis. \n";
            break;
        case 6:
            cout << "Tu signo zodiacal es Cancer. \n";
            break;
        case 7:
            cout << "Tu signo zodiacal es Leo. \n";
            break;
        case 8:
            cout << "Tu signo zodiacal es Virgo. \n";
            break;
        case 9:
            cout << "Tu signo zodiaca es Libra. \n";
            break;
        case 10: 
            cout << "Tu signo zodiacal es Escorpio. \n";
            break;
        case 11: 
            cout << "Tu signo zodiacal es Sagitario. \n";
            break;
        case 12:
            cout << "Tu signo zodiacal es Capricornio. \n";
            break;
        default:
            cout << "Numero incorrecto. \n";
    }
    
    return 0;
}