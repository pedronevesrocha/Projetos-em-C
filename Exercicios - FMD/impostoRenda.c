#include <stdio.h>

float salario, percentual; 

int main() {
  printf("Digite o seu salário: ");
  scanf("%f", &salario);
if (salario <= 1903.98)
  printf("Isento do imposto de renda");

if (salario < 2826.65 &&  salario > 1903.99)
  printf("Seu imposto é de %.2f", salario * 0.075);

if (salario < 3751.05 && salario > 2826.66)
  printf("Seu imposto é de %.2f", salario * 0.15);

if (salario < 4664.68 && salario > 3751.06)
  printf("Seu imposto é de %.2f", salario * 0.225);

if (salario >= 4664.68)
  printf("Seu imposto é de %.2f", salario * 0.275);

  else return (0);



}