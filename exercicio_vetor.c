/*Faça um programa que leia 10 números inteiros e informe:

O maior número;
O menor número;
A soma de todos os elementos;
A média dos valores.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10];
    int maior, menor, soma = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    media = (float)soma / 10;

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A soma de todos os elementos é: %d\n", soma);
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}