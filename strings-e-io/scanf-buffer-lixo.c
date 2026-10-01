#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F): ");
    // CORRETO: O espaco antes de %c consome os '\n' no buffer
    scanf(" %c", &sexo); 

    return 0;