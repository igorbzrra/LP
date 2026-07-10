/*preencha uma matriz quadrada de ordem 5, com numeros aleatorios e calcule a soma dos numeros presentes em cada linha. ao final, exiba a matriz e a soma de cada linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    
    int matriz[5][5];
    int soma[5] = {0};
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
            soma[i] += matriz[i][j];

            printf(matriz[i][j] < 10 ? "0%d " : "%d ", matriz[i][j]);
        }

        printf("Soma da linha %d: %d\n", i, soma[i]);

    }

    return 0;
}
