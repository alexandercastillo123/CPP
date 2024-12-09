#include <iostream>
using namespace std;

int main() {
    double GB, MB, KB, Bytes;

    cout << "GB: ";cin >> GB;

    MB = GB * 1024;
    KB = MB * 1024;
    Bytes = KB * 1024;

    cout<<GB<<" GB equivalen a:\n";
    cout<<MB<<" MB\n";
    cout<<KB<<" KB\n";
    cout<<Bytes<<" Bytes\n";

    return 0;
}
