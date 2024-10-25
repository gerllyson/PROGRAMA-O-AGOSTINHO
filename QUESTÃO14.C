#include <stdio.h>

// Função `f` que realiza operações em variáveis e ponteiros
int f(int a, int *pb, int **ppc) {
    int b, c;            // Declara variáveis locais `b` e `c` para uso na função

    **ppc += 1;          // Incrementa o valor apontado por `**ppc` (ou seja, `c`) em 1
    // Como `ppc` aponta para `b`, e `b` aponta para `c`, `**ppc` acessa o valor de `c`.
    // Originalmente, `c` era 5, então `c = 5 + 1 = 6` após essa operação.

    c = **ppc;           // Atribui o valor de `c` (que agora é 6) à variável local `c`

    *pb += 2;            // Incrementa o valor apontado por `pb` (ou seja, `c`) em 2
    // `pb` aponta para `c`, então `*pb` refere-se a `c`.
    // Após essa linha, `c` passa de 6 para 8.

    b = *pb;             // Atribui o valor de `c` (que agora é 8) à variável local `b`

    a += 3;              // Incrementa o valor de `a` em 3
    // `a` foi passado como 5, então `a = 5 + 3 = 8`

    return a + b + c;    // Retorna a soma de `a`, `b` e `c`
    // `a = 8`, `b = 8`, e `c = 6`. A soma é 8 + 8 + 6 = 22
}

void main() {
    int c, *b, **a;       // Declara `c` como inteiro, `b` como ponteiro para int e `a` como ponteiro para ponteiro de int

    c = 5;                // Inicializa `c` com 5
    b = &c;               // Faz `b` apontar para `c` (ou seja, `b` contém o endereço de `c`)
    a = &b;               // Faz `a` apontar para `b` (ou seja, `a` contém o endereço de `b`)

    // Chama a função `f` com:
    // - valor de `c` (5) passado para `a`
    // - `b`, que é um ponteiro para `c`, passado para `pb`
    // - `a`, que é um ponteiro para `b`, passado para `ppc`
    printf("%d\n", f(c, b, a));  // Imprime o valor retornado por `f`, que será 22

    getchar();  // Aguarda uma entrada do usuário para finalizar o programa
}
