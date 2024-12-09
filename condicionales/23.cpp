#include <iostream>
using namespace std;

int main() {
    float matematica, fisica, propinaMat, propinaFisica, promedio;

    cout << "Nota de Matemáticas: ";cin >> matematica;
    cout << "Nota de Física: ";cin >> fisica;

    if (matematica > 17) propinaMat = 3;
    else propinaMat = matematica;

    if (fisica > 15) propinaFisica = 2;
    else propinaFisica = fisica * 0.5;

    promedio = (matematica + fisica) / 2;

    cout << "La propina por Matemáticas es: S/. " << propinaMat << endl;
    cout << "La propina por Física es: S/. " << propinaFisica << endl;

    if (promedio > 16) cout << "Reloj: SI" << endl;
    else cout << "Reloj: NO"<<endl;

    return 0;
}