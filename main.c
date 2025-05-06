// ========================================
// Checkpoint 2
//Nome: Gabriel De Biasi Couto - 563247
// Nome: João Pedro da Silva Costa - RM: 565031
// Nome: Pedro Noronha dos Santos - RM: 564572
// Nome: Rodrigo Campos Cordeiro - RM: 566386
// ========================================
#include <stdio.h>
#include <string.h>

//Função 1: Rodrigo
void fibonacci() {
    int n;
    int i;
    int fib[50];

    printf("Digite a quantidade de termos (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Valor invalido.\n");
        return;
    }

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequencia de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}
