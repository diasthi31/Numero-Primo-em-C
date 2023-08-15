#include <stdio.h>

int main() {
    int vetor[9], i, j, contador;

    for(i = 0; i < 9; i++) {
        printf("Insira um número inteiro: ");
        scanf("%i", &vetor[i]);
    }

    for(i = 0; i < 9; i++) {
        contador = 0;
        for(j = 1; j <= vetor[i]; j++) {
            if(vetor[i] % j == 0) {
                contador++;
            }
        }
        if(contador == 2) {
           printf("%i é primo, posição: %i.\n", vetor[i], i);
        }
    }   

    return 0;
}