#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenar os floats em ordem crescente
// A função será usada pelo qsort para decidir a ordem dos elementos
int compare(const void *a, const void *b) {
    if (*(float*)a > *(float*)b) return 1;   // Retorna 1 se o valor apontado por 'a' é maior que 'b'
    if (*(float*)a < *(float*)b) return -1;  // Retorna -1 se o valor apontado por 'a' é menor que 'b'
    return 0;                                // Retorna 0 se os valores são iguais
}

// Função que lê n valores float, ordena e exibe em ordem crescente
void float_input_sort(int n) {
    // Aloca memória dinamicamente para armazenar n valores float
    float *valores = (float*)malloc(n * sizeof(float));
    if (valores == NULL) { // Verifica se a alocação foi bem-sucedida
        printf("Erro de alocação de memória.\n");
        exit(1); // Termina o programa caso a alocação falhe
    }

    // Leitura dos valores do teclado
    printf("Digite %d valores float:\n", n);
    for (int i = 0; i < n; i++) {  // Loop para ler cada valor e armazenar no array 'valores'
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);  // Armazena cada entrada no array 'valores'
    }

    // Ordena os valores utilizando qsort
    // 'qsort' é uma função de ordenação padrão da biblioteca C; recebe o array,
    // o número de elementos, o tamanho de cada elemento e a função de comparação
    qsort(valores, n, sizeof(float), compare);

    // Exibe os valores em ordem crescente após a ordenação
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]); // Imprime cada valor float com duas casas decimais
    }
    printf("\n");

    // Libera a memória alocada para evitar vazamentos de memória
    free(valores);
}

int main() {
    int n; // Declara a variável 'n' para armazenar o número de valores a serem lidos
    printf("Quantos valores você deseja ordenar? ");
    scanf("%d", &n); // Lê o valor de 'n' inserido pelo usuário

    // Chama a função que lê, ordena e exibe os valores
    float_input_sort(n);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
