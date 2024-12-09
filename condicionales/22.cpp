#include <iostream>
using namespace std;

int main() {
    int cantidadA, cantidadB;
    float precioA = 25, precioB = 30, descuentoA = 0.15, descuentoB = 0.10;
    float importeBrutoA, importeBrutoB, descuentoTotalA, descuentoTotalB, totalPagar;

    cout << "Ingrese la cantidad de producto A: ";cin >> cantidadA;
    cout << "Ingrese la cantidad de producto B: ";cin >> cantidadB;

    importeBrutoA = cantidadA * precioA;
    importeBrutoB = cantidadB * precioB;

    if (cantidadA > 50) descuentoTotalA = importeBrutoA * descuentoA;
    else descuentoTotalA = 0;

    if (cantidadB > 60) descuentoTotalB = importeBrutoB * descuentoB;
    else descuentoTotalB = 0;

    totalPagar = (importeBrutoA - descuentoTotalA) + (importeBrutoB - descuentoTotalB);

    cout << "Importe bruto del producto A: S/. " << importeBrutoA << endl;
    cout << "Descuento sobre producto A: S/. " << descuentoTotalA << endl;
    cout << "Importe bruto del producto B: S/. " << importeBrutoB << endl;
    cout << "Descuento sobre producto B: S/. " << descuentoTotalB << endl;
    cout << "Total a pagar: S/. " << totalPagar << endl;

    return 0;
}