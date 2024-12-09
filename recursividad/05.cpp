#include <iostream>
using namespace std;

void generarTabla(int n, int i) {
    if (i > 12) {
        return;
    }
    cout << n << " x " << i << " = " << n * i << endl;
    generarTabla(n, i + 1);
}

int main() {
    int n;

    cout << "Ingrese un numero para generar su tabla de multiplicar: "; cin >> n;
    cout << "Tabla de multiplicar de " << n << ":" << endl;
    generarTabla(n, 1);

    return 0;
}