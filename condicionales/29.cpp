#include <iostream>
using namespace std;

int main() {
    int horasTrabajadas;
    double tarifaPorHora, sueldoBruto, sueldoFinal, descuento;

    cout << "Ingrese las horas trabajadas: ";cin >> horasTrabajadas;
    cout << "Ingrese la tarifa por hora: S/. ";cin >> tarifaPorHora;

    if (horasTrabajadas <= 48) {sueldoBruto = horasTrabajadas * tarifaPorHora;}
    else {int horasExtras = horasTrabajadas - 48; sueldoBruto = (48 * tarifaPorHora) + (horasExtras * tarifaPorHora * 1.2);}

    if (sueldoBruto > 1500) {descuento = sueldoBruto * 0.11;}
    else {descuento = 0;}

    sueldoFinal = sueldoBruto - descuento;

    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Pago por hora: S/. " << tarifaPorHora << endl;
    cout << "Sueldo bruto: S/. " << sueldoBruto << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Total a pagar: S/. " << sueldoFinal << endl;

    return 0;
}