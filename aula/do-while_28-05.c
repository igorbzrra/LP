#include <stdio.h>

int main(){
    int n, soma = 0;
    do{
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &n);
        soma = soma + n;
        
    } while(n != 0);
    printf("Soma: %d\n", soma);
}