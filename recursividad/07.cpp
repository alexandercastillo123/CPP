#include <iostream>
using namespace std;

long long calcularFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * calcularFactorial(n - 1);
}

int main() {
    int n;

    cout << "Ingrese un número: "; 
    cin >> n;

    if (n < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        long long factorial = calcularFactorial(n);
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}