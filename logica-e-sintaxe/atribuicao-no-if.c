'''CÓDIGO CORRIGIDO'''

'''Utilize o operador de igualdade == para comparações.'''



#include <stdio.h>

int main() {
    int ativo = 0;

    // CORRETO: Compara se 'ativo' e igual a 1
    if (ativo == 1) { 
        printf("Usuario esta ativo!\n");
    }

    return 0;
}

'''Dica de prevenção (Yoda Conditions) !'''
'''if (1 == ativo) { ... } // Se você esquecer um '=', o compilador dará ERRO por tentar atribuir a uma constante!'''