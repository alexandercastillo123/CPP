#include <iostream>
using namespace std;

int main() {
    int codigo;

    cout << "Ingrese su codigo (3 cifras): ";cin >> codigo;

    if (codigo % 2 == 0 && codigo % 3 == 0 && codigo % 5 == 0) {
        cout << "Tipo de empleado: Administrativo" << endl;
    } else if (codigo % 3 == 0 && codigo % 5 == 0) {
        cout << "Tipo de empleado: Directivo" << endl;
    } else if (codigo % 2 == 0) {
        cout << "Tipo de empleado: Vendedor" << endl;
    } else {
        cout << "Tipo de empleado: Seguridad" << endl;
    }

    return 0;
}