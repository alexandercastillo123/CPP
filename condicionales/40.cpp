#include <iostream>
using namespace std;

int main() {
    double pc1, pc2, pc3, ep, ef;
    double promedioMatematica, promedioFisica, promedioQuimica;
    
    cout << "Ingrese la nota de PC1 de Matemática: ";cin >> pc1;
    cout << "Ingrese la nota de PC2 de Matemática: ";cin >> pc2;
    cout << "Ingrese la nota de PC3 de Matemática: ";cin >> pc3;
    cout << "Ingrese la nota del examen parcial de Matemática: ";cin >> ep;
    cout << "Ingrese la nota del examen final de Matemática: ";cin >> ef;

    promedioMatematica = (pc1 * 0.10) + (pc2 * 0.20) + (pc3 * 0.10) + (ep * 0.30) + (ef * 0.30);

    cout << "Ingrese la nota de PC1 de Física: ";cin >> pc1;
    cout << "Ingrese la nota de PC2 de Física: ";cin >> pc2;
    cout << "Ingrese la nota de PC3 de Física: ";cin >> pc3;
    cout << "Ingrese la nota del examen parcial de Física: ";cin >> ep;
    cout << "Ingrese la nota del examen final de Física: ";cin >> ef;

    promedioFisica = (pc1 * 0.20) + (pc2 * 0.20) + (pc3 * 0.20) + (ep * 0.20) + (ef * 0.20);

    cout << "Ingrese la nota de PC1 de Química: ";cin >> pc1;
    cout << "Ingrese la nota de PC2 de Química: ";cin >> pc2;
    cout << "Ingrese la nota de PC3 de Química: ";cin >> pc3;
    cout << "Ingrese la nota del examen parcial de Química: ";cin >> ep;
    cout << "Ingrese la nota del examen final de Química: ";cin >> ef;

    promedioQuimica = (pc1 * 0.10) + (pc2 * 0.30) + (pc3 * 0.10) + (ep * 0.25) + (ef * 0.25);

    cout << "Promedio final de Matemática: " << promedioMatematica << endl;
    cout << "Promedio final de Física: " << promedioFisica << endl;
    cout << "Promedio final de Química: " << promedioQuimica << endl;

    if (promedioMatematica >= 13) cout << "Aprobado en Matemática." << endl;
    else cout << "Desaprobado en Matemática." << endl;

    if (promedioFisica >= 13) cout << "Aprobado en Física." << endl;
    else cout << "Desaprobado en Física." << endl;

    if (promedioQuimica >= 13) cout << "Aprobado en Química." << endl;
    else cout << "Desaprobado en Química." << endl;

    return 0;
}