#include "iostream"

using namespace std;

void adivinar (int, int);

int main(void)
{
    int n = 44;
    int respuesta;

    cout << endl;
    cout << "JUEGO DE ADIVINA EL NUMERO" << endl;
    cout << "Adivina un numero entre 1 y 100" << endl;
    cout << "Tienes 5 oportunidades" << endl;
    cout << "Si quieres salir del juego presione 0" << endl << endl;

    adivinar (n, respuesta);

    return 0;
}

//Pistas, advertencias y mensajes de finalizacion

void adivinar (int n, int respuesta)
{
    int i;
    
    for (i=1; i<=5; i++)
    {
        cout << "Ingresa el numero: ";
        cin >> respuesta;
        cout << endl;

        while (respuesta > 100 || respuesta < 0){
            cout << "El numero esta fuera del rango." << endl;
            cout << "Ingresa el numero: ";
            cin >> respuesta;
            cout << endl;
        }

        if(respuesta > n){
            cout << "Ese numero es muy alto, prueba con uno mas bajo." << endl;
        }if(respuesta < n && respuesta > 0){
            cout << "Ese numero es muy bajo, prueba con uno mas alto." << endl;
        }if(respuesta == n ){
            cout << "Excelente! has adivinado el numero." << endl;
            break;
        }if(respuesta == 0){
            cout << "Has finalizado el juego." << endl;
            break;
        }
    }

    if (i == 6){
        cout << endl;
        cout << "Se han terminado las oportunidades." << endl;
    }

    cout << endl;
}