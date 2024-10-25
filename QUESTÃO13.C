#include <stdio.h>

/* Posso demonstrar um Programa simples para observar o endereço das variáveis quando incrementamos. Se considerarmos o endereço inicial de x como 4092 os resultados serão:

char:
x+1 = 4093
x+2 = 4094
x+3 = 4095

int:
x+1 = 4094
x+2 = 4096
x+3 = 4098

float:
x+1 = 4096
x+2 = 4100
x+3 = 4104

double:
x+1 = 4100
x+2 = 4108
x+3 = 4116
*/

int main(void) {
  char *x[4];
  char *x1;
  int *y[4];
  int *y1;
  float *z[4];
  float *z1;
  double *a[4];
  double *a1;

  x1 = &x;
  y1 = &y;
  z1 = &z;
  a1 = &a;

  printf("variável char:\n");
  printf("endereço= %X \n",x1+1);
  printf("endereço= %X \n",x1+2);
  printf("endereço= %X \n",x1+3);

  printf("variável int:\n");
  printf("endereço= %X \n",y1+1);
  printf("endereço= %X \n",y1+2);
  printf("endereço= %X \n",y1+3);

  printf("variável float:\n");
  printf("endereço= %X \n",z1+1);
  printf("endereço= %X \n",z1+2);
  printf("endereço= %X \n",z1+3);

  printf("variável double:\n");
  printf("endereço= %X \n",a1+1);
  printf("endereço= %X \n",a1+2);
  printf("endereço= %X \n",a1+3);

  return 0;
  }
