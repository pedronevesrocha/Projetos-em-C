#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor[10], totalproduto, totalvenda = 0, comissao;
    int qtd[10], i, j;

    for( i = 0 ; i < 10 ; i++ ){
        printf("\nDigite o valor e a quantidade de vendas do produto  %i.", i + 1);
            scanf("%f %i", &valor[i], &qtd[i]);
    }

    for( i = 0 ; i < 10 ; i++ ){
        printf("\n\nA quantidade de vendas do produto %2i e de: %i.", (i + 1), qtd[i]);
        printf("\nO valor unitario do produto %2i e: %.2f.", (i + 1), valor[i]);
        totalproduto = 0;
        for( j = 0 ; j < qtd[i] ; j++ ){
            totalproduto = totalproduto + valor[i];
        }
        printf("\nO valor total do produto %2i e: %.2f.", i, totalproduto);
        totalvenda = totalvenda + totalproduto;
    }

    printf("\n\nO valor total da venda e: %.2f.", totalvenda);

    comissao = ( 400.00 + ( totalvenda * 0.05 ) );

    printf("\n\nO valor da comissao do vendedor e: %.2f.", comissao);

    for( i = 0 ; i < 10 ; i++ ){
        for( j = 0 ; j < 10 ; j++ ){
            if( qtd[i] < qtd[j] ){
                break;
            }
            else if( j == 9 ){
                printf("\n\nO produto mais vendido foi o produto %2i.", (i + 1));
            }
        }
    }

    return 0;
}