#include <iostream>
#include <random>
#include "letras.h"

using namespace std;

int main() {
    int longitud = 200;
    char arreglo[longitud];
    int contador[26] = {0};

    generarArreglo(arreglo, longitud);
    imprimirArreglo(arreglo, longitud);
    contarRepeticiones(arreglo, longitud, contador);

    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            cout << (char)(i + 65) << ": " << contador[i] << endl;
        }
    }

    return 0;
}
