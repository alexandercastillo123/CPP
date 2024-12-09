#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, altura, hipotenusa;

    cout<<"Ingrese la base del triangulo: ";cin>>base;
    cout<<"Ingrese la altura del triangulo: ";cin>>altura;

    hipotenusa = sqrt(pow(base, 2) + pow(altura, 2)); 

    cout<<"La hipotenusa del triangulo es: "<<hipotenusa<<endl;
    
    return 0;
}
