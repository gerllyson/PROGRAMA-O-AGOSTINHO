#include <string.h>  // Biblioteca necessária para usar a função strcpy.
#include <stdio.h>   // Biblioteca para usar funções de entrada e saída, como puts.
#include <stdlib.h>  // Biblioteca para funções de alocação dinâmica de memória, como malloc e free.

void funcao(char** str) {
    // A função recebe um ponteiro duplo (ponteiro para ponteiro) de char.
    // A função tenta mover o ponteiro para frente, mas isso não afeta o ponteiro original.
    // Isso ocorre porque estamos alterando apenas a cópia local de str, não o ponteiro original.
    str++;  // Incrementa o ponteiro localmente, mas não altera o ponteiro real na função main.
}

int main() {
    // Aloca dinamicamente 50 bytes de memória para armazenar uma string.
    char *str = (void *)malloc(50 * sizeof(char));  // (void*) casting é desnecessário em C, mas funciona.
    
    // Copia a string "Agostinho" para o espaço de memória alocado apontado por str.
    strcpy(str, "Agostinho");  
    
    // Chama a função passando o endereço de str (&str), o que significa que estamos passando um ponteiro para ponteiro.
    funcao(&str);  
    
    // Exibe a string apontada por str.
    // Esperava-se que a string fosse "gostinho", mas o ponteiro str não foi realmente modificado na função `funcao`.
    puts(str);  // Isso imprimirá "Agostinho", pois `str` não foi alterado na função.
    
    // Libera a memória alocada.
    free(str);  
    
    return 0;
}
