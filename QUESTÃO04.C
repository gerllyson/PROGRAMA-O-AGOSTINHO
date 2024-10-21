#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";  // "nome" aponta para o início da string "Ponteiros"
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;    // valor recebe 10
    p1 = &valor;   // p1 aponta para o endereço de valor
    *p1 = 20;      // altera o valor no endereço apontado por p1, ou seja, valor = 20
    printf("%d \n", valor);  // Imprime 20

    /* (b) */
    temp = 26.5;   // temp recebe 26.5
    p2 = &temp;    // p2 aponta para temp
    *p2 = 29.0;    // altera o valor no endereço apontado por p2, ou seja, temp = 29.0
    printf("%.1f \n", temp);  // Imprime 29.0

    /* (c) */
    p3 = &nome[0]; // p3 aponta para o primeiro caractere da string "Ponteiros"
    aux = *p3;     // aux recebe o valor apontado por p3, ou seja, 'P'
    printf("%c \n", aux);  // Imprime 'P'

    /* (d) */
    p3 = &nome[4]; // p3 aponta para o caractere na posição 4 (índice 4) de "Ponteiros", que é 'e'
    aux = *p3;     // aux recebe 'e'
    printf("%c \n", aux);  // Imprime 'e'

    /* (e) */
    p3 = nome;     // p3 volta a apontar para o início da string "Ponteiros"
    printf("%c \n", *p3);  // Imprime o primeiro caractere, 'P'

    /* (f) */
    p3 = p3 + 4;   // p3 avança 4 posições, agora aponta para o caractere 'e'
    printf("%c \n", *p3);  // Imprime 'e'

    /* (g) */
    p3--;          // p3 recua uma posição, agora aponta para o caractere 't'
    printf("%c \n", *p3);  // Imprime 't'

    /* (h) */
    vetor[0] = 31; // vetor[0] recebe 31
    vetor[1] = 45; // vetor[1] recebe 45
    vetor[2] = 27; // vetor[2] recebe 27
    p4 = vetor;    // p4 aponta para o início do vetor (vetor[0])
    idade = *p4;   // idade recebe o valor apontado por p4, ou seja, 31
    printf("%d \n", idade);  // Imprime 31

    /* (i) */
    p5 = p4 + 1;   // p5 aponta para o próximo elemento do vetor, ou seja, vetor[1]
    idade = *p5;   // idade recebe o valor de vetor[1], ou seja, 45
    printf("%d \n", idade);  // Imprime 45

    /* (j) */
    p4 = p5 + 1;   // p4 avança para vetor[2]
    idade = *p4;   // idade recebe o valor de vetor[2], ou seja, 27
    printf("%d \n", idade);  // Imprime 27

    /* (l) */
    p4 = p4 - 2;   // p4 recua duas posições, agora aponta para vetor[0]
    idade = *p4;   // idade recebe o valor de vetor[0], ou seja, 31
    printf("%d \n", idade);  // Imprime 31

    /* (m) */
    p5 = &vetor[2] - 1;  // p5 aponta para vetor[1]
    printf("%d \n", *p5);  // Imprime 45 (valor de vetor[1])

    /* (n) */
    p5++;           // p5 avança para vetor[2]
    printf("%d \n", *p5);  // Imprime 27 (valor de vetor[2])

    return 0;
}
