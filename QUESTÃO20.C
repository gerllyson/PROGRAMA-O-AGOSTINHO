#include <stdio.h>    // Inclui a biblioteca padrão de entrada e saída para usar printf e scanf
#include <stdlib.h>   // Inclui a biblioteca padrão para funções como malloc, free e qsort

// Função de comparação para ordenar os floats em ordem crescente
// A função qsort() usa essa função para definir a ordem dos elementos no array
int compare(const void *a, const void *b) {
    float fa = *(const float*)a;  // Converte o ponteiro void para um ponteiro float e acessa o valor de 'a'
    float fb = *(const float*)b;  // Converte o ponteiro void para um ponteiro float e acessa o valor de 'b'
    return (fa > fb) - (fa < fb); // Retorna 1 se fa > fb, -1 se fa < fb, e 0 se forem iguais
}

// Função principal que executa o programa
int main() {
    int n;  // Declara a variável 'n' para armazenar o número de valores que o usuário deseja ordenar

    // Solicita ao usuário que informe quantos valores deseja ordenar e armazena o valor em 'n'
    printf("Quantos valores você deseja ordenar? ");
    scanf("%d", &n); // Lê o valor de 'n' a partir da entrada do usuário

    // Aloca memória dinamicamente para um array de 'n' valores float
    // Usa malloc para reservar um espaço de n * sizeof(float) bytes
    float *valores = (float*)malloc(n * sizeof(float));
    if (valores == NULL) {  // Verifica se a alocação de memória foi bem-sucedida
        printf("Erro de alocação de memória.\n");  // Imprime uma mensagem de erro se malloc falhar
        return 1;  // Retorna 1 para indicar erro e en
