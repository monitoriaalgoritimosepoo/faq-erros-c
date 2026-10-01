# Strings sem Terminador Nulo (`\0`)
 
**Sintoma Comum:** Ao imprimir uma string com `%s`, aparecem caracteres estranhos ("lixo de memória") no final do texto.

##  O Erro

Em C, uma string é simplesmente um array de caracteres encerrado obrigatoriamente com o caractere `'\0'` (nulo). Se o `'\0'` não for incluído, funções como `printf` e `strlen` continuam lendo a memória indefinidamente até encontrar um zero por acaso.

```c
#include <stdio.h>

int main() {
    // ERRO: Array de tamanho 3 sem espaco para o '\0'
    char nome[3] = {'A', 'n', 'a'}; 

    // O printf vai imprimir "Ana" + lixo da memoria
    printf("Nome: %s\n", nome); 

    return 0;
}
```

## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./string-sem-null.c)