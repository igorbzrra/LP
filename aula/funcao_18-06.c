#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Pessoa {
    char nome[50];
    int idade;
} pessoa;

void menu(){
    printf("===== MENU =====\n");
    printf("1 - Cadastrar Pessoa\n");
    printf("2 - Exibir Nome\n");
    printf("3 - Exibir Idade\n");
    printf("4 - Exibir Nome e Idade\n");
    printf("5 - Exibir Ano de Nascimento\n");
    printf("6 - Sair\n");
    printf("Escolha uma opção: ");
}
void opcao1(){
    printf("Digite o nome da pessoa: ");
    scanf("%s", &pessoa.nome);
    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
}
void opcao2(){
    printf("Nome: %s\n", pessoa.nome);
}
void opcao3(){
    printf("Idade: %d\n", pessoa.idade);
}
void opcao4(){
    printf("Nome: %s, Idade: %d\n", pessoa.nome, pessoa.idade);
}
void opcao5(){
    int anoNascimento = 2026 - pessoa.idade;
    printf("Ano de Nascimento: %d\n", anoNascimento);
}
void opcao6(){
    printf("Saindo do programa...\n");
}
void opcaoInvalida(){
    printf("Opção inválida. Tente novamente.\n");

}

void main(){


    int opcao;

    do
    {
        menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            opcao1();
            break;
        case 2:
            opcao2();
            break;
        case 3:
            opcao3();
            break;
        case 4:
            opcao4();
            break;
        case 5:
            opcao5();
            break;
        case 6:
            opcao6();
            break;
        default:
            opcaoInvalida();
            break;
        }
    } while (opcao !=6);

}


