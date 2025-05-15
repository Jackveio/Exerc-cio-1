#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Elementos comuns:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                int repetido = 0;
                for (int k = 0; k < i; k++) {
                    if (vetor1[k] == vetor1[i]) {
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido) {
                    printf("%d\n", vetor1[i]);
                }
                break;
            }
        }
    }

    return 0;
}