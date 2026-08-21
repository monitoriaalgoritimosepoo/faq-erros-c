
'''CÓDIGO CORRIGIDO'''

'''Garanta que o ponteiro tenha alocacao de memoria antes do acesso e faca verificacoes de seguranca.'''

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));

    // Sempre verifique se a alocacao funcionou
    if (ptr == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    *ptr = 42; // Correto!
    printf("Valor: %d\n", *ptr);

    free(ptr); // Libera a memoria alocada
    return 0;
}

'''DICA EXTRA : Ative flags do compilador para alertar sobre ponteiros não inicializados'''
''' gcc -Wall -Wextra main.c '''