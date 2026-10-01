# Esquecer o `break` no `switch` (Fall-through)
 
**Sintoma Comum:** Múltiplos blocos `case` são executados em sequência, mesmo que só uma opção devesse rodar.

---

##  O Erro

A estrutura `switch` em C executa todos os comandos sequencialmente a partir do primeiro `case` correspondente até encontrar uma instrução `break` ou o fim do bloco.

```c
#include <stdio.h>

int main() {
    int opcao = 1;

    switch (opcao) {
        case 1:
            printf("Opcao 1 selecionada\n");
            // ERRO: Sem o break, ele "cai" no case 2
        case 2:
            printf("Opcao 2 selecionada\n");
            break;
    }

    return 0;
}
```

## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./switch-sem-break.c)