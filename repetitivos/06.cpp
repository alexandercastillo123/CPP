#include <iostream>
using namespace std;

int main() {
    int n, x, y;

    cout << "Ingrese el número para generar su tabla de multiplicar: ";cin >> n;
    cout << "Ingrese el valor inicial (x) de la tabla: ";cin >> x;
    cout << "Ingrese el valor final (y) de la tabla: ";cin >> y;

    for (int i = x; i <= y; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}