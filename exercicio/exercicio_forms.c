/*Uma empresa deseja desenvolver um sistema simples para gerenciar o salário de seus
funcionários. Crie um programa que permita cadastrar um funcionário utilizando a estrutura
abaixo:
Funcionario
{
char nome[50];
float salario;
}
O programa deverá apresentar um menu com as seguintes opções:
1-Cadastrar funcionário
2-Exibir dados do funcionário
3-Aplicar aumento por valor
4-Aplicar aumento por referência
5-Sair
Funcionalidades
1. Cadastrar Funcionário
Permite informar:
Nome do funcionário;
Salário atual.

2. Exibir Dados
Exibe:
Nome do funcionário;
Salário atual.
3. Aplicar Aumento por Valor
Crie uma função que receba o salário e o percentual de aumento utilizando
passagem por valor.
Exemplo:
void aumentarPorValor(float salario, float percentual);
A função deve calcular o novo salário e exibi-lo na tela.
Observação: Ao retornar da função, o salário armazenado no cadastro do
funcionário não deve ser alterado.
4. Aplicar Aumento por Referência
Crie uma função que receba o endereço do salário utilizando passagem por
referência.
Exemplo:
void aumentarPorReferencia(float *salario, float percentual);
A função deve alterar efetivamente o salário armazenado no cadastro.

Requisitos
• Utilizar uma estrutura (struct) para armazenar os dados do funcionário;
• Criar uma função para cada opção do menu;
• O menu deve permanecer em execução até que o usuário escolha a opção Sair;
• Após cada operação, exibir os dados atualizados do funcionário.
Perguntas para Discussão:
1. Qual foi a diferença observada entre as opções 3 e 4?
2. Por que o salário não foi alterado na função que utilizou passagem por valor?
3. O que representa o operador * utilizado na passagem por referência?
4. Em quais situações a passagem por referência é mais vantajosa?
5. Quais cuidados devem ser tomados ao manipular ponteiros?*/
#include <stdio.h>
#include <string.h>

struct Funcionario
{
    char nome[50];
    float salario;
};

// Função para cadastrar funcionário
void cadastrarFuncionario(struct Funcionario *f)
{
    printf("\nNome do funcionario: ");
    scanf(" %[^\n]", f->nome);

    printf("Salario atual: R$ ");
    scanf("%f", &f->salario);
}

// Função para exibir dados
void exibirDados(struct Funcionario f)
{
    printf("\n===== DADOS DO FUNCIONARIO =====\n");
    printf("Nome: %s\n", f.nome);
    printf("Salario: R$ %.2f\n", f.salario);
}

// Passagem por valor
void aumentarPorValor(float salario, float percentual)
{
    float novoSalario;

    novoSalario = salario + (salario * percentual / 100);

    printf("\nNovo salario (por valor): R$ %.2f\n", novoSalario);
    printf("O salario cadastrado nao foi alterado.\n");
}

// Passagem por referência
void aumentarPorReferencia(float *salario, float percentual)
{
    *salario = *salario + (*salario * percentual / 100);

    printf("\nAumento aplicado com sucesso!\n");
}

int main()
{
    struct Funcionario funcionario;
    int opcao;
    float percentual;
    int cadastrado = 0;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1 - Cadastrar funcionario\n");
        printf("2 - Exibir dados do funcionario\n");
        printf("3 - Aplicar aumento por valor\n");
        printf("4 - Aplicar aumento por referencia\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarFuncionario(&funcionario);
            cadastrado = 1;
            exibirDados(funcionario);
            break;

        case 2:
            if (cadastrado)
                exibirDados(funcionario);
            else
                printf("\nNenhum funcionario cadastrado.\n");
            break;

        case 3:
            if (cadastrado)
            {
                printf("\nInforme o percentual de aumento: ");
                scanf("%f", &percentual);

                aumentarPorValor(funcionario.salario, percentual);

                printf("\nSalario armazenado: R$ %.2f\n",
                       funcionario.salario);
            }
            else
            {
                printf("\nNenhum funcionario cadastrado.\n");
            }
            break;

        case 4:
            if (cadastrado)
            {
                printf("\nInforme o percentual de aumento: ");
                scanf("%f", &percentual);

                aumentarPorReferencia(&funcionario.salario,
                                      percentual);

                exibirDados(funcionario);
            }
            else
            {
                printf("\nNenhum funcionario cadastrado.\n");
            }
            break;

        case 5:
            printf("\nPrograma encerrado.\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}