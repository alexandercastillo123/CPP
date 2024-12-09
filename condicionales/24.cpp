#include <iostream>
using namespace std;

int main() {
    double montoVendido, sueldoBase, bonificacion, sueldoTotal;

    cout << "Ingrese el monto total vendido: S/. ";cin >> montoVendido;

    sueldoBase = montoVendido * 0.10;

    if (montoVendido > 5000) {double exceso = montoVendido - 5000;bonificacion = (exceso / 500) * 25;}
    else {bonificacion = 0;}

    sueldoTotal = sueldoBase + bonificacion;

    cout << "Sueldo base: S/. " << sueldoBase << endl;
    cout << "Bonificación por ventas en exceso: S/. " << bonificacion << endl;
    cout << "Sueldo total: S/. " << sueldoTotal << endl;

    return 0;
}