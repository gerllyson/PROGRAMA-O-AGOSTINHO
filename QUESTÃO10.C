
// PRIMEIRO COD

#include <stdio.h>
int main() {
    int vet[] = {4, 9, 13};  // Vetor de inteiros com 3 elementos
    int i;
    for(i = 0; i < 3; i++) {
        printf("%d ", *(vet + i));  // Imprime o valor do elemento vet[i] usando aritmética de ponteiros
    }
}

// SEGUNDO COD

#include <stdio.h>
int main() {
    int vet[] = {4, 9, 13};  // Vetor de inteiros com 3 elementos
    int i;
    for(i = 0; i < 3; i++) {
        printf("%X ", vet + i);  // Imprime o endereço do elemento vet[i] em hexadecimal
    }
}
