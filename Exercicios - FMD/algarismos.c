#include <stdio.h>
  
int contador(int n)
{
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int n;
  printf("\nDigite um número positivo: ");
        scanf("%i", &n);
    printf("Número de digitos: %d = %d\n",
 n, contador(n));
    return 0;
}