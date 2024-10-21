#include <stdio.h>

int main() {
    int i = 5;  
    int *p; 
    p = &i;    
    // Aqui vamos imprimir 6 valores:
    // 1. O valor de 'p', que é o endereço de 'i'. Sabemos que o endereço de 'i' é 4094.
    // 2. O valor de 'p + 1', que é o próximo endereço de memória que 'p' acessaria.
    //    Como inteiros ocupam 2 bytes, p+1 irá avançar 2 bytes, então o próximo endereço será 4094 + 2 = 4096.
    // 3. O valor de '*p + 2', que desreferencia 'p' (acessando o valor de 'i', que é 5), e soma 2 ao valor. Isso dá 5 + 2 = 7.
    // 4. O valor de '**&p', que acessa o valor de 'p' através do seu próprio endereço, que é equivalente a '*p' (desreferenciar 'p').
    //    O valor de '*p' é o valor de 'i', que é 5.
    // 5. O valor de '3 * *p', que é 3 vezes o valor de 'i'. Isso dá 3 * 5 = 15.
    // 6. O valor de '**&p + 4', que é o valor de '*p' (ou seja, 'i', que é 5), somado a 4. Isso dá 5 + 4 = 9.
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

    return 0;
}
