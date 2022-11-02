#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c,    
          delta,     
          sqrtdelta,  
        raiz1,raiz2;  

        
        printf("Equação do 2° grau: ax² + bx + cx = 0\n");

        printf("Entre com o valor de a: ");
        scanf("%f", &a);

        printf("Entre com o valor de b: ");
        scanf("%f", &b);

        printf("Entre com o valor de c: ");
        scanf("%f", &c);


        
        if(a != 0)
        {

        
            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);

        
            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Raízes: %.2f e %.2f", raiz1, raiz2);
            }
      
            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Raíz 1: %.2f + %.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Raíz 2: %.2f - %.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inválido. Não é uma equação do 2o grau");
}