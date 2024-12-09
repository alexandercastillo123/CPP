#include <iostream>
using namespace std;

int main()
{
    int angulo;
    
    cout << "Ángulo: "; cin >> angulo;

    if (angulo == 0) cout << "Ángulo nulo";
    else if (angulo > 0 && angulo < 90) cout << "Ángulo agudo";
    else if (angulo == 90) cout << "Ángulo recto";
    else if (angulo > 90 && angulo < 180) cout << "Ángulo obtuso";
    else if (angulo == 180) cout << "Ángulo llano";
    else if (angulo > 180 && angulo < 360) cout << "Ángulo cóncavo";
    else if (angulo == 360) cout << "Ángulo completo";
    else cout << "Ángulo no válido";

    return 0;
}