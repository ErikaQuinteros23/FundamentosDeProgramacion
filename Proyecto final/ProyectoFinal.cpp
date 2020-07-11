#include "iostream"
#include "cstring"

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
char nombreArticulo[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};

void DatosDeCompra (costoPorArticulo[], int);
void CostoPorArticulo (costoPorArticulo[], int);
void DesplegarDatos (costoPorArticulo[], int);
float TotalCompra (costoPorArticulo[], int);

int main(void)
{
    cout << endl;

    cout << "BIENVENIDO AL SISTEMA DE COMPRA" << endl << endl;

    int cantidadArticulos;

    //Solicitud de cantidad de articulos a incluir en el arreglo

    cout << "Por favor ingrese el numero de articulos a comprar: ";
    cin >> cantidadArticulos;
    while(cantidadArticulos <=0){
        cout << endl;
        cout << "Esa cantidad de articulos no es valida, ingresela nuevamente." << endl << endl;

        cout << "Por favor ingrese el numero de articulos a comprar: ";
        cin >> cantidadArticulos;
    }
    cin.ignore(100, '\n');

    cout << endl;

    costoPorArticulo Articulos[cantidadArticulos];

    //llamado de funciones

    DatosDeCompra (Articulos, cantidadArticulos);

    CostoPorArticulo (Articulos, cantidadArticulos);

    DesplegarDatos (Articulos, cantidadArticulos);

    cout << "El total a pagar por su compra es: $" << TotalCompra (Articulos, cantidadArticulos);

    cout << endl << endl;

    return 0;
}

//Funcion que lee los datos de la compra

void DatosDeCompra (costoPorArticulo Articulos[], int cantidadArticulos)
{
    string cad;

    for(int i=0; i<cantidadArticulos; i++){
        cout << "Ingrese el nombre del articulo " << i+1 << " : ";
        getline(cin, cad, '\n');
        strncpy(Articulos[i].nombreArticulo, cad.c_str( ), longCad);
        Articulos[i].nombreArticulo[longCad]='\0';

        cout << "Ingrese las cantidades a comprar de este articulo: ";
        cin >> Articulos[i].cantidad;
        while(Articulos[i].cantidad < 0){
            cout << endl;
            cout << "Esa cantidad de articulos no es valida, ingresela nuevamente." << endl << endl;

            cout << "Ingrese las cantidades a comprar de este articulo: ";
            cin >> Articulos[i].cantidad;
        }

        cout << "Ingrese el precio unitario de este articulo: $";
        cin >> Articulos[i].precio;
        while(Articulos[i].precio < 0){
            cout << endl;
            cout << "Ese precio no es valido, ingreselo nuevamente." << endl << endl;

            cout << "Ingrese el precio unitario de este articulo: $";
            cin >> Articulos[i].precio;
        }

        cout << endl;

        cin.ignore(100, '\n');
    }
}

//Funcion que calcula el costo por artículo

void CostoPorArticulo (costoPorArticulo Articulos[], int cantidadArticulos)
{ 
    for (int i=0; i<cantidadArticulos; i++){
        Articulos[i].costoPorArticulo = Articulos[i].precio * Articulos[i].cantidad;
    }
}

//Funcion que despliega el contenido del arreglo

void DesplegarDatos (costoPorArticulo Articulos[], int cantidadArticulos)
{
    cout << "DETALLES DE LA COMPRA: " << endl << endl;

   for (int i=0; i<cantidadArticulos; i++){
       cout << "Nombre del articulo " << i+1 << ": " << Articulos[i].nombreArticulo << endl;
       cout << "Precio unitario de este articulo es: $" << Articulos[i].precio << endl;
       cout << "La cantidad de unidades compradas de este articulo es: " << Articulos[i].cantidad << endl;
       cout << "El costo total por el articulo es: $" << Articulos[i].costoPorArticulo << endl;

       cout << endl;
    } 
}

//Funcion que retorna el costo total de la compra

float TotalCompra (costoPorArticulo Articulos[], int cantidadArticulos)
{
    float CostoTotal;

    for (int i=0; i<cantidadArticulos; i++){
        CostoTotal += Articulos[i].costoPorArticulo;
    }

    return CostoTotal;
}