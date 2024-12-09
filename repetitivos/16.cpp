#include <iostream>
#include <string>
using namespace std;

string invertirCadena(const string &texto) {
    string textoInvertido;
    for (int i = texto.length() - 1; i >= 0; i--) {
        textoInvertido += texto[i];
    }
    return textoInvertido;
}

int main() {
    string texto;

    cout << "Ingrese una cadena de texto: ";getline(cin, texto);

    string textoInvertido = invertirCadena(texto);

    cout << "Texto invertido: " << textoInvertido << endl;

    return 0;
}