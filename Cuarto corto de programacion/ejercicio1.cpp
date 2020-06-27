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

    if(frase[i] == 'm'){
        codificar = '0';
    }
    if(frase[i] == 'u'){
        codificar = '1';
    }
    if(frase[i] == 'r'){
        codificar = '2';
    }
    if(frase[i] == 'c'){
        codificar = '3';
    }
    if(frase[i] == 'i'){
        codificar = '4';
    }
    if(frase[i] == 'e'){
        codificar = '5';
    }
    if(frase[i] == 'l'){
        codificar = '6';
    }
    if(frase[i] == 'a'){
        codificar = '7';
    }
    if(frase[i] == 'g'){
        codificar = '8';
    }
    if(frase[i] == 'o'){
        codificar = '9';
    }

    return codificar;
}