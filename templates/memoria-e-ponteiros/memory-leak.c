
'''CÓDIGO CORRIGIDO'''

'''Sempre libere o bloco de memória con free() antes que o ponteiro saia de escopo.'''

#include <stdlib.h>

void criarVetor() {
    int *vetor = malloc(100 * sizeof(int));
    
    // ... uso do vetor ...

    free(vetor); // CORRETO: Memoria devolvida ao sistema
}

int main() {
    for (int i = 0; i < 10000; i++) {
        criarVetor();
    }
    return 0;
}