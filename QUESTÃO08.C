#include <stdio.h>

int main() {
    int pulo[] = {10, 20, 30, 40, 50};  // Vetor de inteiros com 5 elementos

    // Expressões
    printf("Valor do terceiro elemento usando *(pulo + 2): %d\n", *(pulo + 2));  // Correto
    printf("Valor do quinto elemento usando *(pulo + 4): %d\n", *(pulo + 4));    // Errado (acessa o quinto elemento)
    printf("Endereco do quinto elemento usando pulo + 4: %p\n", (pulo + 4));     // Endereço do quinto elemento
    printf("Endereco do terceiro elemento usando pulo + 2: %p\n", (pulo + 2));   // Endereço do terceiro elemento

    return 0;
}
