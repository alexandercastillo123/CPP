#include <iostream>
using namespace std;

void generarTabla(int n, int x, int y) {
    if (x > y) {
        return;
    }
    cout << n << " x " << x << " = " << n * x << endl;
    generarTabla(n, x + 1, y);
}

int main() {
    int n, x, y;

    cout << "Ingrese el número para generar su tabla de multiplicar: "; cin >> n;
    cout << "Ingrese el valor inicial (x) de la tabla: "; cin >> x;
    cout << "Ingrese el valor final (y) de la tabla: "; cin >> y;

    generarTabla(n, x, y);

    return 0;
}