/*Um ponteiro para uma função é uma construção em C que permite armazenar o endereço de uma função em uma variável, tornando possível chamar essa função de forma indireta. 





#include <stdio.h>

// Definimos uma função chamada 'soma' que recebe dois inteiros e retorna a soma deles
int soma(int a, int b) {
    return a + b;
}

// Definimos uma função chamada 'multiplica' que recebe dois inteiros e retorna o produto deles
int multiplica(int a, int b) {
    return a * b;
}

int main() {
    // Declaramos um ponteiro para função que recebe dois inteiros e retorna um inteiro.
    // Esse ponteiro será usado para armazenar o endereço de diferentes funções
    int (*operacao)(int, int);

    // Atribuímos o endereço da função 'soma' ao ponteiro 'operacao'
    operacao = soma;
    // Chamamos a função 'soma' indiretamente através do ponteiro 'operacao'
    printf("Resultado da soma: %d\n", operacao(3, 4)); // Saída esperada: 7

    // Agora, atribuímos o endereço da função 'multiplica' ao ponteiro 'operacao'
    operacao = multiplica;
    // Chamamos a função 'multiplica' indiretamente através do ponteiro 'operacao'
    printf("Resultado da multiplicação: %d\n", operacao(3, 4)); // Saída esperada: 12

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
