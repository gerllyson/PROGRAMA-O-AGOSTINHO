#include <stdio.h>    // Inclui a biblioteca padrão para entrada e saída de dados, usada para printf e scanf
#include <stdlib.h>   // Inclui a biblioteca padrão para funções como malloc, free e conversões de tipo

// Função de comparação para ordenação crescente
int compare_asc(const void *a, const void *b) {
    // Converte e desreferencia os ponteiros void para int, depois retorna a diferença entre eles
    return (*(int*)a - *(int*)b); // Retorna valor negativo se a < b, positivo se a > b e zero se forem iguais
}

// Função de comparação para ordenação decrescente
int compare_desc(const void *a, const void *b) {
    // Converte e desreferencia os ponteiros void para int, mas inverte a ordem ao subtrair
    return (*(int*)b - *(int*)a); // Retorna valor positivo se a < b, negativo se a > b, zero se forem iguais
}

// Função de ordenação para inteiros, que aceita um ponteiro para função de comparação
void int_sort(int *array, int n, int (*compare)(const void*, const void*)) {
    for (int i = 0; i < n - 1; i++) {         // Loop externo que percorre até o penúltimo elemento do array
        for (int j = i + 1; j < n; j++) {     // Loop interno para comparar o elemento 'i' com os elementos subsequentes
            // Chama a função de comparação passada como argumento; troca se a ordem estiver incorreta
            if (compare(&array[i], &array[j]) > 0) { 
                int temp = array[i];          // Se a ordem estiver errada, armazena array[i] em temp para fazer a troca
                array[i] = array[j];          // Atribui o valor de array[j] a array[i]
                array[j] = temp;              // Coloca o valor inicial de array[i] em array[j]
            }
        }
    }
}

int main() {
    int n;  // Declara uma variável para armazenar o número de elementos que o usuário deseja ordenar

    // Solicita ao usuário o número de valores a serem ordenados
    printf("Quantos valores você deseja ordenar? ");
    scanf("%d", &n); // Lê a quantidade de valores a partir da entrada do usuário

    // Aloca dinamicamente memória para um array de inteiros com 'n' elementos
    int *valores = (int*)malloc(n * sizeof(int));
    if (valores == NULL) {  // Verifica se a alocação foi bem-sucedida
        printf("Erro de alocação de memória.\n");  // Se malloc retornar NULL, mostra erro e encerra o programa
        return 1;
    }

    // Leitura dos valores do usuário para preencher o array
    printf("Digite %d valores inteiros:\n", n);
    for (int i = 0; i < n; i++) {  // Loop para ler cada valor
        printf("Valor %d: ", i + 1);  // Exibe o número do valor que está sendo lido
        scanf("%d", &valores[i]);     // Lê o valor e armazena na posição i do array
    }

    // Chama a função de ordenação, passando o array, seu tamanho e a função de comparação
    // Para ordenar em ordem crescente, passamos compare_asc; para decrescente, compare_desc
    int_sort(valores, n, compare_asc);

    // Exibe os valores após a ordenação
    printf("\nValores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {      // Loop para percorrer o array ordenado
        printf("%d ", valores[i]);     // Exibe cada valor em sequência
    }
    printf("\n");                      // Pula uma linha após a impressão dos valores

    // Libera a memória alocada para o array para evitar vazamento de memória
    free(valores);

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
