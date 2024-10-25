#include <stdio.h>

void main() {
    // ERRO NO CÓDIGO ORIGINAL:
    // O código original tenta declarar um ponteiro constante "int const *x = 3;"
    // Isso é problemático porque:
    // 1. "3" é um valor literal e não um endereço de memória válido, então "x" não pode apontar para ele.
    // 2. Como "x" é um ponteiro para um "const int", qualquer tentativa de modificar o valor apontado por "x" resultaria em erro,
    //    pois o valor apontado é constante (não pode ser alterado).
    // Para corrigir esses erros, declaramos uma variável inteira "y" com valor inicial "3" e fazemos o ponteiro "x" apontar para "y".
    
    int y = 3;         // Declara uma variável inteira "y" com valor 3.
    int *x = &y;       // Declara um ponteiro "x" que aponta para o endereço de "y".
    // Com isso, "x" agora aponta para um endereço de memória válido (o de "y") e podemos modificar o valor de "y" através de "x".
    
    // CÓDIGO CORRIGIDO:
    // Aqui, incrementamos o valor apontado por "x" (ou seja, o valor de "y") usando "++(*x)".
    // Esse incremento é permitido porque "x" aponta para um "int" não constante (a variável "y"), então o valor pode ser alterado.
    printf("%d", ++(*x)); // Incrementa o valor de "y" para 4 e imprime o resultado.
    
    // SAÍDA ESPERADA:
    // A saída será "4" porque incrementamos o valor de "y" de 3 para 4 antes de imprimi-lo.
}
