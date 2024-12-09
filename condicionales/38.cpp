#include <iostream>
#include <string>
using namespace std;

bool esBisiesto(int año) {
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int mes, año;
    string nombreMes;
    int dias;

    cout << "Ingrese el año: ";
    cin >> año;
    cout << "Ingrese el número del mes (1-12): ";
    cin >> mes;

    switch (mes) {
        case 1: nombreMes = "Enero"; dias = 31; break;
        case 2: nombreMes = "Febrero"; dias = esBisiesto(año) ? 29 : 28; break;
        case 3: nombreMes = "Marzo"; dias = 31; break;
        case 4: nombreMes = "Abril"; dias = 30; break;
        case 5: nombreMes = "Mayo"; dias = 31; break;
        case 6: nombreMes = "Junio"; dias = 30; break;
        case 7: nombreMes = "Julio"; dias = 31; break;
        case 8: nombreMes = "Agosto"; dias = 31; break;
        case 9: nombreMes = "Septiembre"; dias = 30; break;
        case 10: nombreMes = "Octubre"; dias = 31; break;
        case 11: nombreMes = "Noviembre"; dias = 30; break;
        case 12: nombreMes = "Diciembre"; dias = 31; break;
        default: cout << "Mes inválido." << endl; return 1;
    }

    cout << "El mes de " << nombreMes << " tiene " << dias << " días." << endl;

    return 0;
}