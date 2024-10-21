#include <stdio.h>

int main() {
    int i = 5, j = 10;  // Declaração de duas variáveis inteiras, i = 5 e j = 10.
    int *p, *q;         // Declaração de dois ponteiros para inteiros, p e q.

    // 1. p = &i;
    // Atribui ao ponteiro p o endereço da variável i. Isso é válido.
    p = &i;  
    printf("p = &i: p = %p (endereço de i)\n", (void*)p);  // Exibe o endereço de i armazenado em p.

    // 2. *q = &j;
    // Esta linha gera erro de compilação porque *q desreferencia q, esperando um valor int,
    // mas &j é um endereço (int*), o que causa incompatibilidade de tipos.

    // 3. p = &*&i;
    // Aqui, &i obtém o endereço de i, e *&i desreferencia e retorna o valor de i.
    // O resultado é equivalente a p = &i, e é válido.
    p = &*&i;
    printf("p = &*&i: p = %p (endereço de i)\n", (void*)p);  // Exibe o endereço de i armazenado em p.

    // 4. i = (*&)j;
    // Esta linha gera erro de compilação devido ao uso incorreto de (*&).
    // A sintaxe (*&) não é válida.

    // 5. i = *&j;
    // &j obtém o endereço de j, e *&j desreferencia esse endereço, obtendo o valor de j.
    // O valor de j é atribuído a i. Isso é válido.
    i = *&j;
    printf("i = *&j: i = %d (valor de j)\n", i);  // Exibe o valor de j atribuído a i.

    // 6. i = *&*&j;
    // &j obtém o endereço de j, *&j desreferencia o endereço e retorna o valor de j.
    // Isso é equivalente a i = j e é válido.
    i = *&*&j;
    printf("i = *&*&j: i = %d (valor de j)\n", i);  // Exibe o valor de j atribuído a i.

    // 7. q = *p;
    // Esta linha gera erro de compilação porque *p desreferencia o ponteiro p e retorna o valor
    // de i (um int), mas q espera receber um ponteiro (int*). Atribuição incompatível.
    // q = *p;  // DESCOMENTAR para ver o erro de compilação.

    // 8. i = (*p)++ + *q;
    // *p desreferencia o ponteiro p (obtém o valor de i), e (*p)++ incrementa o valor de i após usá-lo.
    // *q desreferencia o ponteiro q, obtendo o valor de j. A soma é atribuída a i.
    // Isso é válido, mas precisa garantir que q aponte para algo válido.
    p = &i;  // Aponta p para i.
    q = &j;  // Aponta q para j.
    i = (*p)++ + *q;  // i = 5 (antes do incremento) + 10 = 15, e depois i é incrementado.
    printf("i = (*p)++ + *q: i = %d, p = %d\n", i, *p);  // Exibe o valor de i e o valor atualizado de p.

    return 0;
}
