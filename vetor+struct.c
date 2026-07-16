/*Cadastre 10 pessoas.

Cada pessoa possui:

Nome
Idade

Ao final informe:

Pessoa mais velha;
Pessoa mais nova;
Média das idades.*/

#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct Pessoa pessoas[10];
    int somaIdades = 0;
    int indiceMaisVelha = 0, indiceMaisNova = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        somaIdades += pessoas[i].idade;

        if (pessoas[i].idade > pessoas[indiceMaisVelha].idade) {
            indiceMaisVelha = i;
        }
        if (pessoas[i].idade < pessoas[indiceMaisNova].idade) {
            indiceMaisNova = i;
        }
    }

    float mediaIdades = (float)somaIdades / 10;

    printf("\nPessoa mais velha:\n");
    printf("Nome: %s\n", pessoas[indiceMaisVelha].nome);
    printf("Idade: %d\n", pessoas[indiceMaisVelha].idade);

    printf("\nPessoa mais nova:\n");
    printf("Nome: %s\n", pessoas[indiceMaisNova].nome);
    printf("Idade: %d\n", pessoas[indiceMaisNova].idade);

    printf("\nMédia das idades: %.2f\n", mediaIdades);

    return 0;
}