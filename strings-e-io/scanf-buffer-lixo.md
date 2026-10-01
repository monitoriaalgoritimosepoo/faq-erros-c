# `scanf()` Ignorando Leitura de `char`

**Sintoma Comum:** O programa "pula" o `scanf` de um `char` sem esperar a digitação do usuário.

---

##  O Erro

Ao pressionar `ENTER` no teclado em leituras anteriores, o caractere de nova linha (`\n`) fica preso no buffer de entrada (`stdin`). O `%c` lê esse `\n` imediatamente como se fosse o caractere digitado.

```c
#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F): ");
    // ERRO: O %c vai capturar o '\n' da tecla ENTER anterior!
    scanf("%c", &sexo); 

    return 0;
}
```


## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./scanf-buffer-lixo.c)
