'''CÓDIGO CORRIGIDO'''

'''Reserve espaço suficiente para o texto + o caractere \0, ou inicialize com aspas duplas (que inserem o \0 automaticamente)'''

#include <stdio.h>

int main() {
    // CORRETO: As aspas duplas adicionam o '\0' automaticamente
    char nome[] = "Ana"; 

    // Ou explicitando o tamanho (3 letras + 1 para o \0):
    // char nome[4] = {'A', 'n', 'a', '\0'};

    printf("Nome: %s\n", nome);
    return 0;
}