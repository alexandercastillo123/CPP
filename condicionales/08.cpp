#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Cuantos de los 3 examenes aprobo: ";cin >> cantidad;

    if (cantidad == 0) cout<<"Propina: 20";
    else if (cantidad == 1) cout<<"Propina: 25";
    else if (cantidad == 2) cout<<"Propina: 30";
    else if (cantidad == 3) cout<<"Propina: 35";
    else cout<<"Solo se rinden 3 examenes.";
    
    return 0;
}
