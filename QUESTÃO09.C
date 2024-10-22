#include <stdio.h>

int main() {
    int mat[4] = {10, 20, 30, 40};  // Vetor de inteiros com 4 elementos
    int *p;  // Ponteiro para inteiro
    int x;   // Variável inteira

    // Expressão 1: p = mat + 1;
    p = mat + 1;  // Válida: p aponta para o segundo elemento de mat
    printf("Expressão 1 (p = mat + 1):\n");
    printf("p aponta para o valor: %d (deve ser o segundo elemento, mat[1] = 20)\n\n", *p);

    // Expressão 2: p = mat++; (Comentada pois causaria erro de compilação)
    // p = mat++;  // Inválida: mat é um array e não pode ser incrementado

    // Expressão 3: p = ++mat; (Comentada pois causaria erro de compilação)
    // p = ++mat;  // Inválida: mat é um array e não pode ser incrementado

    // Expressão 4: x = (*mat);
    x = (*mat);  // Válida: x recebe o valor do primeiro elemento de mat
    printf("Expressão 4 (x = (*mat)):\n");
    printf("x recebeu o valor: %d (deve ser o primeiro elemento, mat[0] = 10)\n");

    return 0;
}
