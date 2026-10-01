# FAQ de Erros Comuns em C

Um guia prático, direto ao ponto e orientado a exemplos para ajudar estudantes e desenvolvedores a entenderem, depurarem e corrigirem os erros mais frequentes na linguagem C.

---

##  Índice de Erros

###  Memória e Ponteiros
* [**Segmentation Fault (Falha de Segmentação)**](memoria-e-ponteiros/segmentation-fault.md) — Acesso a memória não autorizada ou ponteiros `NULL`.
* [**Memory Leak (Vazamento de Memória)**](memoria-e-ponteiros/memory-leak.md) — Alocação dinâmica com `malloc` sem o respectivo `free`.
* [**Buffer Overflow**](memoria-e-ponteiros/buffer-overflow.md) — Acesso a índices fora dos limites de um array.

* ### Strings e Input/Output (I/O)
* [**`scanf()` ignorando leitura de `char`**](strings-e-io/scanf-buffer-lixo.md) — Sujeira do caractere `\n` no buffer de entrada.
* [**Strings sem terminador nulo (`\0`)**](strings-e-io/string-sem-null.md) — Lixo de memória impresso ao usar `%s`.
* [**Uso inseguro de `gets()` vs `fgets()`**](strings-e-io/gets-vs-fgets.md) — Como evitar estouro de buffer em leituras de texto.

###  Lógica e Sintaxe
* [**Atribuição (`=`) em vez de Comparação (`==`) no `if`**](logica-e-sintaxe/atribuicao-no-if.md) — Erro silencioso que torna condições sempre verdadeiras.
* [**Divisão Inteira Truncada (`5 / 2 = 2`)**](logica-e-sintaxe/divisao-inteira.md) — Perda de casas decimais em operações numéricas.
* [**Esquecer o `break` no `switch`**](logica-e-sintaxe/switch-sem-break.md) — Execução em cascata (*fall-through*) indesejada.

---

##  Estrutura de Cada Exemplo de Erro:

Cada exemplo de erro segue a estrutura abaixo:

### ARQUIVO.MD

1. **Sintoma comum:** Como o erro se manifesta.
2. **O Erro (Exemplo Incorreto):** Descrição e snippet mínimo de código demonstrando a falha.
3. **Caminho para o arquivo C com a solução**

### ARQUIVO .C
1. **A Solução (Exemplo Corrigido):** Snippet com a correção e explicação do porquê funciona.
2. **Dicas & Prevenção:** Dicas para não cometer o mesmo erro no futuro.

---
##  Mande suas sugestões de erro no e-mail abaixo :
monitoriaalgoritmosepoo@gmail.com
