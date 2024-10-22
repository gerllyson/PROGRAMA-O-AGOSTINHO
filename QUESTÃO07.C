int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};  // Vetor de 5 floats
    float *f;  // Ponteiro para float
    int i;
    
    f = vet;  // Ponteiro f aponta para o início do vetor vet
    
    printf("contador/valor/valor/endereco/endereco\n");
    
    // Loop para imprimir os valores e endereços
    for(i = 0; i <= 4; i++) {
        printf("i = %d", i);                     // Mostra o índice i
        printf(" vet[%d] = %.1f", i, vet[i]);    // Mostra o valor no índice i do vetor
        printf(" *(f + %d) = %.1f", i, *(f + i));  // Mostra o valor no endereço (f + i)
        printf(" &vet[%d] = %X", i, &vet[i]);    // Mostra o endereço de vet[i] (hexadecimal)
        printf(" (f + %d) = %X", i, f + i);      // Mostra o endereço f + i (hexadecimal)
        printf("\n");
    }
    return 0;
}
