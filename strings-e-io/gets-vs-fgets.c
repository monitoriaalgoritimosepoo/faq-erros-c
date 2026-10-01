'''COMO CORRIGIR'''

'''Substitua gets() por fgets(), especificando o tamanho máximo e a fonte de entrada (stdin). '''

#include <stdio.h>
#include <string.h>

int main() {
    char nome[10];

    printf("Digite seu nome completo: ");
    // CORRETO: Nao permite ler mais do que o tamanho do buffer
    fgets(nome, sizeof(nome), stdin); 

    // Opcional: Remove o '\n' que o fgets captura ao pressionar ENTER
    nome[strcspn(nome, "\n")] = '\0';

    printf("Ola, %s!\n", nome);
    return 0;
}