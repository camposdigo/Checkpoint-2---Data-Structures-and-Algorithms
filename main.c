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

//Função 2: João
void fatoriais() {
    int n;
    int i, j;
    unsigned long long resultado;

    printf("Digite um numero de 1 a 20: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Valor invalido.\n");
        return;
    }

    for (i = 1; i <= n; i++) {
        resultado = 1;
        for (j = 1; j <= i; j++) {
            resultado *= j;
        }
        printf("%d! = %llu\n", i, resultado);
    }
}

//Função 3: Gabriel
void palindromo() {
    char palavra[101];
    int tamanho, i;
    int ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("É um palindromo.\n");
    } else {
        printf("Não é um palindromo.\n");
    }
}

//Função 4: Pedro
void substring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2)) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}
