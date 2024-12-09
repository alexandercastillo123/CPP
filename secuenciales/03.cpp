#include <iostream>
using namespace std;

int main() {
    double t1, t2, t3;
    
    cout<<"1er Tramo en kilometros: ";cin>>t1;

    cout<<"2do Tramo en pies: ";cin>>t2;

    cout<<"3er Tramo en millas: ";cin>>t3;

    double t1m = t1 * 1000;
    double t2m = t2 * 1/3.2808;
    double t3m = t3 * 1609;

    double tm = t1m + t2m + t3m;

    double ty = tm * 1.09361;

    cout<<"La longitud total recorrida es:"<<endl;
    cout<<"En metros: " <<tm<<endl;
    cout<<"En yardas: " <<ty<<endl;

    return 0;
}
