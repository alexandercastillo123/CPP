#include <iostream>
using namespace std;

int main() {
    double base, altura;

    cout << "Ingrese la base: ";cin >> base;
    cout << "Ingrese la altura: ";cin >> altura;

    double area = base*altura;
    double perimetro =2*(base+altura);

    cout<<"El área del rectangulo es: "<<area<<endl;
    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;

    return 0;
}