---
# Segmentation Fault (Falha de Segmentacao)
 
**Sintoma Comum:** O programa e encerrado abruptamente com a mensagem `Segmentation fault (core dumped)`.

---

## O Erro

Acontece quando o programa tenta ler ou escrever em um endereco de memoria ao qual ele nao tem permissao de acesso (ex: tentar desreferenciar um ponteiro `NULL` ou nao inicializado).

```c
#include <stdio.h>

int main() {
    int *ptr = NULL;

    // ERRO: Tentar acessar o valor apontado por NULL causa crash imediato
    *ptr = 42; 

    return 0;
} 

## COMO CORRIGIR ? 

`memoria-e-ponteiros/segmentation-fault.c`