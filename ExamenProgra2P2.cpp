#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

    array<string, 4> articulos = {
        "Espacio 1",
        "Espacio 2",
        "Espacio 3",
        "Espacio 4",
    };

    array<double, 4> costos = {
        25, 1, 1, 5};
 
    array<int, 4> cantidades = {
        150, 100, 2, 10};


    string eleccion = "";

    while (eleccion != "2")
    {

        cout << "____________" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "Inventario: " << i + 1 << endl;
            cout << "Artículo: " << articulos[i] << endl;
            cout << "Costo: " << costos[i] << endl;
            cout << "Cantidad: " << cantidades[i] << endl;
            cout << "____________" << endl;
        }
        cout << "1. Espacio de inventario\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            int numeroArticulo;
            cout << "Ingrese el número de espacio de inventario que desea adquirir: ";
            cin >> numeroArticulo;
            int indice = numeroArticulo - 1;
            if (indice >= 0 && indice <= 3)
            {
                int cantidad;
                cout << "Ingrese la cantidad de compra: ";
                cin >> cantidad;
                if (cantidad > cantidades[indice])
                {
                    cout << "No hay suficiente existencia" << endl;
                }
                else
                {
                    double costo = costos[indice];
                    double total = costo * cantidad;
                    cout << "========================================" << endl;
                    cout << "Usted ha Adquirido su Inventario Correctamente" << articulos[indice] << " X " << cantidad << endl;
                    cout << "Total: " << total << endl;
                    cout << "GRACIAS POR SU ELECCION" << endl;
                    cout << "========================================" << endl;
                    cantidades[indice] = cantidades[indice] - cantidad;
                }
            }
            else
            {
                cout << "Número de artículo " << numeroArticulo << " inválido" << endl;
            }
        }
    }
}
