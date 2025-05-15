#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, contagem;

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        int repetido = 0;

        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            contagem = 1;

            for (j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    contagem++;
                }
            }

            printf("%d aparece %d vezes\n", numeros[i], contagem);
        }
    }

    return 0;
}