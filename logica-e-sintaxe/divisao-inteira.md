# Divisão Inteira Truncada (`5 / 2 = 2`)

**Sintoma Comum:** O resultado da divisão perde as casas decimais (ex: `5 / 2` resulta em `2` em vez de `2.5`).

##  O Erro

Quando os dois operandos de uma divisão são do tipo `int`, a linguagem C realiza uma **divisão inteira**, descartando completamente a parte fracionária sem arredondamento.

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    // ERRO: Divisao entre dois inteiros resulta no inteiro 2
    float resultado = a / b; 

    printf("Resultado: %f\n", resultado); // Imprime: 2.000000
    return 0;
}
```
## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./divisao-inteira.c)