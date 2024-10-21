#include <stdio.h>

int main() {
    int i = 3, j = 5;   // Declaração de variáveis inteiras 'i' com valor 3 e 'j' com valor 5.
    int *p, *q;         // Declaração de dois ponteiros 'p' e 'q' para inteiros.

    p = &i;             // O ponteiro 'p' recebe o endereço de 'i'. Agora, 'p' aponta para 'i'.
    q = &j;             // O ponteiro 'q' recebe o endereço de 'j'. Agora, 'q' aponta para 'j'.

    // 1. Expressão: p == &i;
    // Verifica se o valor armazenado em 'p' (o endereço de 'i') é igual ao próprio endereço de 'i'.
    // Como 'p' foi atribuído com '&i', esta expressão é verdadeira (1).
    printf("p == &i: %d\n", p == &i); // Saída será 1 (verdadeiro).

    // 2. Expressão: *p - *q;
    // *p é o valor de 'i' (3), e *q é o valor de 'j' (5).
    // Portanto, *p - *q é 3 - 5 = -2.
    printf("*p - *q: %d\n", *p - *q); // Saída será -2.

    // 3. Expressão: **&p;
    // Primeiro, &p dá o endereço do ponteiro 'p'.
    // Temos o valor de 'i', que é 3.
    printf("**&p: %d\n", **&p); // Saída será 3.

    // 4. Expressão: 3 - *p / (*q) + 7;
    // Resolvendo passo a passo:
    // *p é o valor de 'i' (3) e *q é o valor de 'j' (5).
    // Primeiro, realizamos a divisão: *p / *q = 3 / 5 = 0 (divisão inteira).
    // Agora, a expressão fica: 3 - 0 + 7 = 10.
    printf("3 - *p / (*q) + 7: %d\n", 3 - *p / (*q) + 7); // Saída será 10.

    return 0;
}
