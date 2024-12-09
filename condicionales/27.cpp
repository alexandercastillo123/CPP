#include <iostream>
using namespace std;

int main() {
    double montoVendido, sueldoBruto, descuento, sueldoNeto;
    int polosObsequiados;
    const double sueldoBasico = 600.0;

    cout << "Ingrese el monto total vendido: ";cin >> montoVendido;

    sueldoBruto = sueldoBasico + (montoVendido * 0.15);

    if (sueldoBruto > 1800) {descuento = sueldoBruto * 0.10;} 
    else {descuento = sueldoBruto * 0.05;}

    sueldoNeto = sueldoBruto - descuento;

    if (montoVendido > 1000) {polosObsequiados = 3;
    }
    else {polosObsequiados = 1;}

    cout << "Sueldo bruto: $" << sueldoBruto << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Sueldo neto: $" << sueldoNeto << endl;
    cout << "Número de polos obsequiados: " << polosObsequiados << endl;

    return 0;
}