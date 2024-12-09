#include <iostream>
using namespace std;

int contarDivisores(int num, int i = 1) {
    if (i > num) {
        return 0;
    }
    return (num % i == 0) + contarDivisores(num, i + 1);
}

int main() {
    int num;

    cout << "Ingrese un número entero: "; 
    cin >> num;

    int cantidadDivisores = contarDivisores(num);
    cout << "La cantidad de divisores de " << num << " es: " << cantidadDivisores << endl;

    return 0;
}