
# Memory Leak (Vazamento de Memoria)

**Sintoma Comum:** Consumo de RAM do programa aumenta continuamente com o tempo ate o sistema travar.

---

##  O Erro

Acontece quando voce reserva memoria dinamicamente (`malloc`, `calloc`, `realloc`) e perde a referencia desse bloco sem libera-lo com `free`.

```c
#include <stdlib.h>

void criarVetor() {
    int *vetor = malloc(100 * sizeof(int));
    // ERRO: A funcao encerra e a variavel 'vetor' e destruida,
    // mas os 100 inteiros continuam ocupando espaco na Heap.
}

int main() {
    for (int i = 0; i < 10000; i++) {
        criarVetor();
    }
    return 0;
}
```

## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./memory-leak.c)