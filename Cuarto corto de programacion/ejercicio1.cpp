#include "iostream"

using namespace std;

char codificacion(char[], int);

int main(void)
{
    char frase[100];

    cout << endl;

    cout << "Este es un programa que codifica caracteres por medio de la clave murcielago" << endl << endl;

    cout << "Ingrese una frase o palabra: ";
    cin.getline(frase,100);

    cout << endl;

    // Recorrido de la frase

    for (int i=0; i<100; i++){
        frase[i] = codificacion(frase, i);
    }

    // Mostar la frase codificada

    cout << "La frase que usted ingreso, codificada es: " << frase;

    cout << endl << endl;

    return 0;
}

// codificacion de caracteres

char codificacion(char frase[], int i)
{
    char codificar = frase[i];

    if(frase[i] == 'm' || frase[i] == 'M'){
        codificar = '0';
    }
    if(frase[i] == 'u' || frase[i] == 'U'){
        codificar = '1';
    }
    if(frase[i] == 'r' || frase[i] == 'R'){
        codificar = '2';
    }
    if(frase[i] == 'c' || frase[i] == 'C'){
        codificar = '3';
    }
    if(frase[i] == 'i' || frase[i] == 'I'){
        codificar = '4';
    }
    if(frase[i] == 'e' || frase[i] == 'E'){
        codificar = '5';
    }
    if(frase[i] == 'l' || frase[i] == 'L'){
        codificar = '6';
    }
    if(frase[i] == 'a' || frase[i] == 'A'){
        codificar = '7';
    }
    if(frase[i] == 'g' || frase[i] == 'G'){
        codificar = '8';
    }
    if(frase[i] == 'o' || frase[i] == 'O'){
        codificar = '9';
    }

    return codificar;
}