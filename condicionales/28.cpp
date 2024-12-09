#include <iostream>
using namespace std;

int main() {
    int horas, minutos;

    cout << "Ingrese la hora en formato 24 horas (horas y minutos): ";cin >> horas >> minutos;

    if (horas < 0 || horas >= 24 || minutos < 0 || minutos >= 60) {cout << "Hora inválida. Por favor, ingrese un valor correcto." << endl;}
    else {string periodo = (horas >= 12) ? "PM" : "AM";
    
    int hora12 = (horas == 0) ? 12 : (horas > 12) ? horas - 12 : horas;

    cout << "La hora en formato de 12 horas es: "<< hora12 << ":" << (minutos < 10 ? "0" : "") << minutos << " " << periodo << endl;}

    return 0;
}