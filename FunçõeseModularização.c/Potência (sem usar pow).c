#include <stdio.h>

using namespace std;

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;
    cout << "Digite a base e o expoente: ";
    cin >> base >> expoente;
    cout << "Resultado: " << potencia(base, expoente) << endl;
    return 0;
}