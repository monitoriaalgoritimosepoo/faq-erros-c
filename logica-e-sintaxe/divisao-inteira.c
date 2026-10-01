'''CÓDIGO CORRIGIDO'''

'''Faça o cast (conversão explícita) de pelo menos um dos operandos para float ou double'''


#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    // CORRETO: Forca 'a' a ser interpretado como float na operacao
    float resultado = (float)a / b; 

    printf("Resultado: %.1f\n", resultado); // Imprime: 2.5
    return 0;
}