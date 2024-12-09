#include <iostream>
using namespace std;

int main() {
    double metros;
    
    cout<<"Metros: "; cin>>metros;

    double centimetros = metros * 100;
    double pulgadas = metros * 100 / 2.54;
    double pies = pulgadas / 12;
    double yardas = pies / 3;

    cout << metros << " metros equivalen a:" << endl;
    cout << centimetros << " centímetros." << endl;
    cout << pulgadas << " pulgadas." << endl;
    cout << pies << " pies." << endl;
    cout << yardas << " yardas." << endl;

    return 0;
}