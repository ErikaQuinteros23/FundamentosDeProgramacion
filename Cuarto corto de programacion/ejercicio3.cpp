#include "iostream"

using namespace std;

void matriz(float[][5], int);
void resultado(float[][5], int);

int main(void)
{
    int estudiantes, columnasNotas;

    cout << endl;

    cout << "Este programa determina si los estudiantes aprobaron o reprobaron la materia" << endl << endl;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> estudiantes;

    cout << endl;

    float tabla[estudiantes][5];

    matriz (tabla, estudiantes);

    resultado(tabla, estudiantes);

    return 0;
}

//llenado de matriz

void matriz(float tabla[][5], int estudiantes)
{
    for (int i=0; i<estudiantes; i++){
        for (int j=0; j<5; j++){
            cout << "Ingrese la nota " << j+1 << " del estudiante " << i+1 << ": ";
            cin >> tabla[i][j];
        }
        cout << endl;
    }   
}

//calculo de nota final

void resultado(float tabla[][5], int estudiantes)
{
    float multiplicar;

    for (int i=0; i<estudiantes; i++){
        float suma = 0;
        for (int j=0; j<5; j++){
            multiplicar = tabla[i][j] * 0.20;
            suma = suma + multiplicar;
        }
        if (suma >= 6){
            cout << "El estudiante " << i+1 << " ha aprobado la materia, con nota final: " << suma;
            cout << endl << endl;
        }else{
            cout << "El estudiante " << i+1 << " ha reprobado la materia, con nota final: " << suma;
            cout << endl << endl;
        }
    }
}