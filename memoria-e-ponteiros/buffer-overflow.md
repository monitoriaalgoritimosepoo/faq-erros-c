
# Buffer Overflow (Estouro de Buffer)

**Sintoma Comum:** Comportamento imprevisivel, valores de variaveis vizinhas sendo alterados "sozinhos" ou crash do programa.

---

## O Erro

Acontece ao tentar escrever dados alem da capacidade limite alocada para um array ou buffer.

```c
#include <stdio.h>

int main() {
    int numeros[3] = {10, 20, 30}; // Indices validos: 0, 1 e 2

    // ERRO: O indice 3 e a quarta posicao (invalida!)
    numeros[3] = 99; 

    return 0;
}
```

## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./buffer-overflow.c)