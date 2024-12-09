#include <iostream>
using namespace std;

int main() {
    double sueldoBruto, bonificacion, sueldoNeto;
    int cantidadHijos;

    cout << "Ingrese el sueldo bruto: S/. ";cin >> sueldoBruto;
    cout << "Ingrese la cantidad de hijos: ";cin >> cantidadHijos;

    if (cantidadHijos > 1) {bonificacion = (sueldoBruto * 0.125) + (cantidadHijos * 40);}
    else {bonificacion = sueldoBruto * 0.10;}

    sueldoNeto = sueldoBruto + bonificacion;

    cout << "Bonificación: S/. " << bonificacion << endl;
    cout << "Sueldo total a pagar: S/. " << sueldoNeto << endl;

    return 0;
}