/*Crie uma struct Funcionário contendo:

Nome
Salário

Cadastre 6 funcionários.

Mostre apenas os funcionários que possuem salário maior que R$ 3.000,00.*/

#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    char nome[100];
    float salario;
};

int main() {
    struct Funcionario funcionarios[6];
    int contador = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite o nome do funcionário %d: ", i + 1);
        scanf("%s", funcionarios[i].nome);
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &funcionarios[i].salario);

        if (funcionarios[i].salario > 3000.00) {
            contador++;
        }
    }

    printf("\nFuncionários com salário maior que R$ 3.000,00:\n");
    for (int i = 0; i < 6; i++) {
        if (funcionarios[i].salario > 3000.00) {
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Salário: R$ %.2f\n", funcionarios[i].salario);
            printf("\n");
        }
    }

    return 0;
}