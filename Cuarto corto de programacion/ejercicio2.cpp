#include "iostream"

using namespace std;

float promedio(float[]);
void comparacion(float[]);

int main(void)
{
    cout << endl;

    cout << "Programa que calcula el promedio de estatura de una clase de 25 alumnos." << endl << endl;

    float estatura[25];

    for (int i=0; i<25; i++){
        cout << "Ingrese la estatura del alumno " << i+1 << ": ";
        cin >> estatura[i];
    }

    cout << endl;

    cout << "El promedio de estaturas es: " << promedio (estatura) << " m";

    cout << endl << endl;

    comparacion (estatura);

    return 0;
}

//calculo del promedio de las estaturas

float promedio(float estatura[])
{
    float suma=0, promedio;

    for(int i=0; i<25; i++){
        suma += estatura[i];
    }

    promedio = suma/25;

    return promedio;
}

//comparacion de las estaturas con respecto a la media

void comparacion(float estatura[])
{
    float prom = promedio(estatura);
    int contadorAbajo = 0, contadorArriba = 0;

    for(int i=0; i<25; i++){
        if (estatura[i] >= prom){
            contadorArriba++;
        }else if (estatura[i] < prom){
            contadorAbajo++;
        }
    }

    cout << "El numero de estaturas que estan arriba de la media o igual a la media son: " << contadorArriba;
    cout << endl << endl;

    cout << "El numero de estaturas que estan abajo de la media son: " << contadorAbajo;
    cout << endl << endl;
}