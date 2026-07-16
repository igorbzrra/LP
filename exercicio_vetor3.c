/*Leia um vetor com 8 números.

Depois crie outro vetor contendo os mesmos valores, porém em ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[8];
    int inverso[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 8; i++) {
        inverso[i] = numeros[7 - i];
    }

    printf("Vetor original: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Vetor inverso: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", inverso[i]);
    }
    printf("\n");

    return 0;
}