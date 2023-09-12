#include "letras.h"
#include <iostream>
#include <random>
using namespace std;

void generarArreglo(char arreglo[], int longitud) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(65, 90);

    for (int i = 0; i < longitud; i++) {
        arreglo[i] = dis(gen);
    }
}

void imprimirArreglo(char arreglo[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        cout << arreglo[i];
    }
    cout << endl;
}

void contarRepeticiones(char arreglo[], int longitud, int contador[]) {
    for (int i = 0; i < longitud; i++) {
        contador[arreglo[i] - 65]++;
    }
}
