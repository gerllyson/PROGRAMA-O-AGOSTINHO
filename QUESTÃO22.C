#include <stdio.h>    // Inclui biblioteca para entrada e saída de dados
#include <stdlib.h>   // Inclui biblioteca para alocação de memória e qsort
#include <time.h>     // Inclui biblioteca para medir o tempo de execução

// Declaração de uma função de ordenação simples
void meuMetodoOrdenacao(int *array, int tamanho);

// Função de comparação para qsort
int compara(const void *a, const void *b);

int main() {
    int n = 10000;  // Define o tamanho do array a ser ordenado

    // Aloca dinamicamente dois arrays para testar diferentes métodos de ordenação
    int *array1 = malloc(n * sizeof(int));
    int *array2 = malloc(n * sizeof(int));

    // Preenche os arrays com valores aleatórios
    for (int i = 0; i < n; i++) {
        int valor = rand() % 10000;  // Gera número aleatório entre 0 e 9999
        array1[i] = valor;           // Armazena o valor no primeiro array
        array2[i] = valor;           // Armazena o valor no segundo array
    }

    // Medindo o tempo de execução do meu método de ordenação
    clock_t inicio1 = clock();           // Registra o tempo de início
    meuMetodoOrdenacao(array1, n);       // Executa a ordenação com o método personalizado
    clock_t fim1 = clock();              // Registra o tempo de fim
    double tempo1 = (double)(fim1 - inicio1) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido em segundos

    // Medindo o tempo de execução da função qsort
    clock_t inicio2 = clock();           // Registra o tempo de início
    qsort(array2, n, sizeof(int), compara);  // Executa a ordenação com qsort
    clock_t fim2 = clock();              // Registra o tempo de fim
    double tempo2 = (double)(fim2 - inicio2) / CLOCKS_PER_SEC;  // Calcula o tempo decorrido em segundos

    // Exibe os tempos de execução de cada método
    printf("Tempo do meu método de ordenação: %f segundos\n", tempo1);
    printf("Tempo do método qsort: %f segundos\n", tempo2);

    // Libera a memória alocada para os arrays
    free(array1);
    free(array2);

    return 0;  // Indica que o programa terminou com sucesso
}

// Implementação de um método simples de ordenação, aqui usando Bubble Sort
void meuMetodoOrdenacao(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {          // Loop externo para cada elemento
        for (int j = 0; j < tamanho - i - 1; j++) {  // Loop interno para comparações
            if (array[j] > array[j + 1]) {           // Verifica se os elementos estão fora de ordem
                int temp = array[j];                 // Salva o elemento atual
                array[j] = array[j + 1];             // Troca os elementos
                array[j + 1] = temp;                 // Conclui a troca
            }
        }
    }
}

// Função de comparação para qsort em ordem crescente
int compara(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);  // Retorna diferença entre os valores para indicar a ordem
}
