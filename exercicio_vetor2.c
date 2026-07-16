/*Leia um vetor com 15 números inteiros.

Ao final informe:

Quantos números são pares;
Quantos números são ímpares;
Quantos são positivos;
Quantos são negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[15];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);

    return 0;
}