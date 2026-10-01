# Uso Inseguro de `gets()` vs `fgets()`
 
**Sintoma Comum:** Alertas no compilador do tipo `warning: this program uses xxxxx gets(), which is unsafe.` ou travamento ao digitar frases longas.


## O Erro

A função `gets()` não recebe o limite do tamanho do buffer onde o texto será salvo. Se o usuário digitar mais caracteres do que o array suporta, ocorrerá um **Buffer Overflow**.

```c
#include <stdio.h>

int main() {
    char nome[10];

    printf("Digite seu nome completo: ");
    // PERIGO: Se digitar mais de 9 caracteres, estoura a memoria!
    gets(nome); 

    return 0;
}
```
## COMO CORRIGIR ? 

* [**ARQUIVO EM C**](./gets-vs-fgets.c)