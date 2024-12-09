#include <iostream>
using namespace std;

void mostrarNumeros(int i) {
    if (i > 100) {
        return;
    }

    cout << i << " ";

    if (i % 10 == 0) {
        cout << endl;
    }

    mostrarNumeros(i + 1);
}

int main() {
    mostrarNumeros(1);
    return 0;
}