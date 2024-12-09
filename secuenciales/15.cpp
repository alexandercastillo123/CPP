#include <iostream>
using namespace std;

int main() {
    int juan, rosa, daniel;

    cout << "Ingrese el monto que da Juan: ";cin >> juan;
    cout << "Ingrese el monto que da Rosa: ";cin >> rosa;
    cout << "Ingrese el monto que da Daniel: ";cin >> daniel;

    double total= juan + rosa + (daniel/3);
    double pct_juan = (juan/total)*100;
    double pct_rosa = (rosa/total)*100;
    double pct_daniel = ((daniel/3)/total)*100;

    cout<<"El capital total es: "<<total<<endl;
    printf("% Juan = %4.2f %\n", pct_juan);
    printf("% Rosa = %4.2f %\n", pct_rosa);
    printf("% Daniel = %4.2f %\n", pct_daniel);

    return 0;
}
