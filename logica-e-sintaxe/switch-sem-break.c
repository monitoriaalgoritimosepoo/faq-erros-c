'''CÓDIGO CORRIGIDO'''

'''Adicione o comando break ao final de cada case para interromper a execução do switch.'''

#include <stdio.h>

int main() {
    int opcao = 1;

    switch (opcao) {
        case 1:
            printf("Opcao 1 selecionada\n");
            break; // CORRETO: Interrompe o switch
        case 2:
            printf("Opcao 2 selecionada\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}