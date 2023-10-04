#include <stdio.h>

int main() {
    char x[100];

    printf("Digite o seu nome: ");
    scanf("%s", x);

    printf("Ola %s.\n", x);

    return 0;
}