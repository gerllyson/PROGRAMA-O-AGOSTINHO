/* Memory leak (vazamento de memória) ocorre quando um programa aloca memória dinamicamente, mas não a libera, resultando em uma parte da memória que não pode ser reutilizada.



#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Aloca memória para um inteiro
    if (ptr == NULL) return 1; // Verifica se a alocação foi bem-sucedida

    *ptr = 42; // Atribui um valor
    printf("Valor: %d\n", *ptr); // Usa o valor

    free(ptr); // Libera a memória alocada para evitar o memory leak
    return 0; // Agora não há vazamento de memória
}
