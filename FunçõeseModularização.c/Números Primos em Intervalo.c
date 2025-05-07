#include <stdio.h>
#include <cmath>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fim;
    cin >> inicio >> fim;
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}