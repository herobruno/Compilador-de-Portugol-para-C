#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 3
#define _SIZE 15
#define MAX_SIZE 10

int main() {
    float numeroA;
    float numeroB;
    char operacao;
    float xombi; // Declare a variável xombi

    printf("Numero A: ");
    scanf("%f", &numeroA);

    printf("Numero B: ");
    scanf("%f", &numeroB);

    printf("Operacao: ");
    scanf(" %c", &operacao); // Use " %c" para evitar problemas com o caractere de nova linha

    printf("42\n");

    if (xombi > 1) {
        // Faça algo se xombi for maior que 1
    } else if (xombi >= 2) {
        // Faça algo se xombi for maior ou igual a 2
    } else if (xombi > 3) {
        // Faça algo se xombi for maior que 3
    } else if (xombi >= 4) {
        // Faça algo se xombi for maior ou igual a 4
    }

    if (xombi < 1) {
        // Faça algo se xombi for menor que 1
    } else if (xombi <= 2) {
        // Faça algo se xombi for menor ou igual a 2
    } else if (xombi < 3) {
        // Faça algo se xombi for menor que 3
    } else if (xombi <= 4) {
        // Faça algo se xombi for menor ou igual a 4
    }

    if (xombi > 2) {
        // Faça algo se xombi for maior que 2
    } else {
        xombi = 0; // Atribua um valor a xombi se não for maior que 2
    }

    if (xombi == 1) {
        // Faça algo se xombi for igual a 1
    } else if (xombi == 2) {
        // Faça algo se xombi for igual a 2
    }

    for (xombi = 0; xombi <= 10; xombi++) {
        // Faça algo no loop for
    }

    while (xombi != 0) {
        // Faça algo no loop while
    }

    return 0;
}