#include <stdio.h>

void funcao(char **p){
  char *t;
  // (p += sizeof(int))[-1]:
  // `p += sizeof(int)`: Aqui, estamos movendo o ponteiro `p` para a frente em uma quantidade equivalente a `sizeof(int)`.
  // Como `sizeof(int)` é 4 e `p` é um ponteiro para ponteiro `char`, ele será deslocado 4 posições à frente no array `a`.
  // Após essa operação, `p` apontará para `a[4]`, ou seja, para a string `"ij"`.
  //
  // `[-1]`: Agora acessamos o elemento antes de `p`, ou seja, `p[-1]`, que é `a[3]`, apontando para `"gh"`.
  t = (p += sizeof(int))[-1];
  
  // `printf("%s\n", t);`: Esta linha imprime o valor apontado por `t`, que é `"gh"`.
  printf("%s\n", t);
}

int main(){
  // `char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};`
  // Declaramos um array de ponteiros `char` contendo 6 strings.
  // Cada elemento de `a` aponta para o primeiro caractere de cada string.
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  
  // Chamamos `funcao(a);` passando o array `a`.
  funcao(a);
  return 0;
}
