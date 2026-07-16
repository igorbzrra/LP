/*Crie uma struct chamada Aluno, contendo:

Nome
Idade
Nota

Cadastre 5 alunos.

Depois exiba todas as informações cadastradas.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);
    }

    printf("\nInformações dos alunos cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("\n");
    }

    return 0;
}