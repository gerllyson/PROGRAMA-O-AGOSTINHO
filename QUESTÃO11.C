#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h>  // Inclui a biblioteca para uso de malloc para alocação dinâmica de memória

// Define a estrutura "teste"
struct teste {
    int x;                // Membro inteiro "x" para armazenar um valor numérico.
    // OBSERVAÇÃO DO ERRO: Não podemos inicializar o valor de "x" aqui, como em "int x = 3;".
    // Inicializações dentro de structs não são permitidas em C e causam erro.
    // Para corrigir isso, inicializaremos o valor de "x" depois de criar uma instância do struct.
    
    char nome[20];        // Declara um array de char de tamanho 20 para armazenar o nome.
    // OBSERVAÇÃO DO ERRO: No código original, o membro "nome" foi declarado como "char nome[] = 'jose';",
    // mas em C, não podemos inicializar uma string diretamente em um struct dessa forma.
    // Aqui declaramos o array "nome" com tamanho 20 e, posteriormente, inicializaremos seu valor.
};

int main() {              // Função main com retorno do tipo int, o padrão para programas em C
    struct teste *s;      // Declara um ponteiro para uma estrutura do tipo "teste"

    // ERRO NO CÓDIGO ORIGINAL:
    // No código original, `s` foi usado sem alocação de memória, o que leva a comportamento indefinido.
    // Para corrigir isso, usamos malloc para alocar memória suficiente para armazenar a estrutura "teste".
    s = (struct teste *)malloc(sizeof(struct teste));  // malloc aloca a memória e retorna um ponteiro para essa área.

    // Verifica se a alocação de memória foi bem-sucedida
    if (s == NULL) {      // Se malloc falhar, ele retorna NULL, indicando erro de alocação.
        printf("Erro ao alocar memória.\n");  // Exibe mensagem de erro caso a alocação falhe.
        return 1;         // Retorna 1 para indicar que houve uma falha e encerra o programa
    }
    
    // Inicializa os membros da estrutura
    s->x = 3;             // Atribui o valor 3 ao membro "x" da estrutura apontada por "s"
    // CORREÇÃO: A inicialização do valor de "x" precisa ser feita depois que a estrutura é criada.
    
    snprintf(s->nome, 20, "jose");   // Copia a string "jose" para o array "nome".
    // CORREÇÃO: Com o array "nome" de tamanho 20, agora podemos atribuir a string usando snprintf,
    // que garante que a string não ultrapasse o limite do array e evita problemas de segurança.

    // Imprime os valores dos membros da estrutura
    printf("%d\n", s->x); // Imprime o valor do membro "x" (esperado: 3)
    printf("%s\n", s->nome);  // Imprime o valor do membro "nome" (esperado: "jose")
    
    // Libera a memória alocada para o ponteiro
    free(s);              // Libera a memória alocada para "s", prevenindo vazamento de memória

    return 0;             // Retorna 0 indicando que o programa terminou com sucesso
}
