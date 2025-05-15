#include <stdio.h> 

int inverterNumero(int n) {
    int invertido = 0;
    while (n != 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return invertido;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = inverterNumero(numero);
    printf("Número invertido: %d\n", resultado);

    return 0;
}