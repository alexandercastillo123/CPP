#include <iostream>
using namespace std;

int main() {
    int horasTrabajadas;
    char categoria;
    double tarifaHora, sueldoBruto, descuento, sueldoNeto;

    cout << "Ingrese la categoría del trabajador (A, B, C, D): ";cin >> categoria;
    cout << "Ingrese las horas trabajadas: ";cin >> horasTrabajadas;

    switch (categoria) {
        case 'A': tarifaHora = 21.00; break;
        case 'B': tarifaHora = 19.50; break;
        case 'C': tarifaHora = 17.00; break;
        case 'D': tarifaHora = 15.50; break;
        default: cout << "Categoría inválida." << endl;}

    sueldoBruto = horasTrabajadas * tarifaHora;

    if (sueldoBruto > 2500) {descuento = sueldoBruto * 0.20;} 
    else {descuento = sueldoBruto * 0.15;}

    sueldoNeto = sueldoBruto - descuento;

    cout << "Sueldo bruto: S/. " << sueldoBruto << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Sueldo neto: S/. " << sueldoNeto << endl;

    return 0;
}