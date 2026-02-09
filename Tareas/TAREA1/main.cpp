#include <iostream>
using namespace std;

class Carro {
private:
    string color;
    string marca;
    int velocidadMaxima;
    int anioFabricacion;

public:

    Carro(string c, string m, int vMax, int anio) {
        color = c;
        marca = m;
        velocidadMaxima = vMax;
        anioFabricacion = anio;
    }

    // Método para acelerar
    void acelerar() {
        cout << "El carro " << marca
             << " acelera hasta " << velocidadMaxima << " km/h." << endl;
    }

    // Método adicional
    void mostrarInfo() {
        cout << "\n--- Informacion del carro ---" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Color: " << color << endl;
        cout << "Velocidad maxima: " << velocidadMaxima << " km/h" << endl;
        cout << "Año de fabricacion: " << anioFabricacion << endl;
    }
};

int main() {
    string color, marca;
    int velocidadMaxima, anioFabricacion;

    // Ingreso de datos por consola
    cout << "Ingrese la marca del carro: ";
    cin >> marca;

    cout << "Ingrese el color del carro: ";
    cin >> color;

    cout << "Ingrese la velocidad maxima: ";
    cin >> velocidadMaxima;

    cout << "Ingrese el año de fabricacion: ";
    cin >> anioFabricacion;

    // Crear objeto usando el constructor con datos ingresados
    Carro carro(color, marca, velocidadMaxima, anioFabricacion);

    // Probar métodos
    carro.mostrarInfo();
    carro.acelerar();

    return 0;
}

