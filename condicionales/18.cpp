#include <iostream>
using namespace std;

int main() {
    double donacion, salud, comedor, bolsa;

    cout << "Ingrese el monto de la donación: ";cin >> donacion;

    if (donacion >= 10000) {salud = donacion * 0.30;comedor = donacion * 0.50;bolsa = donacion * 0.20;} 
    else {salud = donacion * 0.25;comedor = donacion * 0.60;bolsa = donacion * 0.15;}

    cout << "Distribución de la donación:" << endl;
    cout << "Centro de Salud: $" << salud << endl;
    cout << "Comedor de Niños: $" << comedor << endl;
    cout << "Inversión en la Bolsa: $" << bolsa << endl;

    return 0;
}