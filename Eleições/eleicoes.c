#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>



int main()
{
    int v=7, c1=0, c2=0, c3=0, c4=0, vn=0, vb=0;
    printf("Bem vindo! Iniciando as votações!");

    while(v!=0)
    {
        printf("\n\n 1-Candidato 1\n 2-Candidato 2\n 3 -Candidato 3\n 4-Candidato 4\n 5-Voto em branco\n 6-Voto Nulo");
        printf("\nDigite o numero correspondente ao seu voto e aperte ENTER: ");
        scanf("%i", &v)

        switch (v)
        {
        case 0: 
        printf("\nVotação Encerrada"); 
        break;

        case 1: 
        c1 = c1 + 1;
        printf("\nVoto registrado!!");
        break;

         case 2: 
        c2 = c2 + 1;
        printf("\nVoto registrado!!");
        break;

         case 3: 
        c3 = c3 + 1;
        printf("\nVoto registrado!!");
        break;

         case 4: 
        c4 = c4 + 1;
        printf("\nVoto registrado!!");
        break;

         case 5: 
        vn = vn + 1;
        printf("\nVoto registrado!!");
        break;

         case 6: 
        vb = vb + 1;
        printf("\nVoto registrado!!");
        break;

        default: 
        printf("\nOpção Invalida!!"); 
        break;
        }
    }
    printf("Resultados:\n Candidato 1\t %i\n Candidato 2\t %i\n Candidato 3\t %i\n Candidato 4\t %i\n Votos Nulos\t %i\n Votos em Branco\t %i\n",c1,c2,c3,c4,vn,vb);  







        getchar();
        printf("\n\n");
        system("pause");
        return(0);
    }