#include <iostream>
using namespace std;

int main() {
    double cuota, descuento, recargo, totalPagar;
    int diaPago;

    cout << "Ingrese el monto de la cuota mensual: ";cin >> cuota;
    cout << "Ingrese el día del mes en que realizó el pago: ";cin >> diaPago;

    if (diaPago >= 1 && diaPago <= 10) {descuento = max(5.0, cuota * 0.02);totalPagar = cuota - descuento;}
    else if (diaPago >= 11 && diaPago <= 20) {descuento = 0;recargo = 0;totalPagar = cuota;}
    else if (diaPago >= 21 && diaPago <= 31) {recargo = max(10.0, cuota * 0.03);totalPagar = cuota + recargo;} 
    else {cout << "Día inválido." << endl;}

    cout << "Cuota mensual: $" << cuota << endl;
    if (diaPago <= 10) {cout << "Descuento aplicado: $" << descuento << endl;}
    else if (diaPago >= 21) {cout << "Recargo aplicado: $" << recargo << endl;}
    cout << "Total a pagar: $" << totalPagar << endl;

    return 0;
}