#include <stdio.h>

int main()
{
   int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

    return 0;
}

int i = 3, j = 5;  // Declara duas variáveis inteiras 'i' com valor 3 e 'j' com valor 5.

int *p, *q;  // Declara dois ponteiros para inteiros, 'p' e 'q'. Esses ponteiros ainda não apontam para nenhum endereço.

p = &i;  // O ponteiro 'p' recebe o endereço de 'i'. Agora, 'p' aponta para a variável 'i'.

q = &j;  // O ponteiro 'q' recebe o endereço de 'j'. Agora, 'q' aponta para a variável 'j'.
