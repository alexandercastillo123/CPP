#include <iostream>
using namespace std;

int main() {
    double monto, descuento, dsc;
    int numero;

    cout << "Ingrese el numero de tarjeta: ";cin >> numero;
    cout << "Ingrese el importe de compra: ";cin >> monto;
    
    if (numero >= 100 && numero % 2 == 0) descuento = 0.15;
    else descuento = 0.05;
    
    dsc = monto * descuento;
    double total = monto - (monto * descuento);
    
    cout << "El número de la tarjeta es: " << numero << endl;
    cout << "El monto de la compra es: " << monto << endl;
    cout << "El descuento es: " << dsc << endl;
    cout << "El total a pagar es: " << total << endl;
    
    return 0;
}