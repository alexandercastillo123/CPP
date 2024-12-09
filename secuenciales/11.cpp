#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int primera1, primera2, tercera1, tercera2, nuevaNum1, nuevaNum2, central1, central2;

    cout << "Ingrese el 1er número de 3 cifras: ";cin >> num1;
    cout << "Ingrese el 2do número de 3 cifras: ";cin >> num2;

    if ((num1 >= 100 && num1 <= 999) && (num2 >= 100 && num2 <= 999)) {
        primera1 = num1 / 100;
        tercera1 = num1 % 10;
        central1 = (num1 / 10) % 10;

        primera2 = num2 / 100;
        tercera2 = num2 % 10;
        central2 = (num2 / 10) % 10;

        nuevaNum1 = (primera2 * 100) + (central1 * 10) + tercera2;
        nuevaNum2 = (primera1 * 100) + (central2 * 10) + tercera1;

        cout << "1er número modificado es: " << nuevaNum1 << endl;
        cout << "2do número modificado es: " << nuevaNum2 << endl;
    } else {
        cout << "Ambos números deben ser de 3 cifras." << endl;
    }

    return 0;
}
