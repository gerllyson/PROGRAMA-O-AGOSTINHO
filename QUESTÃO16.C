#include <stdio.h>

int main(void) {
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; // Operação válida
scanf("%f", &aloha); // Operação válida
aloha = "value"; // Operação inválida
printf("%f", aloha); // Operação válida
coisas[4][4] = aloha[3]; // Operação válida
coisas[5] = aloha; // Operação inválida
pf = value; // Operação inválida
pf = aloha; // Operação válida
}
