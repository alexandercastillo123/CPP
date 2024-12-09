#include <iostream>
using namespace std;

int main() {
    char categoria;
    double pension, dsc, descuento, ponderado;

    cout << "Ingrese la categoría del estudiante (A, B, C, D): ";cin >> categoria;
    cout << "Ingrese su promedio ponderado: ";cin >> ponderado;

    switch (categoria) {
        case 'A': pension = 550; break;
        case 'B': pension = 500; break;
        case 'C': pension = 450; break;
        case 'D': pension = 400; break;
        default: cout << "Categoría inválida." << endl;}

    if (ponderado>=0 && ponderado<14) dsc = 0;
    else if (ponderado>=14 && ponderado<16) dsc = 0.10;
    else if (ponderado>=16 && ponderado<18) dsc = 0.12;
    else if (ponderado>=18 && ponderado<=20) dsc = 0.15;
    
    descuento = dsc * pension;
    
    double pagar = pension - descuento;
    
    cout << "Pension acatual: " << pension << endl;
    cout << "Descuento: S/. " << descuento << endl;
    cout << "Nueva pension a pagar: S/. " << pagar << endl;

    return 0;
}