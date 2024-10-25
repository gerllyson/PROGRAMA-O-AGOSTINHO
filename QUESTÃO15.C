#include <stdio.h>

int main() {
    // Declaração e inicialização de uma matriz bidimensional `x[4][3]` com inteiros.
    unsigned int x[4][3] = {
        {1, 2, 3},      // x[0]
        {4, 5, 6},      // x[1]
        {7, 8, 9},      // x[2]
        {10, 11, 12}    // x[3]
    };

    // Explicação de cada expressão no printf:
    // 1. `x + 3`:
    //    `x` é o endereço da primeira linha da matriz (ou seja, `x[0]`).
    //    Somar `3` a `x` faz com que ele aponte para a quarta linha `x[3]`.
    //    Como `x` é do tipo `unsigned int[3]`, ele avança 3 posições de `unsigned int[3]`,
    //    ou seja, `(x + 3)` aponta para o sub-array `x[3]`, que contém `{10, 11, 12}`.
    //
    // 2. `*(x + 3)`:
    //    `x + 3` aponta para o endereço do sub-array `x[3]`, e ao desreferenciá-lo com `*`,
    //    obtemos o primeiro elemento do sub-array `x[3]`, que é `10`.
    //
    // 3. `*(x + 2) + 3`:
    //    `x + 2` aponta para o sub-array `x[2]`, que é `{7, 8, 9}`.
    //    Desreferenciando com `*(x + 2)`, obtemos o primeiro elemento desse sub-array, que é `7`.
    //    Ao somar `3` a esse valor (`7 + 3`), obtemos `10`.

    printf("%u, %u, %u", x + 3, *(x + 3), *(x + 2) + 3);
    // A saída será:
    // - `x + 3`: endereço do sub-array `x[3]` (a localização de `{10, 11, 12}` na memória).
    // - `*(x + 3)`: valor `10`, o primeiro elemento de `x[3]`.
    // - `*(x + 2) + 3`: valor `10`, o resultado de `7 + 3`.

    return 0;
}
