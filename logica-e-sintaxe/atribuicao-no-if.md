# Atribuição (`=`) em vez de Comparação (`==`) no `if`

**Sintoma Comum:** O bloco dentro do `if` roda sempre, independentemente da condição.


## O Erro

O operador `=` atribui um valor à variável e retorna esse valor. Como qualquer valor diferente de zero em C é avaliado como **verdadeiro**, `if (x = 5)` atribui `5` a `x` e avalia como verdadeiro.

```c
#include <stdio.h>

int main() {
    int ativo = 0;

    // ERRO: Atribui 1 a 'ativo'. A condicao se torna verdadeira.
    if (ativo = 1) { 
        printf("Usuario esta ativo!\n");
    }

    return 0;
}
```
## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./atribuicao-no-if.c)