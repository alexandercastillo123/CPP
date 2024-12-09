#include <iostream>
using namespace std;

int main() {
    int pies;
    int pulgadas;

    cout<<"Introduce la estatura en formato inglés:" << endl;
    cout<<"Pies: ";cin>>pies;
    cout<<"Pulgadas: ";cin>>pulgadas;

    double altura_cm = (pies * 30.48) + (pulgadas * 2.54);

    double altura_metros = altura_cm * 1/100.0;

    printf("La estatura en metros es: %4.2f m\n", altura_metros);

    return 0;
}
