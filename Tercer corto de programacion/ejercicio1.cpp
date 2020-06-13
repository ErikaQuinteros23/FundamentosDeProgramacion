#include "iostream"

using namespace std;

void salarios (int, int);

int main(void)
{
    int empleados, i, horas, horasextras;

    cout << endl;
    cout << "Programa que calcula el salario" << endl << endl;

    cout << "Ingrese el numero de empleados: ";
    cin >> empleados;
    cout << endl;

    //Lazo para mostrar salarios

    for (i = 1; i <= empleados; i++)
    {
    cout << "ingrese las horas trabajadas del empleado " << i << ": ";
    cin >> horas;
    cout << endl;
    cout << "ingrese las horas extras trabajadas del empleado " << i << ": ";
    cin >> horasextras;
    cout << endl;

    salarios (horas, horasextras);

    }

    return 0;
}

//Calculo de salarios

void salarios (int horas, int horasextras)
{
    float totalhoras, totalhorasextras, salariototal, ISSS, AFP, ISR, salarioreal1, salarioreal2;

    totalhoras = horas * 1.75;
    totalhorasextras = horasextras * 2.50;
    salariototal = totalhoras + totalhorasextras;

    cout << "El salario total es: " << salariototal;
    cout << endl << endl;

    ISSS = salariototal * 0.04;
    AFP = salariototal * 0.0625;
    ISR = salariototal * 0.1;

    if(salariototal > 500){
        salarioreal1 = salariototal - ISSS - AFP - ISR;
        cout << "El salario real es: " << salarioreal1;
    }else{
        salarioreal2 = salariototal - ISSS - AFP;
        cout << "El salario real es: " << salarioreal2;

    }

    cout << endl << endl;
    
}