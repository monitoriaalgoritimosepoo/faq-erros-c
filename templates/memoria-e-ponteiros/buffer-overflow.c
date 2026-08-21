
'''CÓDIGO CORRIGIDO'''

'''Respeite sempre o limite de tamanho do array. Lembre-se que em C um vetor de tamanho N vai de 0 ate N-1'''

#include <stdio.h>

int main() {
    int numeros[3] = {10, 20, 30};

    // CORRETO: Modificando apenas dentro dos limites
    numeros[2] = 99; 

    return 0;
}

'''DICA DE PREVENCAO'''
'''Ao iterar arrays com loops for, garanta que a condicao use estritamente < e nao <=: for (int i = 0; i < TAMANHO; i++)'''