/*Cadastre 5 alunos utilizando uma struct.

Depois informe:

O aluno com a maior nota;
O aluno com a menor nota;
A média das notas.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];
    float somaNotas = 0;
    int indiceMaiorNota = 0, indiceMenorNota = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);

        somaNotas += alunos[i].nota;

        if (alunos[i].nota > alunos[indiceMaiorNota].nota) {
            indiceMaiorNota = i;
        }
        if (alunos[i].nota < alunos[indiceMenorNota].nota) {
            indiceMenorNota = i;
        }
    }

    float mediaNotas = somaNotas / 5;

    printf("\nAluno com a maior nota:\n");
    printf("Nome: %s\n", alunos[indiceMaiorNota].nome);
    printf("Idade: %d\n", alunos[indiceMaiorNota].idade);
    printf("Nota: %.2f\n", alunos[indiceMaiorNota].nota);

    printf("\nAluno com a menor nota:\n");
    printf("Nome: %s\n", alunos[indiceMenorNota].nome);
    printf("Idade: %d\n", alunos[indiceMenorNota].idade);
    printf("Nota: %.2f\n", alunos[indiceMenorNota].nota);

    printf("\nMédia das notas: %.2f\n", mediaNotas);

    return 0;
}   