/*Uma escola deseja cadastrar 10 alunos utilizando struct.

Cada aluno possui:

Nome
Nota 1
Nota 2

Calcule a média de cada aluno e informe:

Nome do aluno aprovado (média ≥ 7);
Nome do aluno reprovado;
Quantidade de aprovados;
Quantidade de reprovados;
Maior média;
Menor média;
Média geral da turma.*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[100];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno alunos[10];
    int aprovados = 0, reprovados = 0;
    float maiorMedia = 0, menorMedia = 10, somaMedias = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
        somaMedias += alunos[i].media;

        if (alunos[i].media >= 7) {
            aprovados++;
            printf("Aluno aprovado: %s\n", alunos[i].nome);
        } else {
            reprovados++;
            printf("Aluno reprovado: %s\n", alunos[i].nome);
        }

        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
        }
        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
        }
    }

    float mediaGeral = somaMedias / 10;

    printf("\nQuantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Maior média: %.2f\n", maiorMedia);
    printf("Menor média: %.2f\n", menorMedia);
    printf("Média geral da turma: %.2f\n", mediaGeral);

    return 0;
}